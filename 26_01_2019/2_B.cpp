/*
Postavke zadatka
http://prntscr.com/mw7hjy
*/

bool isProst(int n)
{
	for (int i = 2; i < n/2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool isPolidorm(int n)
{
	int num, digit, rev = 0;
	num = n;
	do
	{
		digit = n % 10;
		rev = (rev * 10) + digit;
		n = n / 10;
	} while (n != 0);
	if (num == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int n;
	do
	{
		cin >> n;
	} while (n < 100);
	if (isProst(n) == true && isPolidorm(n) == true)
	{
		cout << "Broj " << n << " je i prost i polidorm" << endl;
	}
	else
	{
		cout << "Broj " << n << " nije i prost i polidorm" << endl;
	}
}