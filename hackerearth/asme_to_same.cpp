#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve();

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
        cout<<endl;
    }
}

void solve () {
    int n, ct=0;
    vector<int> freq (26, 0);
    cin >> n;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < n; i++) {
        freq[b[i] - 'a']++;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != '?')
            freq[a[i] - 'a']--;
        else
            ct++;
    }

    for (int i = 0; i < 26; ++i) {
        if (freq[i] < 0) {
            cout<<"No";
            return;
        }
    }

    cout<<"Yes";
}