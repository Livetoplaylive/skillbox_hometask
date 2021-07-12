#include <iostream>
#include <vector>
#include <cstdlib>


std::vector<int>contain_add(std::string ,int );
std::vector<int>contain_delete(std::vector<int>,int);

int main(int argc, char *argv[]) {

    int range=atoi(argv[1]);
    int delete_num=atoi(argv[3]);
    int num{};
    std::string temp=argv[2];
    std::vector<int>container;

    if(argc<=1){
        std::cout<<"\nNo arguments!";
        system("pause");
        return 0;
    }

    for (int i = 0; i < temp.length(); ++i) {

        if(isdigit(temp[i])){
            num+=temp[i]-'0';
            num*=10;
        }
        else{
            num/=10;
            container.push_back(num);
            if (num==delete_num){
                container.pop_back();
            }
            num=0;


        }

    }


    for (int i = 0; i <container.size(); ++i) {

        std::cout<<container[i]<<std::endl;
    }

    return 0;
}

