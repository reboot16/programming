#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> par) {
    vector<int> reversed;
    for (int i = (par.size()-1); i >= 0; i--) {
        reversed.push_back(par[i]);
    }

    return reversed;
}

int main() {
    vector<int> vec;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    vector<int> res = reverse(vec);

    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<" ";
    }

    cout<<endl;
}