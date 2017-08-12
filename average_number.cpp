#include <iostream>
#include <cmath>

using namespace std;

int many;
double sum, average;
int reg=0;
double good;
int pointer=0, point=0, po=0;


int main()
{
    cout << "I will count average number! "<<endl<<"How many numbers: ";
    cin>>many;

    double *table;
    table = new double [many];

    cout<<"Ok, enter values of numbers!"<<endl;
    for (int i=0 ; i<many; i++)
    {
        cout<<i+1<<". ";
        cin>> table[i];
        sum += table [i];
        reg++;
    }
    average=sum/reg;

    cout<<endl;
    cout<<"Average of numbers: "<<average<<endl<<endl;

    good = fabs(average - table[0]);
    table [pointer] = table[0];

    for(int i=0 ; i<many ; i++)
    {
        if (good > fabs(average - table[i]))
        {
            good = fabs(average - table[i]);
            pointer = i; //We neet to know whitch table is closest
        }
        else if (good == fabs(average - table[i]) ) //absolut
        {
            point = i; //sometimes there are two numbers closest
                if (table[point] != table [pointer])
                {
                    po=i;
                }
        }
    }

    cout<<"Most close to average is: "<<table[pointer];
    if (table[po] != table[pointer] && table[po]!=table[0] )
    {
        cout<<" and: "<<table[po];
    }

    cout<<endl<<endl;
    delete [] table;

    return 0;
}
