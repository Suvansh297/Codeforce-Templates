#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#ifndef ONLINE_JUDGE
#include "proj.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define MOD 1000000007LL
#define pb emplace_back
#define F first
#define S second
#define vi vector<ll>
#define endl '\n'
#define ai(a,n) for(long long int j=0;j<(n);j++) cin>>a[j] 
#define ao(a,n) for(long long int j=0;j<(n);j++) cout<<a[j]<<" ";
#define bf(a) __bit_floor(a)
#define setbits(x) __builtin_popcountll(x)
#define all(x) x.begin(), x.end()
#define abs llabs
#define sqrt sqrtl
#define pow powl
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<pi, null_type, less<pi>, rb_tree_tag, tree_order_statistics_node_update>






 long long power(long long a, long long b, long long m)  {
    long long ans = 1;
    a = a%m;
    while(b)
    {
       if (b&1) { ans = (ans * a) % m; }
       a = (a*a)%m;
       b>>=1;
    }
    return ans;}

long long power(long long a, long long b)  {
    long long ans = 1;
    while(b)
    {
       if (b&1) { ans = (ans * a) ;}
       a = (a*a);
       b>>=1;
    }
    return ans;}

ll hcf(ll a, ll b)
{
    if (b == 0LL)
       { return a;}
    return hcf(b, a % b);
}

ll lcm(ll a, ll b) { return ((a * b) / hcf(a, b)); };

ll decimal(string s) { return stoll(s); }

string binary(ll n)
{
    string s = bitset<64>(n).to_string();
    const auto loc1 = s.find('1');
    if (loc1 != string::npos)
    {
        return s.substr(loc1);
    }
    return "0";
}

vi fact, facti; 
const ll N = 200100;
ll modinv(ll p, ll q)
{
    p %= MOD;
    q %= MOD;
    ll expo = MOD - 2;
    while (expo)
    {
        if (expo & 1)
            p = (p * q) % MOD;
        q = (q * q) % MOD;
        expo >>= 1;
    }
    return p;
}
void Fact()
{
    fact.resize(N);
    facti.resize(N);

    fact[0] = 1;
    for (ll i = 1; i < N; i++)
        fact[i] = (i * fact[i - 1]) % MOD;

    facti[N - 1] = modinv(1, fact[N - 1]);
    for (ll i = N - 2; i >= 0; i--)
        facti[i] = ((i + 1) * facti[i + 1]) % MOD;
}

ll ncr(ll n, ll r)
{
    if (r > n || r<0 || n<0)
        return 0;

    ll temp = fact[n] * facti[r] % MOD;
    temp = temp * facti[n - r] % MOD;
    return temp;
}

signed main()
{ 
 
  ios::sync_with_stdio(0); cin.tie(0); 
  long long int t;
  cin>>t;
  // Fact();
  for (ll test_case = 1; test_case<=t; ++test_case)   {debug(test_case);
//--------------S-U-V-A-N-S-H-2-9-7---------------------------------------------//
 







//-------------------S-U-V-A-N-S-H-2-9-7----------------------------------------//
cerr<< '\n';}}