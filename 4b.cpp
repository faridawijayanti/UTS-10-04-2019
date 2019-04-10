#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
    int cari , data [100] ;
    int ran=0;
    for (int i=0;i<100;i++)
    {
        data [i] = 1+rand()%100 ;
    }
    cout<<"Data yang dicari = ";
    cin>>cari;
    for (int i=0;i<100;i++)
    {
        if (data[i]=cari)
        {
            ran++;
        }
        if (ran > 0)
        {
            cout<<"banyak Data : ";
        }
        else
            cout<<"Tidak ada";
    }
}
