#include <bits/stdc++.h>
//#include <iostream>
typedef long long ll;
using namespace std;
 
ll n;
ll mod = 1791791791;
const int MAXN = 100005000;
const ll MAXVALUE = 10000005000;
ll arr[MAXN];  
ll NOIDX = -1;  
 
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
    
    cin >> n;
    if (n < 4 && n != 1)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else if (n == 4)
    {
        cout << "3 1 4 2";
    }
    else
    {
        ll t = n-1;
        while(n > 0)
        {
            cout << n << " ";
            n -= 2;
        }
        while(t > 0)
        {
            cout << t << " ";
            t -= 2;
        }
    }
    
 
    return 0;
}
