int main()
{
    int num1, num2, num, dig, sum, i;
	cin >> num1 >> num2;
	for (i = num1; i <= num2; i++)
	{
		sum = 0;
		num = i;
		for (; num > 0; num/=10)
		{
			dig = num % 10;
			sum = sum + dig * dig * dig;
		}
		if (sum == i)
		{
			cout << i << endl;
		}
	}
}