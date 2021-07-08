#include <iostream>
#include <vector>
#include <algorithm>

const int SIZE{20};


int main() {
    int temp{};
    std::vector<int>queue;

    std::cout<<"\nenter the num: ";
    std::cin>>temp;


    while (temp!=-1)
    {
        if(SIZE==queue.size()){
            std::reverse(queue.begin(), queue.end());
            queue.pop_back();
            std::reverse(queue.begin(), queue.end());
        }
        queue.push_back(temp);
        temp=0;
        std::cin>>temp;
    }

    for (int i = 0; i <SIZE; ++i) {
        std::cout<<"\n"<<queue[i];
    }

    return 0;
}
