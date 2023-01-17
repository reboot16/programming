#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() {
    string s;
    cin >> s;

    stringstream ss1;
    stringstream ss2;
    ss1 << s[0];
    ss2 << s[1];
    int f, sc;
    ss1>>f;
    ss2>>sc;

    if(s[8] == 'A') {
        if (sc == 2) {
            cout<<"00";
            for (int i = 2; i < 8; ++i) {
                cout << s[i];
            }
        } else {
            for (int i = 0; i < 8; ++i) {
                cout<<s[i];
            }
        }
    } else if (s[8] == 'P') {
        if (f == 1 && sc == 2) {
            for (int i = 0; i < 8; ++i) {
                cout<<s[i];
            }
        }
        else if(f == 0) {
            cout<<sc+12;
            for (int i = 2; i < 8; ++i) {
                cout<<s[i];
            }
        } else if (f == 1) {
            sc += 10;
            cout<<sc+12;
            for (int i = 2; i < 8; ++i) {
                cout<<s[i];
            }
        }
    }

    cout<<endl;
}