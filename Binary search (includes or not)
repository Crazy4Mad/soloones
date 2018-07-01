#include <iostream>
#include <cstddef>
#include <vector>

int main() {
    int f_size, s_size;
    std::cin >> f_size >> s_size;
    std::vector<int> f_mass(f_size);
    for (auto& x : f_mass) {
        std::cin >> x;
    }
    for (int i = 0; i != s_size; i++) {
        int dial, up = f_size - 1, bottom = 0, average;
        std::cin >> dial;
        while (bottom != up) {
            average = (up + bottom) / 2;
            if (f_mass[average] > dial) {
                up = average;
            } else {
                bottom = average + 1;
            }
        }
        if (f_mass[up] == dial) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
