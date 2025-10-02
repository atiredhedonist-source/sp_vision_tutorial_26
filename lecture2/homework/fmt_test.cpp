#include <fmt/core.h>
#include <string>
#include <iostream>

int main() {
    fmt::print("Hello, world!\n");

    std::string s = fmt::format("The answer is {}.", 42);
    std::cout << s << std::endl; 

    return 0;
}