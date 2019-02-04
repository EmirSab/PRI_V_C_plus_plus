

int main()
{
    double x, rezultat;
	cin >> x;
	char unos;
	do
	{
		cin >> unos;
		if (unos == 's')
		{
			for (int i = 1; i <= x; i++)
			{
				rezultat = i / (sin(x / i) + x);
			}
			
		}
		else
		{
			for (int i = 1; i <= x; i++)
			{
				rezultat = i / (cos(x / i) + x);
			}
			
		}
	} while (unos != 'c' && unos != 's');
	cout << rezultat << endl;
}