include <bits/stdc++.h>
using namespace std;
#define ll long long




int main(int argc, char const *argv[]) {
    ll t, h;
    int h, m, tme;
    arr time[4];


    scanf("%lld", &t);


    for (int i = 1; i <= t; i++) {
        for (int t1  = 0; t1 < 4; t1++) {
            scanf("%d\n", &arr[t1]);
        }


        for (int t1  = 0; t1 < 4; t1++) {
            printf("%d\n", arr[t1]);
        }
    }
    return 0;
}
