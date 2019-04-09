/*For example: 6 is Perfect Number since divisor of 6 are 1, 2 and 3. Sum of its divisor is
1 + 2+ 3 =6 */

//pronaci jedan savrsen broj
int main()
{
	int n, i = 1, sum = 0;
	cout << "Unesite broj " << endl;
	cin >> n;
	while (i < n)
	{
		if (n % i == 0)
		sum += i;
		i++;
	}
	if (sum == n)
	{
		cout << "Broj " << i << " je savrsen broj" << endl;
	}
	else
	{
		cout << "Broj " << i << " nije savrsen broj" << endl;
	}
	return 0;
}

//------------------------------------------------------------------------------
//pronaci sve savrsene brojeve do 10000
bool isPerfect(long long int n)
{
	// To store sum of divisors 
	long long int sum = 1;

	// Find all divisors and add them 
	for (long long int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			if (i*i != n)
				sum = sum + i + n / i;
			else
				sum = sum + i;
		}
	}
	// If sum of divisors is equal to 
	// n, then n is a perfect number 
	if (sum == n && n != 1)
		return true;

	return false;
}
int main()
{
	cout << "Below are all perfect numbers till 10000\n";
	for (int n = 2; n < 10000; n++)
		if (isPerfect(n))
			cout << n << " is a perfect number\n";

	return 0;
}