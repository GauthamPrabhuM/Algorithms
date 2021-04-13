#include <cassert>
#include <iostream>
using namespace std;
#define ll long long
ll get_fibonacci_last_digit(ll n) {
    if (n <= 1) return n;

    ll previous = 0;
    ll current = 1;
    ll tmp_previous = 0;

    for (ll i = 0; i < n - 1; ++i) {
        tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current) % 10;
    }

    return current;
}

int main() {
    int n;
    std::cin >> n;

    int d = get_fibonacci_last_digit(n);

    std::cout << d << "\n";
}
