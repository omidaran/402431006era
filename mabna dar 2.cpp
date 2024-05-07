#include <iostream>
#include <vector>

void binary_m2(int n) {
    std::vector<int> numbs;

    while (n > 0) {
        numbs.push_back(n % 2);
        n = n / 2;
    }

    for (int i = numbs.size() - 1; i >= 0; i--) {
        std::cout << numbs[i];
    }
}

int main() {
    int nutural_number;
    std::cout << "Enter a number : ";
    std::cin >> nutural_number;

    std::cout << "Binary is : ";
    binary_m2(nutural_number);

    return 0;
}