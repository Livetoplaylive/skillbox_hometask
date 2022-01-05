#include <iostream>

void foo(long long, int &);

int main() {
    int ans{};
    long long n{9223372036854775806};
    foo(n, ans);
    std::cout << "\n" << ans;
    return 0;
}

void foo(long long n, int &ans) {
    int tmp = n % 10;
    static int size{};
    if (n == 0) {
        if (size == 0) {
            ans++;
        }
        return;
    } else {
        if (tmp % 2 == 0)
            ans++;
        n /= 10;
        size++;
        foo(n, ans);
    }
}
