#include <iostream>
#include <cstdlib>

using namespace std;

// \245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215
//   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �

int main()
{
	int y, x;  //x-wysoko��   y-szeroko��

	do   //weryfikacja b��dnych danych
	  {
	    if(cin.fail())
	    {
	  	  cout<<"Upewnij si\251 \276e wpisa\210e\230 liczby!"<<endl<<endl;
	      cout<<"\a";
		  cin.clear();
	   	  cin.ignore(1000,'\n');
	    }
    	cout<<"Rysuj\251 ramk\251 na \230rodku (min: 3x3 | max: 80x24)"<<endl;
	    cout<<"Podaj szeroko\230\206, a po spacji wysoko\230\206:"<<endl;
	    cin>>y>>x;
     	cout<<endl<<endl;
	   }while(cin.fail());

	if (x<3 || x>24) //przedzia� wysoko�ci ramki
	{
		cout<<"\a";
		cout<<"Wysoko\230\206 mie\230ci si\251 w przedziale od 3 do 24!";
		exit (0);
	}
	if (y<3 || y>80) //przedzia� szeroko�ci ramki
	{
		cout<<"\a";
		cout<<"Szeroko\230\206 mie\230ci si\251 w przedziale od 3 do 80!";
		exit (0);
	}
	system( "cls" ); //wyczy�� ekran

	for(int i=0; i<(24-x)/2; i++) //wy�rodkowanie wysoko�ci nad ramk�
		cout<<endl;

	char a = 219; //znak pe�nego klocka z tabeli ascii
	/* rysowanie ramki */
    for(int i=0; i<x; i++)
    {
    	for (int j=0; j<(80-y)/2; j++) //wy�rodkowanie szeroko�ci
			cout<<" ";
        cout <<a;
        for( int l=1; l<y-1; l++)
        {
            if( i>=1 & i<x-1)
                cout<<" ";
            else
                 cout<<a;
        }
        cout <<a<<endl;
    }
   	for(int i=0; i<(24-x)/2; i++) //wy�rodkowanie wysoko�ci pod ramk�
		cout<<endl;

	system("pause");

	return 0;
}
