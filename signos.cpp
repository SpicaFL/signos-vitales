#include <iostream>
 frecuencia-cardiaca
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) return "bradicardia";
    if (lpm <= 100) return "normal";
    return "taquicardia";
}

int main() {
    std::cout << "Frecuencia 75 lpm: " << clasificarFrecuencia(75) << std::endl;


double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    std::cout << "32 F en C: " << fahrenheitACelsius(32.0) << std::endl;
 main
    return 0;
}