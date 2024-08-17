
// BINARY MULTIPLIERS

// log(n) complexity
// returns (a*b)%m
// constraints till 10^18
long long multiply(long long a, long long b, long long m)
{
    long long ans = 0;
    while(b)
    {
       if (b&1) { ans = (ans + a) % m; }
       a = (a+a)%m;
       b>>=1;
    }
    return ans;
}



long long multiply(long long a, long long b)
{
    long long ans = 0;
    while(b)
    {
       if (b&1) { ans = (ans + a); }
       a = (a+a);
       b>>=1;
    }
    return ans;
}



// BINARY EXPONENTIATION    
// GIVES (a^b)%m 
// contraints - works when m is smaller, such that (a*a) doesnt cause overflow.
// log(n) complexity

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


// GIVES (a^b)
// contraints - a,b <10e9
// log(n) complexity
long long power(long long a, long long b)  {
    long long ans = 1;
    while(b)
    {
       if (b&1) { ans = (ans * a) ;}
       a = (a*a);
       b>>=1;
    }
    return ans;}


// COMBINED VERSION FOR EVEN HIGHER LIMITS (when m is also large) ( time complexity log^2(n) )
long long power(long long a, long long b, long long m)  {
    long long ans = 1;
    a = a%m;
    while(b)
    {
       if (b&1) { ans = (ans * a) % m; }
       a = (multiply(a,a,m))%m;
       b>>=1;
    }
    return ans;}


    long long power(long long a, long long b)  {
    long long ans = 1;
    while(b)
    {
       if (b&1) { ans = (ans * a) ;}
       a = (multiply(a,a));
       b>>=1;
    }
    return ans;}
