#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    std::cout << "32 F en C: " << fahrenheitACelsius(32.0) << std::endl;
    return 0;
}