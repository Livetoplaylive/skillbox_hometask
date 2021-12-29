#include <iostream>

void jump(int jump_l, int *aj, int &result, int ladder_l = 3, int new_jump = 0, int new_ladder = 0) {
    for (int i = 1; i <= jump_l && new_ladder + i <= ladder_l; i++) {
        aj[new_jump] = i;
        if (new_ladder + i == ladder_l) {
            result++;
            return;
        }
        jump(jump_l, aj, result, ladder_l, new_jump + 1, new_ladder + i);
    }
};

int main() {
    using std::cout, std::cin, std::endl;
    int jump_l{}, ladder_l{}, result{};
    cout << "длинну прыжка и колличество ступенек через пробел:";
    cin >> jump_l >> ladder_l;
    int *arrjump = new int[ladder_l];

    jump(jump_l, arrjump, result, ladder_l);
    cout << result << endl;
    delete[] arrjump;
    return 0;
}
