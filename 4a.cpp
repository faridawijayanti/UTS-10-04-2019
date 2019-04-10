#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int cari;
    int data [1000];
	int flag = 0;
	cout<<"masukkan data yang ingin dicari = ";
	cin>>cari;
	for (int i=0; i<1000; i++)
	{
		if (data [i] == cari) flag=1;
		break;
	}
	if (flag ==1) cout<<"data ada!\n";
		else cout<<"data tidak ada!\n";
}
