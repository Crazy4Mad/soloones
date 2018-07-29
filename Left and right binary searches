#include <iostream>
#include <cstddef>
#include <vector>
#include <cmath>

int main() {
    int64_t first_size, second_size;
    std::cin >> first_size >> second_size;

    std::vector<int64_t> mass(first_size);
    for (auto& x : mass) {
        std::cin >> x;
    }

    for (size_t i = 0; i != second_size; i++) {
        int64_t dial;
        std::cin >> dial;
        int64_t down = 0, up = first_size - 1, cur_pos;

        while (up != down) {
            cur_pos = (down + up) / 2;
            if (mass[cur_pos] >= dial) {
                up = cur_pos;
            } else if (mass[cur_pos] < dial) {
                down = cur_pos + 1;
            }
        }
        if (mass[down] == dial) {
            std::cout << down + 1 << ' ';
            down = 0;
            up = first_size - 1;
            while (up > down) {
                cur_pos = (down + up) / 2;
                if (mass[cur_pos] > dial) {
                    up = cur_pos;
                } else if (mass[cur_pos] <= dial) {
                    down = cur_pos + 1;
                }
            }
            if (mass[up] == dial) {
                up += 1;
            }
            std::cout << up << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}
