

int main()
{
   double x, rezultat = 0;
	char unos;
	cout << "Unesite realan broj" << endl;
	cin >> x;
	cout << "Za funkciju sinusa unesite s a cosinusa c" << endl;
	do
	{
		cin >> unos;
	} while (unos != 's' && unos != 'c');

	if (unos == 's')
	{
		for (int i = 1; i <= x; i++)
		{
			rezultat += i / (sin(x / i) + x);
		}
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			rezultat += i / (cos(x / i) + x);
		}
	}
	cout << rezultat << endl;
}