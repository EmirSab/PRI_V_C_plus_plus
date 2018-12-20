/*
Napišite program koji će korisniku omogućiti unos znakova s tastature. Unos znakova se prekida kad korisnik unese znak „0“. Program treba prebrojati i ispisati koliko je među unesenim znakovima bilo malih slova, koliko velikih slova i koliko je među unesenim znakovima bilo onih koji nisu slova (interpunkcijski znakovi, znamenke, zagrade i sl.)
*/

std::string a, b;
	do
	{
		std::cout << "Unesite znak sa tastature " << std::endl;
		std::cin >> a;
		if (a != "0")
		{
			b.append(a);
		}
	} while (a != "0");
	int mala = 0, velika = 0, znakovi = 0;
	for (int i = 0; i < b.size(); i++)
	{
		if (islower(b[i]) && isalpha(b[i]))
		{
			mala++;
		}
		else if (isupper(b[i]) && isalpha(b[i]))
		{
			velika++;
		}
		else
		{
			znakovi++;
		}
	}
	std::cout << mala << std::endl;
	std::cout << velika << std::endl;
	std::cout << znakovi << std::endl;