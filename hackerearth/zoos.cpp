#include <bits/stdc++.h>
using namespace std;

int main() {
    string  word;
    cin >> word;

    int i;

    for (i = 0; i < word.length(); i++) {
        if (word[i] != 'z') break;
    }

    int x = (3*i);
    if (word[x] == 'o')
        cout << "No";
    else if (word[x-1] == 'o')
        cout << "Yes";
    else
        cout << "No";

    cout<<endl;
}