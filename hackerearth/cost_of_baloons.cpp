#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int gc, pc, p, sf=0, ss=0, cost=0, costless=0, costfull=0;
        cin >> gc >> pc >> p;

        if (gc > pc || gc == pc) {
            costless = pc;
            costfull = gc;
        } else if (pc > gc) {
            costless = gc;
            costfull = pc;
        }

        while(p--) {
            int fp, sp;
            cin >> fp >> sp;

            if (fp == 1)
                sf++;
            if (sp == 1)
                ss++;
        }
        if (sf > ss || sf == ss)
            cost = (sf*costless) + (ss*costfull);
        else if (ss > sf)
            cost = (ss*costless) + (sf*costfull);

        cout<<cost<<endl;
    }
}