

// run the function Fact() then you will be able to use ncr and all factorials as well.
// define MOD = 10e9+7
// here N = 2 * 10e5




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