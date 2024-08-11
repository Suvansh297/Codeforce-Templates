/*
made for long long data types.
works for 0
*/

#define ll long long

ll hcf(ll a, ll b)
{
    if (b == 0LL)
       { return a;}
    return hcf(b, a % b);
}

ll lcm(ll a, ll b) { return ((a * b) / hcf(a, b)); };

// FULL VERSION //

long long hcf(long long a, long long b)
{
    if (b == 0LL)
       { return a;}
    return hcf(b, a % b);
}

long long lcm(long long a, long long b) { return ((a * b) / hcf(a, b)); };