#include <iostream>

class world {
private:
    static constexpr int w_size = 5;

    void init() {
        for (int i = 0; i < w_size; ++i) {
            for (int j = 0; j < w_size; ++j) {
                for (int k = 0; k < (2 * w_size); ++k) {
                    field[i][j][k] = false;
                }
            }
        }
    }

public:
    bool field[w_size][w_size][2 * w_size];
    int horizon{};

    void input();

    void show();

    world();
};

world::world() {
    init();
}

void world::input() {
    unsigned short block_count{};

    for (int i = 0; i < w_size; ++i) {
        for (int j = 0; j < w_size; ++j) {
            std::cout << "block " << i << " " << j << " level's";
            std::cin >> block_count;
            for (int k = 0; k < block_count; ++k) {
                field[i][j][k] = true;
            }
        }
    }

}

void world::show() {
    std::cout << "\nInput horizon: ";
    std::cin >> horizon;
    if (horizon < 0 || horizon >=(2 * w_size)) {
        std::cout << "Ops!!";
        return;
    }

    for (int i = 0; i < w_size; ++i) {
        for (int j = 0; j < w_size; ++j) {
            std::cout << field[i][j][horizon-1]<<"\t";
        }
        std::cout<<"\n";
    }

}




int main() {
    world a;

    //input blocks
    a.input();
    //input horizon
    a.show();

    return 0;
}
