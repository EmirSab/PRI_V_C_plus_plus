/*
Napišite program, poštujući sve faze procesa programiranja (analiza, specifikacija, dizajn, kod, validacija/testiranje), u kojem ćete omogući unos jednog malog slova engleske abecede. Program treba ispisati neposrednog prethodnika i neposrednog sljedbenika slova kojeg je korisnik upisao preko tastature. U slučaju da je korisnik napravio pogrešan unos (upisao karakter koji nije malo slovo) program treba ispisati odgovarajuću poruku. Vodite računa da slovo a nema prethodnika, a slovo z nema sljedbenika. Omogućite korisniku da ponavlja unos slova dok god to želi.
*/

	char y = 'y';
	bool ponovo = false;
	do
	{
		std::cout << "Unesite malo slovo engleskog alphabeta " << std::endl;
		char unos;
		std::cin >> unos;
		while (!(islower(unos)) || !(isalpha(unos)))
		{
			std::cout << "Unjeli ste pogresan znak probajte ponovo " << std::endl;
			std::cin >> unos;
		}
		for (char i = 'a'; i <= 'z'; i++)
		{
			if ((char(tolower(i))) == unos)
			{
				if ((i - 1) == 96)
				{
					std::cout << "Nema prethodnika" << std::endl;
					std::cout << i << std::endl;
					std::cout << char(i + 1) << std::endl;
				}
				else if ((i + 1) == 123)
				{
					std::cout << char(i - 1) << std::endl;
					std::cout << i << std::endl;
					std::cout << "Nema sljedbenika" << std::endl;
				}
				else
				{
					std::cout << char(i - 1) << std::endl;
					std::cout << i << std::endl;
					std::cout << char(i + 1) << std::endl;
				}
			}
		}
		std::cout << "Ako zelite pokusati ponovo pritisnite y" << std::endl;
		std::cin >> y;
		if (y == 'y')
		{
			ponovo = true;
		}
		else
		{
			ponovo = false;
		}
	} while (ponovo == true);