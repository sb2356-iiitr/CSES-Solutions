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
    
    string dna;
    cin >> dna;
    ll c = 1, maxi = 1;
    for (size_t i = 1; i < dna.length(); i++)
    {
        if (dna[i] == dna[i-1])
        {
            c++;
            maxi = max(c, maxi);
        }
        else
        {
            c = 1;
        }
        
    }
    cout << maxi;
 
    return 0;
}
