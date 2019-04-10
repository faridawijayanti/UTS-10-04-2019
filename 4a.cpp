#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int data[100],cari,jmlh=0;
	bool bol=false;
    srand(time(0));

	for(int i=0;i<100;i++){

        data[i]=rand()%100+1;

	}

	printf("masukkan data yang di cari : ");
	scanf("%d",&cari);

	for(int i=0;i<100;i++){
        if(data[i]==cari){
            bol=true;
            jmlh++;
        }
	}

	if(bol==true){
            printf("data ada \n");
        }else{
            printf("Data Tidak ada\n");
        }
    printf("jumlah data anda : %d",jmlh);


}
