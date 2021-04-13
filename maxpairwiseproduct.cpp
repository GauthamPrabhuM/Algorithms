#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll MaxPairwiseProduct(const std::vector<ll>& numbers) {
    ll max_product = 0;
    ll n = numbers.size();

    ll first=0;
    ll second=0;
    for(ll i=0; i<n; i++)
       { if (numbers[i] > first)
            {
                second = first;
                first = numbers[i];
            }
            else if (numbers[i] > second)
            {
                second = numbers[i];
            }
        }
    return first*second;
}






int main() {
    ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
   //  freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    std::cin >> n;
    std::vector<ll> numbers(n);
    for (ll i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
