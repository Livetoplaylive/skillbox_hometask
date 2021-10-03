#include <iostream>
#include <vector>
#include <list>
#include <iterator>

struct index {
    int begin{};
    int end{};
};
 void fuu(std::vector<int>&input_vec,index& a) {
    int max_sum{};
    int temp{};
    std::list<int>some_list;
    std::list<int>::iterator some_iterator;


    for (int i = 0; i < input_vec.size(); ++i) {
        if(input_vec[i]>0){
            some_list.push_back(i);
        }
    }
    while(!some_list.empty()) {
        some_iterator = some_list.begin();
        some_iterator++;

        while (some_iterator != some_list.end()) {
            for (int i = some_list.front(); i <= *some_iterator; ++i) {
                temp += input_vec[i];
            }

            if (temp > max_sum) {
                max_sum = temp;
                a.begin = some_list.front();
                a.end = *some_iterator;
            }
            temp = 0;
            some_iterator++;

        }
        some_list.pop_front();
    }

}

int main(int argc, char* argv[]) {
    std::vector<int>a;
    index some_index;

    for (int i = 1; i < argc; ++i) {
        a.push_back(atoi(argv[i]));
    }
    fuu(a, some_index);
    std::cout << some_index.begin << " " << some_index.end;

    return 0;
}

