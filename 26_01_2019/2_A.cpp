/*
Postavka zadatka:
http://prntscr.com/mgfteb
*/

int isPrime(int n)
{
    bool flag = false;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    double procenat, brojProstih = 0;
    int n, brojac, prostBroj;
    do
    {
        cin>>n;
        while(n != brojac)
        {
            prostBroj = rand() % 1000 + 1;
            if(isPrime(prostBroj) == 0)
            {
                brojProstih++;
            }
            cout << prostBroj << endl;
            brojac++;
        }
    }while(n < 10 && n > 1000);
    procenat = (brojProstih / n) * 100;
    cout << procenat << " % " << endl;
    return 0;
}