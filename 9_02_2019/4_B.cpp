/*
Kreirati dinamički dvodimenzionalni niz čiji su elementi objekti tipa figura (figura je struktura čija su obilježja data u nastavku). Omogućiti korisniku da unese dimenzije niza, te omogućiti unos elemenata. Osigurati da bude isti broj kolona i redova. Potrebno je napraviti funkciju koja će provjeriti da li su figure na bijelim poljima simetrično raspoređene po visini u odnosu na glavnu dijagonalu (da li je visina figure na poziciji 0,1 jednaka visini figure na poziciji 1,0 itd. za sva bijela polja). Funkcija treba da vrati pokazivač na memorijsku lokaciju u kojoj je upisan zbir visina figura ako je tabela simetrično raspoređena, a broj -1 ako nije simetrično raspoređena.

struct figura
{
    int ID;
    char *nazivFigure;
    float *visinaFigure;
};
 */
#include <iostream>

using namespace std;

struct figura
{
	int ID;
	char *nazivFigure;
	float *visinaFigure;
};

void Unos(figura &f) 
{
	cout << "Unesite ID: ";
	cin >> f.ID;

	cin.ignore();
	cout << "Unesite naziv figure: ";
	char tempNaziv[16];
	cin.getline(tempNaziv, sizeof tempNaziv);
	int velicina = strlen(tempNaziv) + 1;
	f.nazivFigure = new char[velicina];
	strcpy_s(f.nazivFigure, velicina, tempNaziv);

	cout << "Unesite visinu figure: ";
	f.visinaFigure = new float;
	cin >> *f.visinaFigure;
	
}

void Dealociraj(figura &f) 
{
	delete[] f.nazivFigure; f.nazivFigure = nullptr;
	delete f.visinaFigure; f.visinaFigure = nullptr;
}

float *zbirVisina(figura **m, int velicina) 
{
	float *zbir = new float(0);
	for (int i = 0; i < velicina; i++)
		for (int j = 0; j < i; j++)
			if ((i + j) % 2 != 0)
			{
				if (*m[i][j].visinaFigure == *m[j][i].visinaFigure)
					*zbir += *m[i][j].visinaFigure * 2;
				else
				{
					delete zbir;
					return new float(-1);
				}
			}
	return zbir;
}

int main() 
{
	int n;
	while (cout << "Unesite velicinu matrice: ", cin >> n, n <= 0);

	figura **matrica = new figura*[n];
	for (int i = 0; i < n; i++)
		matrica[i] = new figura[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			Unos(matrica[i][j]);


	float *zbir = zbirVisina(matrica, n);

	*zbir != -1 ? cout << "Zbir visina figura simetricno rasporedenje matrice je " << *zbir
		    : cout << "Figure nisu simetricno rasporedenje";

	delete zbir;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			Dealociraj(matrica[i][j]);
		delete[] matrica[i];
	}
	delete[] matrica;

	system("pause>0");
	return 0;
}