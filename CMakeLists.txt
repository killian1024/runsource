cmake_minimum_required(VERSION 3.9)

project(runsource)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

set(SOURCE_FILES
        src/c_standard.hpp
        src/cpp_standard.hpp
        src/language.hpp
        src/main.cpp
        src/program.cpp
        src/program.hpp
        src/tool_chain.hpp
        )

add_executable(runsource ${SOURCE_FILES})
target_link_libraries(runsource -lspeed -lstdc++fs)
install(TARGETS runsource DESTINATION bin)
