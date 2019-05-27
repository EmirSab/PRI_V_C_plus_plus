/*
U neparne redove unjeti neparni broj cifara, a u parni red unjeti srednju cifru
*/
int brojac(int);
int sredCifr(int);
void unos(int[][10]);
float arSredina(int[][10], int);
int main()
{
    int niz[10][10];
    unos(niz);
    float sredina = 0;
    int index = 0;

    //trazi najvecu sredinu pojedinih redova, 
    for (int i = 0; i < 10; i++)
    {
        if (sredina > arSredina(niz,i))
        {
            sredina = arSredina(niz, i);
            index = i;
        }
    }
    cout << "Red sa najboljim prosjekom je " << index;
    //za prosjeke po kolonama u funkciji arSredina promjeni se red i i
}

//aritmeticku sredinu nekog reda
float arSredina(int niz[][10], int red)
{
    float as = 0;
    for (int i = 0; i < 10; i++)
    {
        as += niz[red][i]; //za redove stavimo i a kada hocemo kolone zamjenimo i i red
    }
    return as / 10;
}

void unos(int niz[][10])
{
    for (int i = 0; i < 10; i += 2) //i+=2 unosimo u svaki neparni red
    {
        for (int j = 0; j < 10; j++)
        {
            do
            {
                cin >> niz[i][j];
            } while (brojac(niz[i][j]) % 2 == 0);
            niz[i + 1][j] = sredCifr(niz[i][j]);//inicijalizacija drugog reda
        }
    }
}



int brojac(int br)
{
    int count = 0;
    while (br>0)
    {
        br /= 10;
        count++;
    }
    return count;
}

int sredCifr(int sr)
{
    int cifra = 0, brojCifr = brojac(sr);
    brojCifr /= 2;
    sr /= pow(10, brojCifr);
    return cifra % 10; 
}
