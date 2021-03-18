add_library(Driver)

target_include_directories(Driver
    PUBLIC
        Inc
)

target_sources(Driver
    PRIVATE
    Src/driver.c
)