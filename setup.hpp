#ifndef SETUP_HPP
#define SETUP_HPP

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class Setup
{
public:
    void run();

private:
    GLFWwindow* window;

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanUp();
};

#endif