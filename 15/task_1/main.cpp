#include <iostream>
#include <vector>

struct index {
    int begin{};
    int end{};
};

void translation(char**argv,std::vector<int>&);

int main(int argc, char* argv[]) {
    index to_need;
    std::vector<int> input;
    int sum{};
    int max{};
    bool flag{false};

    translation(argv,input);

    for (int i = 0; i < input.size(); ++i) {
        sum+=input[i];
        if(flag){
            to_need.begin=i;
            flag= false;
        }

        if (sum<=0){
          sum=0;
          flag= true;
        }
        if (sum>max){
            max=sum;
            to_need.end=i;
        }
    }

    std::cout<<to_need.begin<<" "<<to_need.end;


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