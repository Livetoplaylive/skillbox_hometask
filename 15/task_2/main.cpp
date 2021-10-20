#include <iostream>
#include <vector>
#include <cctype>


void translation(char*argv[],std::vector<int>&current);

int main(int argc, char *argv[]) {
    std::vector<int>v_input{};
    int result{*argv[2]-48};
    int counter{};
    bool flag{true};



    translation(argv,v_input);


    while(counter<v_input.size())
    {
        for (int j = counter+1; j < v_input.size(); ++j) {
            if (v_input[counter]+v_input[j]==result){
                std::cout<<v_input[counter]<<" "<<v_input[j]<<std::endl;
                flag=false;
                break;
            }
        }
        if(!flag){
            break;
        }
        counter++;
    }
    return 0;
}

void translation(char **argv, std::vector<int> &current) {
    std::string temp;
    int some_number{};
    bool is_plus{true};
    argv++;
    temp=*argv;
    for (int i = 0; i < temp.size(); ++i) {
        if (isdigit(temp[i])||temp[i]==('-')||temp[i]==(',')||temp[i]==(' ')){

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
