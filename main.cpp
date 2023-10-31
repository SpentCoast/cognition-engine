#include <iostream>

#include "setup.hpp"

int main()
{
    Setup app;

    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}