# esp01-ping-target

This code, run on an ESP-01/ESP-01S/ESP8266, joins a WiFi network and responds to ICMP pings. That's it.

I use it to monitor whether a certain power strip at home is powered on or off.

## Build notes

`[env:esp01]` in [`platformio.ini`](./platformio.ini) is configured to build & run on a 1M ESP-01S board. Note that the `board` setting is `esp12e`, per [this post](https://lonelybinary.com/en-us/blogs/learn/unable-upload-to-esp-01-in-platform-io). I have confirmed this works correctly on my particular ESP-01S.

## License

MIT; see [`LICENSE`](./LICENSE) in this repo.

## Author

Chris Dzombak
- [dzombak.com](https://www.dzombak.com)
- [github.com/cdzombak](https://www.github.com/cdzombak)
