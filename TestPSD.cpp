#include <iostream>
#include <stdio.h>
using namespace std;

struct nilai
{
	unsigned int unilai;
	unsigned int hnilai;
	unsigned int tnilai;
	unsigned int enilai;

};


struct data
{
	char nama[60];
	int nim[20];
	struct nilai mahasiswa;

}
datamahasiswa[100];

main()
{
	int jumlah;
	void baca(int jumlah);
	printf("Masukan Banyaknya Mahasiswa yang akan Diinput Datanya :");
	scanf("%d",&jumlah);
	baca(jumlah);
	return 0;
}

void baca(int jumlah)
{
	int i;
	float nilaiu, nilaih, nilait, nilaie;
	for(i=0;i<jumlah;i++)
	{
		printf("\tIdentitas");
		printf("\n\t\tNama\t :");
		scanf("%s[^\n]",&datamahasiswa[i].nama);
		printf("\t\tNim\t :");
		scanf("%s[^\n]",&datamahasiswa[i].nim);
		printf("\tDaftar Nilai");
		printf("\n\t\tNilai U\t:");
		scanf("%s[^\n]",&datamahasiswa[i].mahasiswa.unilai);
		printf("\t\tNilai H\t:");
		scanf("%s[^n]",&datamahasiswa[i].mahasiswa.hnilai);
		printf("\t\tNilai T\t:");
		scanf("%s[^\n]",&datamahasiswa[i].mahasiswa.tnilai);
		printf("\t\tNilai E\t:");
		scanf("%s[^\n]",&datamahasiswa[i].mahasiswa.enilai);
		 if (>=85)
		{
      		printf("Nilai Huruf   : A\n");
      		printf("Keterangan    : LULUS\n");
   		}
   		else
   			if ((i>=70)&&(i<=84))
  			{
     	 		printf("Nilai Huruf   : B\n");
      			printf("Keterangan    : LULUS\n");
   			}
  			 else
   		if ((i>=55)&&(i<=69))
   		{
      		printf("Nilai Huruf   : C\n");
     		printf("Keterangan    : LULUS\n");
   		}
		if ((i>=40)&&(i<=54))
   		{
      		printf("Nilai Huruf   : D\n");
     		printf("Keterangan    : TIDAK LULUS\n");
   		}
   		else
  		 if ((i>=0)&&(i<=39))
   			printf("Nilai Huruf   : E\n");
      		printf("Keterangan    : TIDAK LULUS\n");
	}
}

