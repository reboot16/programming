#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0, max=0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int j;
        cin >> j;

        if (j > 6)
            count++;
        else {
            if (count > max)
                max = count;
            count = 0;
        }
    }
    cout <<max<< endl;
}