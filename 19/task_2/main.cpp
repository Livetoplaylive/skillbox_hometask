#include <iostream>
#include <fstream>
#include <string>
int main(int argc,const char *argv[]) {
    std::ifstream x_file;
    std::string buffer{},path{};
    if (argc<1){
        std::cout<<"Few arguments!\nEnter the path:";
        std::cin>>path;
    }
    else{
        path=*(argv+1);
    }
    x_file.open(path,std::ifstream::binary);

    if (!x_file.is_open()){
        std::cout<<"open file error!\n ";
    }

    while(!x_file.eof()){
        getline(x_file,buffer);
        std::cout<<buffer<<"\n";
    }


    return 0;
}
