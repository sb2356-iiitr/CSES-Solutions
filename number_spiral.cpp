#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    ll x, y;
    cin >> y >> x;
    ll z = max(x, y);
    ll ap = z*(z-1) + 1;
    ll ans;
    if (z%2 == 0)
    {
        ans = ap + y - x;
    }
    else
    {
        ans = ap + x - y;
    }
    cout << ans << "\n";
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("ip.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
