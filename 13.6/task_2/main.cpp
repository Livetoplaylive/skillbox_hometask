#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> i_add(std::string temp);

std::vector<float>f_add(std::string temp);

int main(int argc, char * argv[]) {

    if(argc<=1){
        std::cout<<"\nNo arguments!";
        system("pause");
        return 0;
    }

    std::vector<float>price{f_add(argv[1])};
    std::vector<int>shop_list{i_add(argv[2])};
    float total_prise{};


    for (int i = 0; i < shop_list.size(); ++i) {
        total_prise+=price[shop_list[i]];
    }
    std::cout<<"total_price "<<total_prise;

    return 0;
}
std::vector<int> i_add(std::string temp) {
    int num{};
    std::vector<int>tmp;

    for (int i = 0; i <=temp.length(); ++i) {
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

std::vector<float> f_add(std::string temp) {
    double num{};
    std::vector<float>tmp{};
    char tester{};
    bool flag= true;
    int mantise{1};


    for (int i = 0; i < temp.length(); ++i) {
        tester=temp[i];
        switch (tester) {
            case ',':
                num/=pow(10,mantise);
                tmp.push_back(num);
                num=0;
                flag= true;
                mantise=1;
                break;
            case '.':
                flag= false;
                break;
            default:
                num+=tester-'0';
                num*=10;
                if (!flag){
                    mantise++;
                }
                break;
        }

    }

    return tmp;
}