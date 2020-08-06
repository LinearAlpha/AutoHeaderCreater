project(DateTime)
include_directories(
    ${BULLET_PHYSICS_SOURCE_DIR}/lib
)

add_library(DateTime STATIC
    DateTime.cpp
)
