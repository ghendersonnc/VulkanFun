#pragma once

#define VK_USE_PLATFORM_WIN32_KHR

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>

#include <iostream>
#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <vector>
#include <optional>
#include <set>

#include "ApplicationStructs.h"


const std::vector<const char*> validationLayers = {
    "VK_LAYER_KHRONOS_validation"
};

const std::vector<const char*> deviceExtensions = {
       VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

VkResult CreateDebugUtilsMessengerEXT(
    VkInstance instance,
    const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDebugUtilsMessengerEXT* pDebugMessenger);

class TriangleApp
{
public:
    TriangleApp();
    TriangleApp(uint16_t _W, uint16_t _H);
    void run();
    int exitCode = 0;

    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
        VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
        VkDebugUtilsMessageTypeFlagsEXT messageType,
        const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
        void* pUserData);
private:
    bool checkValidationLayerSupport();
    bool isDeviceSuitable(VkPhysicalDevice device);
    void initWindow();
    void initVulkan();
    void createInstance();
    void createLogicalDevice();
    void mainLoop();
    void cleanup();
    std::vector<const char*> getRequiredExtensions();
    void setupDebugMessenger();
    void updateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
    void DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT debugMessenger, const VkAllocationCallbacks* pAllocator);
    void pickPhysicalDevice();
    void createSurface();
    QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

    uint16_t m_Width;
    uint16_t m_Height;
    GLFWwindow* m_Window;

    VkInstance m_VulkanInstance;
    VkDebugUtilsMessengerEXT m_DebugMessenger;
    VkPhysicalDevice m_PhysicalDevice;
    VkDevice m_LogicalDevice;
    VkQueue m_GraphicsQueue;
    VkQueue m_PresentQueue;
    VkSurfaceKHR m_Surface;
};