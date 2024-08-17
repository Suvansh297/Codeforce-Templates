
// takes a string like 12938 and coverts it to number
long long decimal(string s) { return stoll(s); }

// takes a number n and writes it in binary
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

