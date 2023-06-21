#include <iostream>

unsigned int gcd(unsigned int, unsigned int);
unsigned int rec_gcd(unsigned int const, unsigned int const);

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Введите числа: ";

    unsigned int a = 0;
    unsigned int b = 0;

    std::cin >> a >> b;

    std::cout << "НОД(" << a << ", " << b << ")="
        << gcd(a, b) << std::endl;
    
    std::cout << "НОД рекурсия(" << a << ", " << b << ")="
        << rec_gcd(a, b) << std::endl;


    return 0;
}

unsigned int gcd(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

unsigned int rec_gcd(unsigned int const a, unsigned int const b) {
    return b == 0 ? a : rec_gcd(b, a % b);
}