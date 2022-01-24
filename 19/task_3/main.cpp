#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    std::ifstream x_file;
    std::string x_human,date,name,surname;
    int money{},tmp{},average{},count{};
    char *path;

    if (argc < 1) {
        printf("\a%s\n", "few argument\nEnter the path:");
        scanf("%s", path);
    } else {
        path = *(argv + 1);
    }
    x_file.open(path);
    if (!x_file.is_open()) {
        printf("\a%s", "can't open the file\n");
        return 1;
    }
    while(!x_file.eof()){
        x_file>>name>>surname>>tmp>>date;
        if (tmp>money){
            x_human= name + " " + surname;
            money=tmp;
        }
        average+=tmp;
        count++;
    }

    printf("max payer is %s\nhe payed:%d\n", x_human.c_str(), money);
    printf("average is: %d\n",average/count);
    return 0;
}
