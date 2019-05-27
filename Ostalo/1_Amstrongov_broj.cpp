int main()
{
    int org, num, rem, sum = 0;
	cin >> org;
	num = org;
	while (num != 0)
	{
		rem = num % 10;
		sum += rem * rem * rem;
		num /= 10;
	}
	if (sum == org)
	{
		cout << "Broj " << org << " je amstrongov broj" << endl;
	}
	else
	{
		cout << "Broj " << org << " nije amstrongov broj" << endl;
	}
}