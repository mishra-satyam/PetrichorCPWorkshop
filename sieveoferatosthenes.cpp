const int N = 1e5;
bool prime[N+1];
vector<int> prime_list;

void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));
	int p = 2;
	for ( ; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			// prime_list.pb(p);
			for (int i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}
	for (;p<=n;p++){
		if(prime[p]) prime_list.pb(p);
	}
}