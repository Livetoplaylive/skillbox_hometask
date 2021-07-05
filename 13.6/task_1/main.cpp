#include <iostream>
#include <vector>
#include <cstdlib>


std::vector<int>contain_add(std::string ,int );
std::vector<int>contain_delete(std::vector<int>,int);

int main(int argc, char *argv[]) {

    int range=atoi(argv[1]);
    int delete_num=atoi(argv[3]);
    std::string temp=argv[2];
    std::vector<int>container;

    if(argc<=1){
        std::cout<<"\nNo arguments!";
        system("pause");
        return 0;
    }
    container=contain_add(temp,range);
    container=contain_delete(container,delete_num);

    for (int i = 0; i <container.size(); ++i) {
        std::cout<<container[i]<<std::endl;
    }

    return 0;
}
std::vector<int> contain_add( std::string temp,int range) {
    int num{};
    std::vector<int>tmp;

    for (int i = 0; i < temp.length(); ++i) {
        if(isdigit(temp[i])){
            num+=temp[i]-'0';
            num*=10;
        }
        else{
            num/=10;
            tmp.push_back(num);
            num=0;
        }
    }
    return tmp;
}
std::vector<int> contain_delete(std::vector<int>tmp, int delete_num) {

    int size=tmp.size();
    for (int i = 0; i < size; ++i) {
        if(tmp[i]==delete_num){
            tmp.erase(tmp.begin()+i);
        }
    }
    return tmp;
}
