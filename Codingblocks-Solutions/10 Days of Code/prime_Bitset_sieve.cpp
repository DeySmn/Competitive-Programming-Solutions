#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

const int n = 10000000;
bitset<10000005> b;
std::vector<int> primes;
void sieve() {
	//set all the bits
	b.set(); //1,1,1,,,,
	b[0] = b[1] = 0;
	for (long long int i = 2; i <= n; i++)
	{
		if (b[i])
		{
			primes.push_back(i);
			//mark all the multiples of i as not prime
			for (long long int j = i * i; j <= n; j += i)
				b[j] = 0;
		}
	}
}
int32_t main()
{
	sieve();

	for (int i = 0; i <= 100; i++)
		cout << primes[i] << "\n";
	return 0;
}