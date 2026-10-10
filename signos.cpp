#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) return "bradicardia";
    if (lpm <= 100) return "normal";
    return "taquicardia";
}

int main() {
    std::cout << "Frecuencia 75 lpm: " << clasificarFrecuencia(75) << std::endl;
    return 0;
}