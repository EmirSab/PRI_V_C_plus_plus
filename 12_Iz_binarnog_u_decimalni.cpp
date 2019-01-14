/*
    Napišite program, poštujući sve faze procesa programiranja, koji korisniku omogućava da unese jedan pozitivan cijeli broj u binarnom brojevnom sistemu, a ispisuje njegov ekvivalent u dekadskom brojevnom sistemu.
Npr. ako korisnik unese 1111011(2), program treba ispisati 123(10).
 */
int binToDec(long long);
int main()
{
    cout << "Unesite jedan binarni broj" << endl;
	long long n;
	cin >> n;
	cout << binToDec(n);
    return 0;
}

int binToDec(long long n)
{
	int d = 0, i = 0, ostatak;
	while (n != 0)
	{
		ostatak = n % 10;
		n /= 10;
		d += pow(2, i);
		++i;
	}
	return d;
}