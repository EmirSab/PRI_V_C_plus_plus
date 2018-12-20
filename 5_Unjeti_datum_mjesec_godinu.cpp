    /*
    Napišite program kojim se za uneseni datum (dan, mjesec i godina) određuje koji je to redni broj dana u godini. Voditi računa da godina može biti i prijestupna. Omogućite korisniku da ponavlja unos datuma.
Npr: ako korisnik unese 15 2 2018 program treba ispisati uneseni dan je 46. dan u 2018 godini.
    */
    
    char y = 'y';
	bool ponovo = false;
	do
	{
		int dan = 0, mjesec = 0, godina = 0;
		std::cout << "Unesite dan, mjesec i godinu" << std::endl;
		std::cin >> dan;
		std::cin >> mjesec;
		std::cin >> godina;
		if ((godina % 4 == 0 && godina % 100 !=0) || (godina % 400 == 0))
		{
			if (mjesec == 1)
			{
				std::cout << "Dan je " << dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
			else if (mjesec == 2)
			{
				std::cout << "Dan je " << 31 + dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
			else if (mjesec == 3)
			{
				std::cout << "Dan je " << 60 + dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
		}
		else
		{
			if (mjesec == 1)
			{
				std::cout << "Dan je " << dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
			else if (mjesec == 2)
			{
				std::cout << "Dan je " << 31 + dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
			else if (mjesec == 3)
			{
				std::cout << "Dan je " << 59 + dan << std::endl;
				std::cout << "Godina je " << godina << std::endl;
			}
		}
		std::cout << "ako zelite ponovo pritisnite y " << std::endl;
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