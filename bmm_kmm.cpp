#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int a = num1, b = num2;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    int bmm = a;
    int kmm = (num1 * num2) / bmm;

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << bmm << std::endl;
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << kmm << std::endl;

    return 0;
}