# ffmpeg_demo
Simple application, which uses ffmpeg

## Build
```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
```

## Dependencies
### Fedora
```bash
sudo dnf install libavcodec-free-devel libavformat-free-devel libavutil-free-devel
```

1. **libavcodec** - audio/video codecs (encoding/decoding)
2. **libavformat** - demux (decode) / mux (encode) container formats (MP4, MKV, AVI, streaming, like HTTP, RTMP)
3. **libavutil** - utility functions (memory management, logging, conversions), data structures (frames, packets)

#### Or via RPM Fusion (more codecs)
```bash
<add RPM Fusion Repo>
sudo dnf swap ffmpeg-free ffmpeg --allowerasing
sudo dnf install ffmpeg-devel
```
