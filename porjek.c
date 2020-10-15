/*Tugas Projek*/
/*Kelompok 13 - Juan Patrick 1906355516 ; Samuel Nathaniel Halim 1906355560*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
char username[100];
char menu();
char pesan();
void help();

int main(){
	system("cls");
	system("color F0");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tLogin\n\n\n");
	printf("\t\t\t\t\tNama anda:    ");
	fgets(username, 100, stdin);
	while(username[0]=='\n'){
		printf("\n\t\t\t\t\tNama tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	printf("\n\t\t\t\t\tSelamat datang, %s", username);
	Sleep(200);
	printf("\n\t\t\t\t\tPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	menu();
}


char menu(){
	fflush(stdin);
	system("cls");
	system("color F0");
	printf("\n    User: %s", username);
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tProgram Mememesan Makanan\n\n\n");
	printf("\t\t\t\t\t\t1.Pesan Makanan!\n\n");
	printf("\t\t\t\t\t\t2.Bantuan\n\n");
	printf("\t\t\t\t\t\t3.Logout\n\n");
	printf("\t\t\t\t\t\t4.Keluar\n\n");
	printf("\t\t\t\t\tMasukan angka menu Anda:\n\n\n");
	switch(getch()){
		case '1':
			pesan();
			return menu();
			break;
		case '2':
			help();
			return menu();
			break;
		case '3':
			return main();
			break;
		case '4':
			system("cls");
			printf ("Terima kasih telah mencoba !\n");
			return 0;
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return menu();
	}
}

char pesan(){
	char restoran[100];
	system("cls");
	system("color 60");
	printf("\n    User: %s", username);
	printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\n\n\t\t\t  ");
	fgets(restoran, 100, stdin);
	printf("\nRestoran yang ingin anda kunjungi adalah: %s", restoran);
	printf("\nKetik apapun untuk kembali...");
	Sleep(400);
	getch();
}

void help(){
	system("cls");
	system("color F0");
	printf("\n    User: %s", username);
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t Cara menggunakan Program:\n\n");
	printf("\t\t\t\t 1. Pilih menu dituju dengan memasukkan angka \n ");
	printf("\t\t\t\t 2. Anda dapat menentukan ukuran matriks \n");
	printf("\t\t\t\t 3. Masukan angka sesuai dengan elemen kolom dan baris \n");
	printf("\t\t\t\t 4. Hasil Determinan dan Invers akan tampil pada layar \n");
	printf("\t\t\t\t 5. Anda dapat melihat hasil kali matriks asal dengan invers \n");
	printf("\t\t\t\t    menjadi matriks identitas. \n");
	printf("\t\t\t\t 6. Selamat Mencoba ! \n\n");
	printf("\t\t\t\t   Tekan tombol apapun untuk kembali...");
	getch();
}
