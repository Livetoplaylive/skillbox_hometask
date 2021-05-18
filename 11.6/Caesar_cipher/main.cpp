#include <iostream>

std::string encrypt_caesar(std::string,short k);
std::string decrypt_caesar(std::string,short k);


const short Alphabet_SIZE=26;
int main() {
    std::string input;
    short key{};
    char flag;
    //user interface
    std::cout<<"\nSelect the one you want";
    std::cout<<"\nEncrypt: 1";
    std::cout<<"\nDecrypt: 2";
    std::cout<<"\nPush 'x' to exit";
    std::cin.get(flag);
    std::cin.get();

    if (key>Alphabet_SIZE)
    {
        key-=Alphabet_SIZE;
    }

    switch (flag) {
        case '1':
            std::cout<<"\nEnter the string : ";
            std::getline(std::cin,input);
            std::cout<<"\nEnter the key: ";
            std::cin>>key;
            std::cout<<"Your string: "<<encrypt_caesar(input,key)<<std::endl;

            break;
        case '2':
            std::cout<<"Enter the string : ";
            std::getline(std::cin,input);
            std::cout<<"Enter the key: ";
            std::cin>>key;
            std::cout<<"Your string: "<<decrypt_caesar(input,key)<<std::endl;
            break;
        default:
            EXIT_FAILURE;
    }



    return 0;
}
std::string encrypt_caesar(std::string input,short k){
    int correcter{};


    for (int i = 0; i < input.length(); ++i) {
        correcter=input[i]+k;
        if (!isalpha(input[i]))
        {
            input[i]=input[i];

        }else
        {
            if (isupper(input[i]))
            {
                if (correcter>89)
                {
                    input[i]=correcter-Alphabet_SIZE;
                }
                else if(correcter<64){
                    input[i]=correcter+Alphabet_SIZE;
                }
                else{
                    input[i]=(input[i]+k);
                }
            }else{
                if (correcter>121)
                {
                    input[i]=correcter-Alphabet_SIZE;
                }
                else if(correcter<96){
                    input[i]=correcter+Alphabet_SIZE;
                }
                else{
                    input[i]=(input[i]+k);
                }

            }

        }

    }
    return input;
}

std::string decrypt_caesar(std::string input, short k) {
    return (encrypt_caesar(input,-k));
}