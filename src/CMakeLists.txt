option(FIRST_STEP_LIB_SHARED "make first step shared library" OFF)
option(FIRST_STEP_ADD_DEMO "add demo code with library" OFF)

set(LIB_SOURCE_FILES lib.cpp)

if(FIRST_STEP_ADD_DEMO)
    list(APPEND LIB_SOURCE_FILES demo.cpp)
endif()

if(FIRST_STEP_LIB_SHARED)
    set(LIB_TYPE SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

add_library(FirstStep ${LIB_TYPE} ${LIB_SOURCE_FILES})


