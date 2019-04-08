/*
    Kreiraj strukturu ucenik koja ce imati sljedeca obiljezja
    redni broj, ime i prezime, niz ocijena 5
a) Kreiraj dva objekta tipa ucenik, kreirati funkcije za unos i ispis obiljezja jednog objekta, pozvati funkcije za oba objekta
b) Kreirati niz objekata tipa ucenik, upotrijebiti funkcije iz zadatka a) za unos i ispis obiljezja
c) Kreirati funkcije za unos i ispis niza objekata tipa ucenik 
d) kreirati funkciju float prosjecna (ucenik), koja racuna prosjecnu ocjenu jednog ucenika
e) Kreirati funkciju ucenika najgori(ucenik [], int) koja ce vratiti ucenika koji ima najgoru prosjecnu ocijenu upotrijebiti funkciju za ispis iz zadatka a)
f) kreirati funkcije clanice strukture (upis, ispis, prosjecna)
*/
struct ucenik 
{
                int RB;
                char ImePrezime[15];
                int ocjene[5];
};

void unos(ucenik N[], int vel) 
{
                for (int j = 0; j < vel; j++)
                {
                                cout << "Unesite redni broj" << endl;
                                cin >> N[j].RB;
                                cin.ignore();
                                cout << "Unesite ime i prezime " << endl;
                                cin.getline(N[j].ImePrezime, 15);
                                cout << "Unesite pet ocjena " << endl;
                                for (int i = 0; i < 5; i++)
                                {
                                                cin >> N[j].ocjene[i];
                                                if (N[j].ocjene[i] < 1 || N[j].ocjene[i]> 5)
                                                {
                                                                i--;
                                                }
                                }
                }
}


//racunanje prosjeka ucenika
float prosjecna(ucenik o) 
{
                int suma = 0;
                for (int i = 0; i < 5; i++)
                {
                                suma += o.ocjene[i];
                }
                return suma / 5.0;
}
void ispis(ucenik N[], int vel)
{
                for (int j = 0; j < vel; j++)
                {
                                cout << endl << "RB " << N[j].RB;
                                cout << " " << N[j].ImePrezime << endl;
                                for (int i = 0; i < 5; i++)
                                {
                                                cout << setw(3) << N[j].ocjene[i];
                                }
                }
}

void ispis2(ucenik o)
{
                cout << endl << "RB " << o.RB;
                cout << " " << o.ImePrezime << endl;
                for (int i = 0; i < 5; i++)
                {
                                cout << setw(3) << o.ocjene[i];
                }
}
ucenik najgori(ucenik N[], int vel)
{
                float novi_niz[3], manji= INT_MAX;
                int pozicija = 0; // varijabla za poziciju ucenika koji ima najmanji prosjek
                for (int i = 0; i < 3; i++)
                {
                    novi_niz[i] = prosjecna(N[i]); //spasavanje vrijednosti iz funkcije prosjecna u niz
                }
                for (int i = 0; i < 3; i++)
                {
                    if (novi_niz[i] < manji) //provjera da li je vrijednost manja od varijable ako jeste spasava se na tu var 
                    {
                        manji = novi_niz[i];
                        pozicija = i; // spasavanje indexa
                    }
                }
                return N[pozicija];
}

int main()
{
    ucenik niz[3];
    unos(niz, 3);
    cout << "ISPIS SVIH UCENIKA" << endl;
    ispis(niz, 3);
    cout << "NAJGORI" << endl;
    ispis2(najgori(niz, 3));
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------------
//dodan dio pod f
struct ucenik 
{
                int RB;
                char ImePrezime[15];
                int ocjene[5];
                void unos(); //deklaracija funkcija vece funkcije nije preporucivo pisati u structu
                void ispis(); // funkcije clanice se pozivaju za konkretne objekte
                float prosjecna();
};

void ucenik::unos() 
{

                                cout << "Unesite redni broj" << endl;
                                cin >> RB;
                                cin.ignore();
                                cout << "Unesite ime i prezime " << endl;
                                cin.getline(ImePrezime, 15);
                                cout << "Unesite pet ocjena " << endl;
                                for (int i = 0; i < 5; i++)
                                {
                                                cin >> ocjene[i];
                                                if (ocjene[i] < 1 || ocjene[i]> 5)
                                                {
                                                                i--;
                                                }
                                }
}


//racunanje prosjeka ucenika
float ucenik::prosjecna() 
{
                int suma = 0;
                for (int i = 0; i < 5; i++)
                {
                                suma += ocjene[i];
                }
                return suma / 5.0;
}
void ucenik::ispis()
{
                                cout << endl << "RB " << RB;
                                cout << " " << ImePrezime << endl;
                                for (int i = 0; i < 5; i++)
                                {
                                                cout << setw(3) << ocjene[i];
                                }
}


int main()
{
                                ucenik niz[3];
                                for (int i = 0; i < 3; i++)
                                {
                                                niz[i].unos();
                                }
                                for (int i = 0; i < 3; i++)
                                {
                                                niz[i].ispis();
                                }
                                for (int i = 0; i < 3; i++)
                                {
                                                cout << niz[i].prosjecna();
                                }
                return 0;
}
