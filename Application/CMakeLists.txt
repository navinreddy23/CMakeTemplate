set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(APP_NAME app)
set(EXECUTABLE ${APP_NAME}.out)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output)


add_executable(${EXECUTABLE})

target_sources(${EXECUTABLE}
    PRIVATE 
        Src/app.c
        Src/main.c
    )

target_include_directories(${EXECUTABLE}
    PRIVATE
        Inc
)

target_link_libraries(${EXECUTABLE} Driver Os)

