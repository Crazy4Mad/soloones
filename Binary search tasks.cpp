//https://informatics.mccme.ru/mod/statements/view.php?id=1966#1

#include <iostream>
#include <cstddef>
#include <vector>

int main() {
    int64_t w, h, n;
    std::cin >> w >> h >> n;

    int64_t max, min, cur_min;
    w > h ? max = w : max = h;
    w > h ? min = h : min = w;
    max *= n;

    while (max != min) {
        cur_min = (max + min) / 2;
        if (n <= (cur_min / w)*(cur_min / h)) {
            max = cur_min;
        } else {
            min = cur_min + 1;
        }
    }
    std::cout << min << std::endl;
}
