#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

double x,y;
char wybor;

int main()
{
    for (;;)
    {
    cout << "Kalkulator!" << endl<< endl;
    cout << "Podaj wartosc x:" << endl;
    cin >> x;
    cout << "Podaj wartosc y:" << endl;
    cin >> y;
    cout << endl<< endl;
    cout << "MENU GLOWNE"<<endl;
     cout << "------------------"<<endl;
    cout << "Suma             [1]"<<endl;
    cout << "Roznica(x-y)     [2]"<<endl;
    cout << "Iloczyn          [3]"<<endl;
    cout << "Ioraz (x/y)      [4]"<<endl;
    cout << "Koniec           [5]"<<endl;



    cout<<endl<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        cout<<x+y<<endl<<"Nacisnij enter!";
    break;

    case '2':
        cout<<x-y<<endl<<"Nacisnij enter!";
    break;

    case '3':
        cout<<x*y<<endl<<"Nacisnij enter!";
    break;

    case '4':
        {
            if (y == 0)
            {
                cout<<"Nie mozna dzielic przez zero!";
                exit (0);
            }
            else
                cout<<x/y<<endl<<"Nacisnij enter!";
        }
    break;

    case '5':
        exit (0);
    break;

    default: cout<<"Nie ma takiej opcji!";

    }
    getchar(); getchar();
     system ("cls");
    }
    return 0;
}
