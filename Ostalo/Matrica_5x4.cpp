/*
    Postavka zadatka: https://prnt.sc/n5dw1x
*/
void unos(int niz[])
{
	for (int i = 0; i < 4; i++)
	{
		std::cin >> niz[i];
		if (niz[i] < 0) //u slucaju da korisnik unese manje od 0 da ostane na istoj poziciji
		{
			i--;
		}
	}
}
void ispis(int niz[][4])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << std::setw(4) << niz[i][j];
		}
		std::cout << std::endl;
	}
}
int igrac(int niz[][4])
{
	int nule = 0, prethodni = 0, index = -1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (niz[i][j] == 0)
			{
				nule++;
			}
			if (prethodni < nule)
			{
				prethodni = nule;
				index = i;
			}
			nule = 0;
		}
	}
	return index;
}
float prosjecna(int mat[][4], int kol) 
{
	int suma = 0;
	for (int i = 0; i < 5; i++)
	{
		suma += mat[i][kol];
	}
	return suma / 5.0;
}

int main()
{
    	int matrica[5][4], utakmica;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Unesite poene za igraca " << i + 1 << std::endl;
		unos(matrica[i]);
	}
	ispis(matrica);
	int a = igrac(matrica);
	if (a == -1)
	{
		std::cout << "Nema igraca koji su postigli 0 poena" << std::endl;
	}
	else
	{
		std::cout << "Igrac koji je postigao najvise 0 " << "je igrac sa indeksom "<< a << std::endl;
	}

	do
	{
		std::cout << "Izaberite utakmicu" << std::endl;
		std::cin >> utakmica;
	} while (utakmica < 1 || utakmica > 4);
	std::cout << "Prosjecna vrijednost na utakmici " << utakmica << " " << "prosjecna ocjena je "<< prosjecna(matrica, utakmica - 1) << std::endl;
}