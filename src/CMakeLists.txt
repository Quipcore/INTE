project(Temperature)

set(HEADER_FILES
        Temperature.h
        )

set(SOURCE_FILES
        Temperature.cpp )

add_library(Temperature_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})