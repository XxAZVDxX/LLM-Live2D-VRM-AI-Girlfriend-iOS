#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (*callbackFunc)(const char *);
static callbackFunc asyncCallback;

@interface  StandaloneFileBrowser : NSObject<UIDocumentPickerDelegate>
+ (void)    createOpenPanel:(NSString*)title
            directory:(NSString*)directory
            filters:(NSString*)filters
            multiselect:(BOOL)multiselect
            canChooseFiles:(BOOL)canChooseFiles
            canChooseFolders:(BOOL)canChooseFolders
            save:(BOOL)save;
@end

extern "C" {
    const char* DialogOpenFilePanel(const char* title,
                                    const char* directory,
                                    const char* filters,
                                    bool multiselect);
    void DialogOpenFilePanelAsync(const char* title,
                                  const char* directory,
                                  const char* filters,
                                  bool multiselect,
                                  callbackFunc cb);
    const char* DialogOpenFolderPanel(const char* title,
                                      const char* directory,
                                      bool multiselect);
    void DialogOpenFolderPanelAsync(const char* title,
                                    const char* directory,
                                    bool multiselect,
                                    callbackFunc cb);
    const char* DialogSaveFilePanel(const char* title,
                                    const char* directory,
                                    const char* defaultName,
                                    const char* filters);
    void DialogSaveFilePanelAsync(const char* title,
                                  const char* directory,
                                  const char* defaultName,
                                  const char* filters,
                                  callbackFunc cb);
    UIViewController* UnityGetGLViewController();
}

const char* DialogOpenFilePanel(const char* title,
                                const char* directory,
                                const char* filters,
                                bool multiselect) {
    return 0;
    
}

void DialogOpenFilePanelAsync(const char* title,
                              const char* directory,
                              const char* filters,
                              bool multiselect,
                              callbackFunc cb) {
    asyncCallback = cb;
    [StandaloneFileBrowser  createOpenPanel:[NSString stringWithUTF8String:title ?: ""]
                            directory:[NSString stringWithUTF8String:directory ?: ""]
                            filters:[NSString stringWithUTF8String:filters ?: ""]
                            multiselect:multiselect
                            canChooseFiles:YES
                            canChooseFolders:NO
                            save:NO];
}

const char* DialogOpenFolderPanel(const char* title,
                                  const char* directory,
                                  bool multiselect) {
    return 0;
}

void DialogOpenFolderPanelAsync(const char* title,
                                const char* directory,
                                bool multiselect,
                                callbackFunc cb) {
    asyncCallback = cb;
    [StandaloneFileBrowser  createOpenPanel:[NSString stringWithUTF8String:title ?: ""]
                            directory:[NSString stringWithUTF8String:directory ?: ""]
                            filters:@""
                            multiselect:multiselect
                            canChooseFiles:NO
                            canChooseFolders:YES
                            save:NO];
}

const char* DialogSaveFilePanel(const char* title,
                                const char* directory,
                                const char* defaultName,
                                const char* filters) {
    return 0;
}

void DialogSaveFilePanelAsync(const char* title,
                              const char* directory,
                              const char* defaultName,
                              const char* filters,
                              callbackFunc cb) {
    asyncCallback = cb;
    [StandaloneFileBrowser  createOpenPanel:[NSString stringWithUTF8String:title ?: ""]
                            directory:[NSString stringWithUTF8String:directory ?: ""]
                            filters:@""
                            multiselect:NO
                            canChooseFiles:YES
                            canChooseFolders:NO
                            save:YES];
}

@implementation StandaloneFileBrowser
+ (void)    documentPicker:(UIDocumentPickerViewController *)controller
            didPickDocumentsAtURLs:(NSArray <NSURL *>*)urls {
    NSString* pathsStr = @"";
    NSMutableArray* paths = [NSMutableArray arrayWithCapacity:[urls count]];
    for (int i = 0; i <  [urls count]; i++) {
        NSURL* url = [urls objectAtIndex:i];
        [paths addObject:[url path]];
    }
    NSString* seperator = [NSString stringWithFormat:@"%c", 28];
    pathsStr = [paths componentsJoinedByString:seperator];
    if (asyncCallback) {
        asyncCallback([pathsStr UTF8String]);
    }
}
+ (void)    documentPicker:(UIDocumentPickerViewController *)controller
            didPickDocumentAtURL:(NSURL *)url {
    NSString* pathsStr = @"";
    NSMutableArray* paths = [NSMutableArray arrayWithCapacity:1];
    [paths addObject:[url path]];
    NSString* seperator = [NSString stringWithFormat:@"%c", 28];
    pathsStr = [paths componentsJoinedByString:seperator];
    if (asyncCallback) {
        asyncCallback([pathsStr UTF8String]);
    }
}
+ (void)        createOpenPanel:(NSString*)title
                      directory:(NSString*)directory
                        filters:(NSString*)filters
                    multiselect:(BOOL)multiselect
                 canChooseFiles:(BOOL)canChooseFiles
               canChooseFolders:(BOOL)canChooseFolders
                           save:(BOOL)save
{
        NSURL* url = [NSURL URLWithString:directory];
        NSMutableArray* fileTypes = [[NSMutableArray alloc] init];
        if (canChooseFiles) {
            [fileTypes addObject:@"public.item"];
        }
        if (canChooseFolders) {
            [fileTypes addObject:@"public.directory"];
        }
        UIDocumentPickerViewController *controller = [[UIDocumentPickerViewController alloc]
                                                      initWithDocumentTypes:fileTypes
                                                      inMode:save?UIDocumentPickerModeExportToService:UIDocumentPickerModeImport];
        [controller setTitle:title];
    if (@available(iOS 13.0, *))
        [controller setDirectoryURL:url];
    if (@available(iOS 11.0, *))
        [controller setAllowsMultipleSelection:multiselect];
    if (@available(iOS 13.0, *))
        [controller setShouldShowFileExtensions:true];
        [controller setDelegate:NULL];
        [UnityGetGLViewController() presentViewController:controller animated:YES completion:nil];
}
@end
