#include <iostream>
bool foo(char*a,char*b);
int main() {
    using std::cout;
    char* a="hello world";
    char* b="wor";
    char* c="banana";

    cout<<foo(a,b)<<" "<<foo(a,c);
    return 0;
}

bool foo(char *a, char *b) {

    while(*a!='\000'){

        if(*a==*b){

            b++;
        }
        if(*b=='\000'){
            return true;
        }
        a++;
    }
    return false;
}
