#pragma once
#define VK_USE_PLATFORM_WIN32_KHR
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32

#include <GLFW/glfw3native.h>


#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/hash.hpp>

#include <tinyobjloader/tiny_obj_loader.h>

#include <stb_image/stb_image.h>
#include <iostream>
#include <direct.h>
#include <cstring>
#include <stdexcept>
#include <set>
#include <limits>
#include <algorithm>
#include <fstream>
#include <vector>
#include <chrono>

