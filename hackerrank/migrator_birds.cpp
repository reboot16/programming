#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, max = 0, bird;
    cin>>n;
    int arr[n];

    map<int, int> type;
    map<int, int>::iterator itr;

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        itr = type.find(arr[i]);
        if(itr == type.end()) {
            type[arr[i]] = 1;
        } else {
            itr->second = itr->second+1;
            if (itr->second > max) {
                max = itr->second;
                bird = itr->first;
            } else if(itr->second == max) {
                if (itr->first < bird) {
                    max = itr->second;
                    bird = itr->first;
                }
            }
        }
    }

    cout<<bird<<endl;
}