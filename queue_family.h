#ifndef QUEUEFAMILY_H
#define QUEUEFAMILY_H

#include <optional>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vector>

struct QueueFamilyIndices {
	std::optional<uint32_t> graphicsFamily;
	bool isComplete();
};
QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);
#endif