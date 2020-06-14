#include<bits/stdc++.h>
using namespace std;
#define ll 	unsigned long long
void s_m_n()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void sieve(ll *p) {

	p[0] = p[1] = 0;
	p[2] = 1;
	//mark the all odd numbers initiall as prime
	for (ll i = 3; i <= 100000; i += 2)
		p[i] = 1;
	for (ll i = 3; i <= 100000; i += 2)
	{
		//cheack if the current number is marked or not
		if (p[i] == 1)
		{
			//mark all the multiples of i as not prime
			for (ll j = i * i; j <= 100000; j += i)
				p[j] = 0;
		}
	}
}
int32_t main()
{
	s_m_n();
	ll p[100005] = {0};
	sieve(p);
	int leftrange, rightrange;
	cin >> leftrange >> rightrange;
	//print all the prime numbers in the given range
	for (int i = leftrange; i <= rightrange; i++)
	{
		//check if the current number is marked or not
		if (p[i] == 1)
			cout << i << ' ';
	}
	cout << "\n";

	return 0;
}