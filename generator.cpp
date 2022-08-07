#include <bits/stdc++.h>
#define up(i,a,b) for (int i = (int)a; i <= (int)b; i++)
using namespace std;

mt19937_64 RNG(chrono::high_resolution_clock::now().time_since_epoch().count());
long long UID(long long l, long long r){
    uniform_int_distribution<mt19937_64::result_type> random_number(l, r);
    return random_number(RNG);
}

signed main(){
    int n = 10000;
    cout << n << "\n";
    up(i,1,n){
        int x = UID(-1e9, 1e9);
        int w = UID(200, 1000);
        int e = UID(1, 1e10);
        if (x == 0){
            i--;
            continue;
        }
        cout << x << " " << w << " " << e << "\n";
    }
}
