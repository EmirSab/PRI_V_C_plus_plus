#include <iostream>
#include <ctime>

/*
Napisati program koji ce omoguciti korisniku unos broja n uz (uslov unosa 10<=n<=1000). Zatim simulirati unos n slucajnih vrijednosti. Simuliranje unosa ostvariti funkcijom rand()%1000+1. Izracunati statisticke podatke u kojem procentu se od n generisanih slucajnih vrijednosti pojavljuje prost broj.
Npr.Ako je generisano 10 brojeva (n = 10):5,7,4,,13,17,20,25,23,30,45 u ovom uzorku od 10 brojeva imamo 4 prosta broja pa je procenat prostih brojeva u ovom slucaju 40%
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


int main()
{
              double procenat, brojProstih = 0;
              int n, randBroj, randBrojac = 0;
              std::srand(time(0));
              do
              {
                           std::cout << "Unesite prirodan broj" << std::endl;
                           std::cin >> n;
                           while (n != randBrojac)
                           {

                                         randBroj = rand() % 1000 + 1;
                                         if (isProst(randBroj))
                                         {
                                                       std::cout << randBroj << std::endl;
                                                       brojProstih++;
                                         }
                                         randBrojac++;
                           }
              } while (n < 10 || n > 1000);
              procenat = (brojProstih / n) * 100;
              std::cout << procenat << " %" << std::endl;
              system("pause>0");
              return 0;
}
