#include <bits/stdc++.h>
#define up(i,a,b) for (int i = (int)a; i <= (int)b; i++)
#define pii pair<long long, long long>
#define a first
#define b second
#define int long long
#define all(x) x.begin(), x.end()
#define purge(x) x.resize(unique(x.begin(), x.end()) - x.begin())
#define ep emplace_back
using namespace std;

const int maxn = 1e5 + 10;
int x[maxn], w[maxn], e[maxn];
int f[maxn];
int n;



signed main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #define Task "VOMARIO"
    if (fopen(Task".inp", "r")){
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }

    cin >> n;
    up(i,1,n) cin >> x[i] >> w[i] >> e[i];

    for (int i = 1; i <= n; i++){
        f[i] = e[i];
        for (int j = 1; j <= i-1; j++){
            int val = f[j] - w[j]*abs(x[j] - x[i]);
            if (val <= 0) continue;
            f[i] = max(f[i], val + e[i]);
        }
    }
    cout << *max_element(f+1, f+n+1);
}
