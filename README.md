# OpenSSL 3.4.0 crash demostration

This repo is to demostrate that `PKCS5_PBKDF2_HMAC` crashes when called from watchOS. (note that it doesn't crash in the simulator. arm64_32 related maybe?)

## Credits
- I have used [krzyzanowskim/OpenSSL](https://github.com/krzyzanowskim/OpenSSL) xcframework structure and replaced with my own 3.4.0 binaries. This is to save time from the need of handling xcframeworks.
