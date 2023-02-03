int mod = 1e9 + 7;
int power(int x, int y){
    int res = 1;
    while (y){
        if (y & 1)
            res = res * 1ll * x % mod;

        y = y>>1;
        x = x * 1ll * x % mod;
    }
    return res;
}