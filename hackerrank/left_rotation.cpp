#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> solve(vector<int> arr, int rot) {
    int temp[rot];

    for (int i = 0; i < rot; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < arr.size() - rot; i++) {
        arr[i] = arr[i+rot];
    }

    for (int i = (arr.size() - rot), j=0; i < arr.size(); i++, j++) {
        arr[i] = temp[j];
    }

    return arr;
}

int main() {
    int n, r;
    vector<int> vec;
    cin>>n>>r;

    for (int i = 0; i < n; ++i) {
        int val;
        cin>>val;
        vec.push_back(val);
    }


    vector<int> res = solve(vec, r);

    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<" ";
    }

    cout<<endl;
}