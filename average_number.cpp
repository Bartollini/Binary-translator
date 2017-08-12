#include <iostream>
#include <cmath>

using namespace std;

int many;
double sum, average;
int reg=0;
double good;
int pointer, point;


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

    for(int i=0 ; i<many ; i++)
    {
        if (good > fabs(average - table[i]))
        {
            good = fabs(average - table[i]);
            pointer = i; //We neet to know whitch table is closest
        }
        if (good == fabs(average - table[i])) //absolut
        {
            point = i;  //sometimes there are two numbers closest
        }
    }

    cout<<"Most close to average is: "<<table[pointer];
    if (table[point] == table[pointer+1]) //always second number the closest is next to first one
    {
        cout<<" and: "<<table[point];
    }

    cout<<endl<<endl;
    delete [] table;

    return 0;
}
