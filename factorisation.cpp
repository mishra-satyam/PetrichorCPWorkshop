#include <bits/stdc++.h>

using namespace std;

vector<int> computePrimes(int n){
    vector<int> primes;
    for(int i = 2; i<=n; i++){
        int count = 0;
        for(int j = 2; j< i; j++){
            if(i % j == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            primes.push_back(i);
        }
    }
    return primes;
}

vector<int> primeFactors(int n, vector<int> &primes){
    
    vector<int> factorisation;
    while(n != 1){
        for(int i = 0; i<(int) primes.size(); i++){
            while(n % primes[i] == 0){
                factorisation.push_back(primes[i]);
                n = n/primes[i];
            }
            if(n == 1){
                break;
            }
        }
    }

    return factorisation;
}

int main(){
    vector<int> primes = computePrimes(100);
    vector<int> primeFactorisation = primeFactors(99, primes);
    for(auto v : primeFactorisation){
        cout << v << ' ';
    }
    cout << '\n';
}