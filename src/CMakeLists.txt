project(src)

set(HEADER_FILES
        Temperature.h
        )

set(SOURCE_FILES
        Temperature.cpp )

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})