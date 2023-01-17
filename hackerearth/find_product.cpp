#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> vec;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    long long int product = 1;

    for (int i = 0; i < vec.size(); ++i) {
        product = (product * vec[i]) % 1000000007;
    }

    cout <<product<< endl;
}