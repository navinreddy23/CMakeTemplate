add_library(Os)

target_include_directories(Os
    PUBLIC
        Inc
)

target_sources(Os
    PRIVATE
    Src/os.c
)