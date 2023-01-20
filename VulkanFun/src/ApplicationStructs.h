#pragma once

struct QueueFamilyIndices
{
    std::optional<uint32_t> graphicsFamily;

    bool isCompleted()
    {
        return graphicsFamily.has_value();
    }
};