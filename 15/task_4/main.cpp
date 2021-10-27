#include <iostream>
#include <vector>
#include <algorithm>
void translation(char *argv[],std::vector<int> &current);
bool comp(int a,int b){
    return abs(a)< abs(b);
}

int main(int argc,char*argv[]) {
    std::vector<int>input{};
    translation(argv,input);
    std::sort(input.begin(),input.end(),comp);
    for (int i = 0; i < input.size(); ++i) {
        std::cout<<input[i]<<" ";
    }
    return 0;
}

void translation(char *argv[],std::vector<int> &current) {
    std::string temp;
    int some_number{};
    bool is_plus{true};
    argv++;
    temp=*argv;
    for (int i = 0; i < temp.size(); ++i) {
        if (isdigit(temp[i])||temp[i]==('-')||temp[i]==(',')){

            switch (temp[i]) {
                case ('-'):
                    is_plus= false;
                    break;
                case (','):
                    if (!is_plus){
                        some_number*=-1;
                    }
                    some_number/=10;
                    current.push_back(some_number);
                    some_number=0;
                    is_plus=true;
                    break;

                default:
                    some_number+=temp[i]-48;
                    some_number*=10;
                    break;
            }
        }
        else{
            std::cout<<"uncorrected argument!";
            return;
        }
    }
}