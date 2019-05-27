bool prost(int br)
{
    // da li je broj prost
    for (int i = 2; i < br / 2; i++)
    {
        if (br % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
int br, n;
	do
	{
		cin >> br >> n;
	} while ((br < 100 || br >200) && n < 200);
	(br % 2 != 0) ? br++ : 1;

	for (int k = 0; k <= n; k += 2)
	{
		for (int i = k / 2, j = k / 2; i > 1; i--, j++)
		{
			// dva brojaca vrijednos je polovina broja, i ide u - a j u + obezbjedjuje da prilikom svakog prolaza zbir i i j bude taj isti broj
			if (prost(i) && prost(j))
			{
				cout << i << "+" << j << "=" << k << endl;
				break; //kada hocu da ispise samo jednu kombinaciju
			}
		}
	}
}