#include <format>
#include <iostream>
#include <string>
#include <string_view>


int main() {
    std::cout << std::format("{} {}!", "Hello", "world", "something"); // OK, produces "Hello world!"
}