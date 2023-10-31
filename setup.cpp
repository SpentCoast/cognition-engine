#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "setup.hpp"

void Setup::run()
{
    initWindow();
    initVulkan();
    mainLoop();
    cleanUp();
}

void Setup::initWindow()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "Cognition Engine", nullptr, nullptr);
}

void Setup::initVulkan()
{

}

void Setup::mainLoop()
{
    while (!glfwWindowShouldClose(window))
        glfwPollEvents();
}

void Setup::cleanUp()
{
    glfwDestroyWindow(window);

    glfwTerminate();
}
