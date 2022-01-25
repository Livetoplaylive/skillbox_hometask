#include <fstream>


int main(int argc,char *argv[]) {
    std::ifstream x_file;
    char *path,tmp;
    char mask[4]={-119,'P','N','G'};

    if (argc<1){
        printf("%s\n","few argument!\n Enter the path\n");
        scanf("path: %s",path);
    }else{
        path=*(argv+1);
    }
    x_file.open(path,std::ifstream::binary);

    for (int i = 0; i < 4; ++i) {
        x_file.get(tmp);
        if (tmp!=mask[i]){
            printf("%s\n","It's not a png!");
            break;
        }
    }
    printf("%s\n","It's,png!");


    return 0;
}
