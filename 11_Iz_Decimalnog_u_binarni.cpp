/*
Napišite program, poštujući sve faze procesa programiranja, koji korisniku omogućava da unese jedan pozitivan cijeli broj u dekadskom brojevnom sistemu, a ispisuje njegov ekvivalent u binarnom brojevnom sistemu.
Npr. ako korisnik unese 123(10), program treba ispisati 1111011(2).
*/
long long decToBin(int);
int main()
{
    cout << "Unesite jedan decimalni broj" << endl;
	int n, binarni;
	cin >> n;
	binarni = decToBin(n);
	cout << " Unjeli ste " << n << " decinalni broj " << " U binarnom obliku on izgleda " << binarni << endl;
    return 0;
}


long long decToBin(int n)
{
	long long binarni = 0;
	int ostatak, i = 1, korak = 1;
	while (n != 0)
	{
		ostatak = n % 2;
		//cout << korak++ << " - " << ostatak << " - " << n / 2;
		n /= 2;
		binarni += ostatak * i;
		i *= 10;
	}
	return binarni;
}