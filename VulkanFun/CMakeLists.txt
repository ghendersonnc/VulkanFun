cmake_minimum_required (VERSION 3.21)
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

set(EXEC_SOURCES
	"src/Application.cpp"
	"src/VulkanFun.cpp"
)

set(EXEC_HEADERS
	"src/Application.h"
)

add_executable (${PROJECT_NAME} ${EXEC_SOURCES} ${EXEC_HEADERS})

target_link_libraries(${PROJECT_NAME}
	PUBLIC Vulkan::Vulkan
	PUBLIC glfw
	PUBLIC glm::glm
)


