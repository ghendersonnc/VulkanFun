cmake_minimum_required(VERSION 3.21)
set(PROJECT_NAME VulkanFun)
set(CMAKE_CXX_STANDARD 20)

include_directories(include)

# Vulkan?
find_package(Vulkan REQUIRED)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/glfw)

# glm
add_subdirectory(external/glm)

# stb image
add_library(stb_image STATIC include/stb_image/std_image.cpp)
target_include_directories(stb_image PUBLIC include/stb_image)

file(GLOB EXEC_SOURCES src/*.cpp)
file(GLOB EXEC_HEADERS src/*.h src/*.hpp)

add_executable(${PROJECT_NAME} ${EXEC_SOURCES} ${EXEC_HEADERS})
target_link_libraries(${PROJECT_NAME}
        PUBLIC Vulkan::Vulkan
        PUBLIC glfw
        PUBLIC glm::glm
        PUBLIC stb_image
        )

