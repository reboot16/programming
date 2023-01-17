#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    string::iterator it;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        int res=0;
        string word;
        char k;
        cin >> word>>k;
        for (it = word.begin(); it != word.end(); it++) {
            if (*it == k)
                res++;
        }

        cout<<res<<endl;
    }

    cout<<endl;
}