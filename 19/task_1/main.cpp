#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[]) {

    std::string path{},buffer{},word{};
    std::ifstream tmp;
    int count{};

    if (argc<2){
        printf("%s","few arguments!\nEnter the Path:");
        getline(std::cin,path);
        printf("\n%s","Enter the word that you need:");
        getline(std::cin,word);

    }else
    {
        path=*(argv+1);
        word=*(argv+2);
    }

    tmp.open(path, std::ofstream::app);
    if (!tmp.is_open()) {
        return 1;
    }
    while (!tmp.eof()) {
        tmp >> buffer;
        if (buffer == word) {
            count++;
        }
    }

    std::cout << count << '\n';
    tmp.close();
    return 0;
}
