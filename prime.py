def findPrimes(n):
	primes = []
	for i in range(2, n+1):
		j = 2
		pos = False
		while j * j < i:
			if j % i == 0:
				pos = True
				break
			j+=1
		if(not pos):
			primes.append(i)

	return primes

def primeFactorize(n, primes):
	primeFactors = []
	for i in primes:
		while(n%i == 0):
			primeFactors.append(i)
			n = n//i 
		if(n == 1):
			break
	
	return primeFactors

primes = findPrimes(157)
primeFactors = primeFactorize(157, primes)
print(*primeFactors)