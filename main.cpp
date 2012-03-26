#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void zufallFeld(int*,int);
void ausgebenFeld(int*,int);

int main()
{

    int Feld[30];



    zufallFeld(Feld,30);
    ausgebenFeld(Feld,30);


    return 0;
}

void zufallFeld(int *f, int l)



{

    double d =time(NULL);

    srand(d);

    for(int i=0;i<l;i++)
    {



       f[i]=rand();

    }
}
void ausgebenFeld(int *f, int l)
{
    for(int i=0;i<l;i++)
    {




        cout<<f[i]<<",";


    }
}
