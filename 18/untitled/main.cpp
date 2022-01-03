#include <iostream>

void foo(long long,int& );

int main() {
    int ans{};
    long long n{9223372036854775806};
    foo(n,ans);
    std::cout<<"\n"<<ans;
    return 0;
}

void foo(long long n, int&ans) {
    int tmp{};
    if(n==0){
        return;
    }else{
        tmp=n%10;
        if (tmp%2==0)
            ans++;
        n/=10;
        foo(n,ans);
    }
}
