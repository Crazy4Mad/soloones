#include <iostream>
#include <cstddef>
#include <vector>

int main() {
    int64_t first, second;
    std::cin >> first >> second;

    std::vector<int64_t> mass(first);
    for (size_t i = 0; i != first; i++) {
        std::cin >> mass[i];
    }

    for (size_t i = 0; i != second; i++) {
        int64_t dial;
        std::cin >> dial;
        int64_t up = first - 1, down = 0, cur_pos = (up + down) / 2;

        while (up != down) {
            cur_pos = (up + down) / 2;
            if (mass[cur_pos] > dial) {
                up = cur_pos;
            } else if (mass[cur_pos] < dial) {
                down = cur_pos + 1;
            } else {
                down = cur_pos;
                up = cur_pos;
            }
        }
        if (down != 0 && -mass[down - 1] + dial <= mass[down] - dial) {
            down -= 1;
        }
        std::cout << mass[down] << std::endl;
    }
    return 0;
}
