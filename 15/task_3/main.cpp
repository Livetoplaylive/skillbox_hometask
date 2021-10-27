#include <iostream>
#include <vector>
#include <algorithm>

void output(std::vector<int>a){
    using namespace std;
    cout<<a[4]<<endl;
}


int main(/*int argc,char* argv[]*/) {
    std::vector<int>v_input;
    char temp{};
    bool flag{false};
    bool ex{true};
    std::cout<<"Enter the queue: ";

    std::cin.get(temp);

    while(ex){
        switch (temp) {
            case'\n':
                break;
            case '-':
                flag=true;
                break;
            case ' ':
                break;
            case '1':
                if (flag){
                    std::sort(v_input.begin(),v_input.end());
                    output(v_input);
                    flag= false;
                }else{
                    v_input.push_back(temp-48);
                }
                break;
            case '2':
                if (flag){
                    ex= false;
                }else{
                    v_input.push_back(temp-48);
                }
                break;
            default:
                v_input.push_back(temp-48);
                break;
        }
        std::cin.get(temp);
    }
    return 0;
}



