/*
Napišite programu kojem ćete omogućiti unos dva prirodna broja. Provjerite čine li uneseni brojevi prijateljski par. Prirodni brojevi a i b čine prijateljski par brojeva ako je zbir pravih djelitelja broja a (onih koji su manji od a) jednak broju b i istovremeno zbir pravih djelitelja broja b jednak je broju a.
Npr. Brojevi 220 i 284 su prijateljski brojevi.
Pravi djelitelji broja 220 su: 1, 2, 4, 5, 10, 11, 20, 22, 55, 110 , a njihova suma iznosi 284;
Pravi djelitelji broja 284 su: 1, 2, 4, 71, 142 a njihova suma iznosi 220.
*/
int check(int, int);
int main()
{
    int a, b;
	cout << "Unesite dva broja" << endl;
	cin >> a >> b;
	if (check(a,b))
	{
		cout << "Brojevi su prijateljski ";
	}
	else
	{
		cout << "Brojevi nisu prijateljski";
	}
}


int check(int a, int b)
{
	int suma = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			suma += i;
		}
	}
	if (suma == b)
	{
		suma = 0;
		for (int i = 1; i < b; i++)
		{
			if (b % i == 0)
			{
				suma += i;
			}
		}
		if (suma == a)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}