#pragma once

struct QueueFamilyIndices
{
    std::optional<uint32_t> graphicsFamily;
    std::optional<uint32_t> presentFamily;

    bool isCompleted()
    {
        return graphicsFamily.has_value() && presentFamily.has_value();
    }
};