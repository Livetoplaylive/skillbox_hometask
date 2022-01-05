#include <iostream>


void jump(int jump_l,  int &result, int ladder_l = 3) {
    static int new_ladder = 0;
    for (int i = 1; i <= jump_l && new_ladder + i <= ladder_l; i++) {

        if (new_ladder + i == ladder_l) {
            result++;
            if (new_ladder<0){
                new_ladder=0;
            }
            return;
        }
        new_ladder +=i;
        jump(jump_l,  result, ladder_l);
        new_ladder-=i;
    }
};

int main() {
    using std::cout, std::cin, std::endl;
    int jump_l{}, ladder_l{}, result{};
    cout << "длинну прыжка и колличество ступенек через пробел:";
    cin >> jump_l >> ladder_l;
    jump(jump_l,  result, ladder_l);
    cout << result << endl;
    return 0;
}
