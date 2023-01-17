#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int h, b, a[100000], ans = 0;
        cin>>h>>b;
        for (int i = 0; i < h; ++i) {
            cin>>a[i];
        }
        sort(a, a+h);

        for (int i = 0; i < h; ++i) {
            if (b >= a[i]) {
                b -= a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}