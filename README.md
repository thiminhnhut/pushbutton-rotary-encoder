# Push Button Rotary Encoder Library

## Ví dụ cách tạo thư viện cho Arduino

* Tạo thư mục ``src`` và viết thư viện gồm ``PushButtonRotaryEncoder.h`` và ``PushButtonRotaryEncoder.cpp``.

* Tạo thư mục ``examples`` và viết ví dụ sử dụng thư viện trong thư mục ``examples``.

* Tạo các file ``library.properties`` và ``keywords.txt``.

  * File ``library.properties`` có chứa đầy đủ các nội dung:

        name=PushButtonRotaryEncoder
        version=1.0.0
        author=thiminhnhut <thiminhnhut@gmail.com>
        maintainer=thiminhnhut <thiminhnhut@gmail.com>
        sentence=Push Button Rotary Encoder Library.
        paragraph=Rotary Encoder.
        category=Communication
        url=https://github.com/thiminhnhut/pushbutton-rotary-encoder
        architectures=*
        includes=PushButtonRotaryEncoder.h

* Đưa thư viện vào thư viện PlatformIO, tạo thêm file ``library.json``:

  * File ``library.json``, gồm các nội dung sau:

        {
            "name": "PushButtonRotaryEncoder",
            "keywords": "Push Button, Rotary Encoder",
            "description": "Push Button Rotary Encoder Library",
            "authors": {
                "name": "thiminhnhut",
                "url": "https://github.com/thiminhnhut"
            },
            "version": "1.0.0",
            "repository": {
                "type": "git",
                "url": "https://github.com/thiminhnhut/pushbutton-rotary-encoder.git"
            },
            "export": {
                "include": "PushButtonRotaryEncoder"
            },
            "frameworks": "arduino",
            "platforms": "espressif8266"
        }

  * Đăng ký lên PlatformIO:

        platformio lib register https://raw.githubusercontent.com/thiminhnhut/pushbutton-rotary-encoder/master/library.json