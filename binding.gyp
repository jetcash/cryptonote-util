{
    "targets": [
        {
            "target_name": "cryptonote",
            "sources": [
                "src/main.cc",
                "src/cryptonote_core/cryptonote_format_utils.cpp",
                "src/cryptonote_core/cryptonote_basic_impl.cpp",
                "src/crypto/tree-hash.c",
                "src/crypto/crypto.cpp",
                "src/crypto/crypto-ops.c",
                "src/crypto/crypto-ops-data.c",
                "src/crypto/hash.c",
                "src/crypto/keccak.c",
                "src/common/base58.cpp",
                "src/crypto/slow-hash.c",
                "src/cryptonote_core/difficulty.cpp",
                "src/cryptonote_core/miner.cpp",
                "src/crypto/crypto.cpp",
                "src/crypto/random.c",
                "src/crypto/hash-extra-blake.c",
                "src/crypto/hash-extra-groestl.c",
                "src/crypto/hash-extra-jh.c",
                "src/crypto/hash-extra-skein.c",
                "src/crypto/oaes_lib.c",
                "src/crypto/blake256.c",
                "src/crypto/groestl.c",
                "src/crypto/jh.c",
                "src/crypto/skein.c"
            ],
            "cflags!": [
                "-fno-exceptions"
            ],
            "cflags_cc!": [
                "-fno-rtti",
                "-fno-exceptions"
            ],
            "link_settings": {
                "libraries": [
                    "-lboost_system",
                    "-lboost_date_time",
                    "-lboost_filesystem",
                    "-lboost_regex",
                    "-lboost_program_options"
                ]
            },
            "conditions": [
                ["OS=='win'", {
                    "cflags": [
                        "/EHsc"
                    ],
                    "link_settings": {
                        "libraries": [
                            "-lboost_thread"
                        ]
                    }
                }],
                ["OS=='linux'", {
                    "cflags_cc": [
                        "-fpermissive",
                    ],
                    "link_settings": {
                        "libraries": [
                            "-lboost_thread"
                        ]
                    },
                }],
                ['OS=="mac"', {
                    "OTHER_LDFLAGS": [ "-stdlib=libc++" ],
                    "link_settings": {
                        "libraries": [
                            "-liconv",
                            "-lboost_thread-mt"
                        ]
                    },
                    "xcode_settings": {
                        "MACOSX_DEPLOYMENT_TARGET": '10.9',
                        "OTHER_CPLUSPLUSFLAGS" : [ "-std=c++11", "-stdlib=libc++" ],
                        "GCC_ENABLE_CPP_RTTI": "YES",
                        "GCC_ENABLE_CPP_EXCEPTIONS": "YES"
                    }
                }],
            ],
            "include_dirs": [
                "src",
                "src/contrib/epee/include",
				"<!(node -e \"require('nan')\")"
            ]
        }
    ]
}
