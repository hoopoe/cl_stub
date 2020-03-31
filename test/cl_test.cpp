#define CL_TARGET_OPENCL_VERSION 200
#define CL_HPP_ENABLE_EXCEPTIONS
#define CL_HPP_TARGET_OPENCL_VERSION 200


#include <CL/cl.h>
#include <CL/cl2.hpp>
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

const int numElements = 32;

int main(void)
{
    // Filter for a 2.0 platform and set it as the default
    std::vector<cl::Platform> platforms;
    cl::Platform::get(&platforms);
    cl::Platform plat;
    for (auto &p : platforms) {
        std::string platver = p.getInfo<CL_PLATFORM_VERSION>();
        std::cerr << "Plat: " << platver << "\n";
        if (platver.find("OpenCL 2.") != std::string::npos) {
            plat = p;
        }
    }
    if (plat() == 0) {
        std::cout << "No OpenCL 2.0 platform found.\n";
        return -1;
    }

    cl::Platform newP = cl::Platform::setDefault(plat);
    if (newP != plat) {
        std::cout << "Error setting default platform.";
        return -1;
    }

    return 0;
}