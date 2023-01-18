#include<bits/stdc++.h>
using namespace std;

int solve(string path) {
    int valley=0, progress = 0;
    string::iterator itr;

    for (itr = path.begin(); itr != path.end(); itr++) {
        if(*itr == 'D') {
            progress--;
        } else if(*itr == 'U'){
            progress++;
            if (progress == 0) {
                valley++;
            }
        }
    }

    return valley;
}
int main() {
    int n;
    string path;
    cin>>n>>path;
    int valley = solve(path);
    cout<<valley<<endl;
}