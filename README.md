# AI FURENDO

[繁體中文](README.md) | **English**

> An AI companion that lives on your iPhone: Live2D / 3D characters that chat, speak, and react — and follow you to your Home Screen and Picture in Picture.

<img width="240" alt="AI FURENDO" src="https://github.com/user-attachments/assets/d0301129-d57a-40f1-8a7f-081386a1ff36" />

---

## Demo Videos

- [YouTube](https://youtu.be/waKwxTZiP9w)
- [Bilibili](https://www.bilibili.com/video/BV1iq9hY4EtQ/)

---

## Features

### Characters

- **Live2D characters**: they blink, move, and show expressions. Drag, scale, and change outfits.
- **3D (VRM / GLB) characters**: full 3D models that turn their head as you move, with weather, season, and day/night lighting changes.
- **Character shop**: one-tap download of sample characters such as Hiyori, Mark-kun, Hatsune Miku, Epsilon, and Hibiki (both Live2D and 3D).
- **Your own models**: import your own Live2D / VRM models from the Files app.
- **Affection**: chatting raises affection, and the level shows up in widgets and on screen.

### Chat

- Choose from several AI backends in Settings:
  - Azure OpenAI (GPT-4o by default)
  - ChatGPT, Grok, Google AI Studio
  - **Apple Intelligence** (supported devices and OS)
  - **LM Studio** (run a model on your own computer over the local network)
  - **XiaoZhi** (real-time voice conversation)
- **On-device offline models**: Llama 3.2 1B / 3B and DeepSeek-R1 distilled 1.5B / 7B — download them in the app and run them on the phone with no internet.
- Two conversation styles: **girlfriend** and **professional**.
- Chat history is saved automatically and can be viewed, edited, or deleted; Markdown rendering and typewriter output included.

### Voice

- **Voice input**: just talk. Custom wake keywords (defaults include hey / hello / hi) and adjustable sensitivity.
- **Shake to talk**: shake the phone to start speaking.
- **Text-to-speech**: off, Apple's built-in voices, or the on-device Otosaku voice model.
- Speech language: follow system, English, Japanese, Cantonese, Mandarin, or Korean.

### Chat Room Customization

- Backgrounds: built-in images, **GIFs**, **MP4 videos**, or take a photo / pick one from Photos.
- Background music: bundled tracks plus your own audio files.
- **Water ripple** effect on tap.
- **Drawboard**: draw right on the screen.
- **GIF / image overlay layers**.
- Toggleable floating widgets: battery, CPU, memory, FPS, thermal state, clock, **weather**, and affection bar.
- To-do lists, idle auto-messages, and front/rear camera capture.

### Everywhere You Go

| Surface | What it does |
| --- | --- |
| **Picture in Picture** | Keep chatting while using other apps; vertical, horizontal, and square layouts; shake to talk |
| **Home Screen widgets** | Affection, coins, daily login, character portrait, character snapshot — multiple sizes |
| **Control Center** | A one-tap control to open the app |
| **Lock Screen / Live Activities** | Shows live status at a glance |
| **Apple Watch** | Chat and voice input on your wrist, plus heart rate, steps, and other health data |
| **Custom keyboard** | The AI FURENDO keyboard with word prediction and multiple themes |
| **Screen broadcast** | Share the app's screen |

### More

- **Premium**: a one-time purchase that removes ads.
- **Coins and daily login**: daily check-in rewards and a spin wheel.
- **Localization**: English, 日本語, 廣東話, 繁體中文, 简体中文, 한국어 — each with its own font.

---

## Screenshots

### Live2D Characters

<img width="189" alt="Hiyori" src="https://github.com/user-attachments/assets/d37dd122-49c7-4027-b1be-0de13b327bfe" /> <img width="188" alt="Hura" src="https://github.com/user-attachments/assets/8a358a35-1bb4-4903-9910-5db452494474" /> <img width="189" alt="Mao" src="https://github.com/user-attachments/assets/4cdc6213-d800-4213-8f73-3e2eaecce66c" />

### Chat

<img width="474" alt="Chat" src="https://github.com/user-attachments/assets/4018a790-c247-4316-985b-61dfcae3f352" />

### Voice and Wake Keywords


### Chat Room Customization



### Chat History



### Picture in Picture

<img width="616" alt="PiP" src="https://github.com/user-attachments/assets/5197d8a1-24db-4329-97ba-46f2c610f836" />

### Home Screen Widgets

<img width="300" alt="Medium widget" src="https://github.com/user-attachments/assets/5066078f-4945-46a1-b386-7b6eec6d203e" /> <img width="150" alt="Small widget" src="https://github.com/user-attachments/assets/05cec581-4c51-4a89-8146-1b806d1aa4ab" />

---

## Download & Install

The app is distributed as an **unsigned IPA**, so you need to sign it yourself before installing it on your iPhone. It is not on the App Store and no paid developer account is required.

### Requirements

| Item | Requirement |
| --- | --- |
| Device | iPhone (iPhone 12 or newer recommended; 8 GB RAM models for on-device models) |
| OS | **iOS 26 or later** |
| Storage | At least 2 GB (the IPA is about 600 MB, plus models and caches) |
| Computer (for signing) | Windows 10/11 or macOS |

> Apple Watch features require watchOS 10.6 or later.

### Step 1: Download the IPA

Get the latest build from the GitHub Releases page:

👉 <https://github.com/XxAZVDxX/AI-Furendo-SwiftUI-Private/releases>

The file looks like `AI-FURENDO_Beta 1-1_unsigned_xxx.ipa`. Do **not** tap "Open" after downloading — just leave it there.

> If that link doesn't open (the repository is private), join [Discord](https://discord.gg/PCyB2ETE) or open an Issue to ask the author for the latest IPA link.

### Step 2: Pick a Signing Tool

| Tool | Platform | Best for | Notes |
| --- | --- | --- | --- |
| **Sideloadly** | Windows / macOS | Beginners | Plug in and install; works with a free Apple ID; simplest |
| **AltStore / SideStore** | Windows / macOS | Wireless re-signing | Needs AltServer; auto-refreshes every 7 days |
| **ESign / Feather** | iPhone only | Users with their own certificate | Requires a `.p12` + `.mobileprovision` |
| **TrollStore** | iPhone only | Older iOS 14.0–17.0 | Permanent signing (not applicable here since the app needs iOS 26) |

The steps below use **Sideloadly**, which is the easiest.

### Step 3: Install with Sideloadly

1. Download and install the version for your computer from <https://sideloadly.io>.
2. Connect your iPhone with a USB cable and tap "Trust This Computer" on the phone.
3. Open Sideloadly and drag the downloaded `.ipa` into the window (or click the IPA icon to pick the file).
4. Enter your Apple ID under **Apple account** (a free account works).
5. Click **Start** and enter your Apple ID password. If two-factor authentication is on, you will be asked for a verification code.
6. Wait for the progress bar to finish (a few minutes depending on your network and computer).

### Step 4: Trust the App on Your iPhone

1. Open **Settings → General → VPN & Device Management**.
2. Under **Developer App**, tap your Apple ID, then **Trust**.
3. If the system asks for **Developer Mode**, enable it in **Settings → Privacy & Security → Developer Mode**, then restart the phone.

Once that's done, tap **AI FURENDO** on the Home Screen.

### Important Notes After Installing

- **7-day limit**: apps signed with a free Apple ID expire after **7 days**. Reinstall with Sideloadly when that happens (your chat history is kept). To avoid re-signing you need a paid developer account (yearly).
- **3 apps maximum**: a free account can have at most 3 sideloaded apps installed at once.
- **Some system features may be limited**: widgets, the Apple Watch app, the keyboard, HealthKit, and similar features rely on App Groups and special entitlements, so they **may not work** with a free certificate. The main chat and character features are unaffected.
- **Do not delete the app**: deleting it also removes your chat history and downloaded character models.
- **Updating**: just download the new IPA and install it the same way — it replaces the old version and keeps your data.
- If you see `Unable to install` or a signing error, confirm iOS 26+, try an original Apple cable, or switch to AltStore.

### Advanced: Use Your Own Model Server (LM Studio)

If you run a model on your computer and want the app to connect to it:

1. Open LM Studio on your computer → **Developer** tab.
2. Enable **Serve on Local Network** and note the port (e.g. `1234`).
3. Enter your computer's LAN IP in the app settings as `192.168.x.x:1234`.
4. Switch the AI model to `LM_Studio`.

> Your phone and computer must be on the same Wi-Fi network.

---

## Known Limitations

- **The macOS version is still in development** and not available yet; on Mac you can run the iPhone version via "Designed for iPad".
- Requires **iOS 26**; older systems cannot install it.
- With an unsigned build, widgets, the Watch app, the keyboard, and other extensions may not work due to signing restrictions.
- Some features need permissions: microphone, speech recognition, camera, Photos, location (weather), and health data.
- Reply quality depends on the model and API you choose; online services require your own API key.

---

## Feedback

Questions or suggestions? Open an [Issue](https://github.com/XxAZVDxX/AI-Furendo-SwiftUI-Private/issues) or join [Discord](https://discord.gg/PCyB2ETE). Please include your iPhone model, iOS version, and a screenshot of the problem.

## License & Notice

This is a personal learning and research project, provided free of charge. Character models (Hiyori, Haru, Mao, Mark, Hibiki, Epsilon, …) are © [Live2D Inc.](https://www.live2d.com/) and subject to the [sample model license](https://www.live2d.com/en/learn/sample/). When using any online AI service, follow that provider's terms and your local regulations.
