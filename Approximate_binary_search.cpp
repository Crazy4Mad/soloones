#include <iostream>
#include <cstddef>
#include <vector>
#include <cmath>

int main() {
    int f_size, s_size;
    std::cin >> f_size >> s_size;
    std::vector<int> f_mass(f_size);
    for (auto& x : f_mass) {
        std::cin >> x;
    }
    for (int i = 0; i != s_size; i++) {
        bool flag = false;
        int average, up = f_size - 1, down = 0, dial;
        std::cin >> dial;
        while (up != down) {
            average = (up + down) / 2;
            if (f_mass[average] > dial) {
                up = average;
            } else if (f_mass[average] < dial) {
                down = average + 1;
            } else {
                flag = true;
                down = average;
                up = down;
            }
        }
        if (flag || down == 0) {
            std::cout << f_mass[down] << std::endl;
        } else {
            if (f_mass[down] - dial < dial - f_mass[down - 1]) {
                std::cout << f_mass[down] << std::endl;
            } else {
                std::cout << f_mass[down - 1] << std::endl;
            }
        }
    }
}
