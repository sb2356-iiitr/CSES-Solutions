#include <bits/stdc++.h>
//#include <iostream>
typedef long long ll;
using namespace std;
 
//ll n;
/*ll mod = 1791791791;
const int MAXN = 100005000;
const ll MAXVALUE = 10000005000;
ll arr[MAXN];  
ll NOIDX = -1;  */
 
// function to count the divisors 
bool isPerfect(ll n)
{
    double sr = sqrt(n);
    return ((sr-floor(sr)) == 0);
} 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;
    ll a[n-1];
    ll sn = n * (n + 1) / 2, s = 0;
    for (size_t i = 0; i < n-1; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    cout << sn - s;
 
    return 0;
}
