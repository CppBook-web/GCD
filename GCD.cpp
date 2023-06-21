#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b);
unsigned int rec_gcd(unsigned int const a, unsigned int const b);

int main() {
    setlocale(LC_ALL, "rus");

    std::cout << "Введите числа:";

    unsigned int a = 0;
    unsigned int b = 0;

    std::cin >> a >> b;

    std::cout
        << "НОД(" << a << ", " << b << ") = "
        << gcd(a, b) << std::endl;

    std::cout
        << "Рекурсия НОД(" << a << ", " << b << ") = "
        << rec_gcd(a, b) << std::endl;
}

unsigned int rec_gcd(unsigned int const a, unsigned int const b) {
    return b == 0 ? a : gcd(b, a % b);
}

unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }

    return a;
}
