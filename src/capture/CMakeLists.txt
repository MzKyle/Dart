cmake_minimum_required(VERSION 3.22)
project(capture)

list(APPEND CMAKE_MODULE_PATH "/usr/lib/x86_64-linux-gnu/cmake")
list(APPEND CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu/cmake")
find_package(FlatBuffers REQUIRED CONFIG)
find_package(OpenCV REQUIRED)

file(GLOB_RECURSE ${PROJECT_NAME}_src ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

add_library(${PROJECT_NAME} OBJECT ${${PROJECT_NAME}_src})

target_link_libraries(${PROJECT_NAME} PRIVATE ${OpenCV_LIBS})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)

#TODO::need to fix the code in websocket due to C++20
target_link_libraries(
        ${PROJECT_NAME} PRIVATE
        /usr/lib/x86_64-linux-gnu/liblz4.so
        /usr/lib/x86_64-linux-gnu/libzstd.so
        flatbuffers::flatbuffers
)
target_link_libraries(${PROJECT_NAME} PRIVATE utility)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../utility/inc)

target_include_directories(${PROJECT_NAME} PRIVATE ../../config/autogenerated_flatbuffers)