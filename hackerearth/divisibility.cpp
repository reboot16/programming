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

    if (vec[n-1] % 10 == 0)
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}