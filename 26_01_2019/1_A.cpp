/*
Postavka zadatka
http://prntscr.com/mgfht8
*/
int zajedno(int n)
{
    int b = 0;
    do
    {
        cin>>n;
        if(n > 0 && n < 9)
        {
            b = b*10+n;
        }
    }while(n > 0 && n < 9);
    return b;
}

int main()
{
    int a = 0;
    cout << zajedno(a) << endl;
    return 0;
}


//drugi nacin rada zdatka bez funkcija
	int main()
    {
        int a, b = 0;
        do
        {
            cin >> a;
            if (a >0 && a < 9)
            {
                b = b * 10 + a;
            }
        } while (a > 0 && a < 9);
        cout << b;
    }