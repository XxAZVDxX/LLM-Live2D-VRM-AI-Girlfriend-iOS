#pragma once

#include <vector>
#include <string.h>
#include <gc/Allocator.h>

namespace il2cpp
{
namespace gc
{
    // A std::vector whose storage is scanned by the GC. The vector's buffer is usually larger than its
    // size, and the GC scans the whole buffer, so every operation that shrinks the vector must zero the
    // slots it vacates or the objects they last referenced are kept alive.
    //
    // The base is inherited privately so that shrinking operations can't bypass that cleanup; only the
    // non-shrinking parts of the std::vector API are re-exported, and the shrinking ones are wrapped.
    template<typename T>
    class GCTrackedVector : private std::vector<T, il2cpp::gc::Allocator<T> >
    {
        typedef std::vector<T, il2cpp::gc::Allocator<T> > BaseVector;

    public:
        typedef typename BaseVector::value_type value_type;
        typedef typename BaseVector::size_type size_type;
        typedef typename BaseVector::reference reference;
        typedef typename BaseVector::const_reference const_reference;
        typedef typename BaseVector::iterator iterator;
        typedef typename BaseVector::const_iterator const_iterator;

        GCTrackedVector() = default;
        GCTrackedVector(const GCTrackedVector&) = default;

        // Copy assignment can shrink the vector in place. il2cpp::gc::Allocator has no operator== so
        // std::vector's copy assignment doesn't compile with it anyway; delete it rather than wrap it.
        GCTrackedVector& operator=(const GCTrackedVector&) = delete;

        using BaseVector::begin;
        using BaseVector::end;
        using BaseVector::size;
        using BaseVector::empty;
        using BaseVector::capacity;
        using BaseVector::reserve;
        using BaseVector::data;
        using BaseVector::operator[];
        using BaseVector::front;
        using BaseVector::back;
        using BaseVector::push_back;

        iterator erase(iterator position)
        {
            iterator it = BaseVector::erase(position);
            clear_free_space();
            return it;
        }

        iterator erase(iterator first, iterator last)
        {
            iterator it = BaseVector::erase(first, last);
            clear_free_space();
            return it;
        }

        void pop_back()
        {
            BaseVector::pop_back();
            clear_free_space();
        }

        void resize(size_type count)
        {
            BaseVector::resize(count);
            clear_free_space();
        }

        void clear()
        {
            BaseVector::clear();
            clear_free_space();
        }

    private:
        void clear_free_space()
        {
            if (this->capacity() == this->size())
                return;

            // The slots past size() hold destroyed elements, so it is safe to overwrite their storage.
            memset((void*)(this->data() + this->size()), 0, (this->capacity() - this->size()) * sizeof(T));
        }
    };
}
}
