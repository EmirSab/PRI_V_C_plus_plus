//Napišite program koji korištenjem rekurzivne funkcije ispisuje binarni ekvivalent unesenog prirodnog broja N.

#include <iostream>
using namespace std;

void binarni(int broj){
	
	if(broj==0)
		return;
		
	else
		binarni(broj/2);
		
	cout<<broj%2;
		
}
int main(){
	
	int broj;
	
	do{
		
		cout<<"Unesi prirodan broj: ";
		cin>>broj;
		
	}while(broj<1);
	
	binarni(broj);
	
	system("pause>0");
	return 0;
}
