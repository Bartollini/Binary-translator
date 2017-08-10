#include <cstdlib>
#include <iostream>
using namespace std;
 
void zamiana2(int x) //funkcja zamienia podan¹ liczbê na binarn¹
{
	int i=0,tab[32]; //32 bitowy typ zmniennej int (wiêksza tablica niepotrzebna)
 		
	if(x>0)
		{
		while(x!=0) 
			{
			tab[i]=x%2; 
	    	x=x/2; //liczba podzielona zaokr¹glana jest w dó³, np: 5/2=2
			i++;
			}	
		cout<<0; //bit znaku		
		for(int j=i-1 ; j>=0; j--)	
			cout<<tab[j];    
 		}
	if(x<0)
		{			
		x++; //zapis uzupe³nienia do dwóch; odwracaj¹c binarn¹ 2 dostajemy -3	
		cout<<1; //bit znaku111
		while(x!=0)
			{
			tab[i]=-x%2; //-x
			x=x/2;
			i++;
			}
		for(int j=i-1 ; j>=0; j--)	//zamiana 0 na 1 i 1 na 0
			if (tab[j]==0)
				cout<<1;
			else 
				cout<<0;
		}
}
int main()
{
	int x; //x - liczba
  
	do   //weryfikacja b³êdu 
	{
    if(cin.fail())
   	{
    cout<<"Podaj liczb\251 z zakresu od  -2 147 483 648  do  2 147 483 647!"<<endl;
	cout<<"\a";
	cin.clear();
    cin.ignore(1000,'\n');
    }
  	cout<<"Przekonwertuj\251 twoj\245 liczb\251 na binarn\245 i szesnastkow\245: "<<endl;
	  cin>>x;
	}while(cin.fail());
 
	cout<<x<<" po zamianie na posta\206 binarn\245: ";
	if(x!=0 && x!=-1)  //przez zapis uzupe³nienie do 2, -1 i 0 s¹ problematyczne, wiêc doda³em im osobne warunki 
		zamiana2(x); //wywo³anie funkcji zamiana liczbe dwójkow¹
	if (x==0)
		cout<<0;
	if(x==-1)
		cout<<11;
	cout<<endl<<endl;
	cout<<x<<" po zamianie na posta\206 szesnastkow\245: ";
	cout<<hex<<x<<endl<<endl; //wbudowana funkcja hex zamienia liczby dziesiêtne na szestnastkowe
	
	system("pause");
	return 0;
}
