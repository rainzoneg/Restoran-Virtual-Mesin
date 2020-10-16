/*Tugas Projek*/
/*Kelompok 13 - Juan Patrick 1906355516 ; Samuel Nathaniel Halim 1906355560*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "library.h"
#define ESC 27

char username[50];
char password[50];
int cash;
char menu();
char pesan();
char pesan1();
char login();
void help();
void refill();

int main(){
	fflush(stdin);
	system("cls");
	system("color F0");
	/*Sign-Up*/
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tSign-Up\n\n\n");
	printf("\t\t\t\t\tNama anda:    ");
	fgets(username, 50, stdin);
	while(username[0]=='\n'){
		printf("\n\t\t\t\t\tNama tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	printf("\t\t\t\t\tPassword anda:    ");
	fgets(password, 50, stdin);
	while(password[0]=='\n'){
		printf("\n\t\t\t\t\tPassword tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	/*Login*/
	login();
}


char menu(){
	fflush(stdin);
	system("cls");
	system("color AF");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t Program Mememesan Makanan\n\n\n");
	printf("\t\t\t\t\t\t1.Pesan Makanan!\n\n");
	printf("\t\t\t\t\t\t2.Isi Saldo\n\n");
	printf("\t\t\t\t\t\t3.Bantuan\n\n");
	printf("\t\t\t\t\t\t4.Logout\n\n");
	printf("\t\t\t\t\t\t5.Keluar\n\n");
	printf("\t\t\t\t\t Masukan angka menu Anda:\n\n\n");
	switch(getch()){
		case '1':
			pesan();
			return menu();
			break;
		case '2':
			refill();
			return menu();
			break;
		case '3':
			help();
			return menu();
			break;
		case '4':
			login();
			break;
		case '5':
			system("cls");
			printf ("Terima kasih telah mencoba !\n");
			exit(0);
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return menu();
	}
}

char pesan()
{
	fflush(stdin);
	char restoran[100];
	int x;
	int y;
	int price;
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\t\t\t  ");
	printf("\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
	printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Pulau Jawa\t\t\t\tB. Pulau Sumatera");
	printf("\n\t\t\t\t1. Restoran A\t\t\t\t4. Restoran A");
	printf("\n\t\t\t\t2. Restoran B\t\t\t\t5. Restoran B");
	printf("\n\t\t\t\t3. Restoran C\t\t\t\t6. Restoran C");
	printf("\n\n\t\t\t\tC. Pulau Kalimantan");
	printf("\n\t\t\t\t7. Restoran A");
	printf("\n\t\t\t\t8. Restoran B");
	printf("\n\t\t\t\t9. Restoran C\n\n\n");
	switch(getch()){
		case '1':
			x=0;
			break;
		case '2':
			x=0;
			break;
		case '3':
			x=0;
			break;
		case '4':
			x=1;
			break;
		case '5':
			x=1;
			break;
		case '6':
			x=1;
			break;
		case '7':
			x=2;
			break;
		case '8':
			x=2;
			break;
		case '9':
			x=2;
			break;
		case ESC:
			menu();
		case '0':
			system("cls");
			system("color 30");
			printf("\n    User: %s", username);
			printf("\n    Saldo: Rp %d", cash);
			printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\t\t\t  ");
			printf("\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
			printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
			printf("\n\n\t\t\t\tD. Pulau Sulawesi");
			printf("\n\t\t\t\t1. Restoran A");
			printf("\n\t\t\t\t2. Restoran B");
			printf("\n\t\t\t\t3. Restoran C");
			printf("\n\n\t\t\t\tE. Pulau Papua");
			printf("\n\t\t\t\t4. Restoran A");
			printf("\n\t\t\t\t5. Restoran B");
			printf("\n\t\t\t\t6. Restoran C\n\n\n");
			switch(getch()){
			case '1':
			x=3;
			break;
			case '2':
			x=3;
			break;
			case '3':
			x=3;
			break;
			case '4':
			x=4;
			break;
			case '5':
			x=4;
			break;
			case '6':
			x=4;
			break;
			case '0':
			pesan();
			case ESC:
			menu();
			break;
			default:
				printf ("Input salah !\n");
				printf ("Masukan angka menu dengan benar.\n");
				system("pause");
				return pesan();
			}
		break;
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return pesan();
	}
	
	
	printf("%d", x);
	printf("\nKetik apapun untuk kembali...");
	Sleep(400);
	getch();
}


	
//	printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\n\n\t\t\t  ");
//	scanf("\n\n\n\n\n\t\t\t\t %d", &x);
//	printf("\n\n\n\n\n\t\t\t\tMasukan Alamat Anda!\n\n\n\t\t\t  ");
//	scanf("\n\n\n\n\n\t\t\t\t %d", &y);
//	printf("\n\n\n\n\n\t\t\t\tMasukan Harga\n\n\n\t\t\t  ");
//	scanf("\n\n\n\n\n\t\t\t\t %d", &price);
	
	
	
//	printf("Harga Ongkos: %d", distance(x, y, price));
//	printf("Harga Total: %d", price+=distance(x, y, price));
	
//	fgets(restoran, 100, stdin);
//	printf("\nRestoran yang ingin anda kunjungi adalah: %s", restoran);
//	printf("\nKetik apapun untuk kembali...");
//	Sleep(400);
//	getch();
//}

void help(){
	system("cls");
	system("color AF");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t Cara menggunakan Food Delivery System:\n\n");
	printf("\t\t\t\t 1. Pilih menu dituju dengan memasukkan angka sesuai tertera pada layar\n ");
	printf("\t\t\t\t 2. Anda dapat mengisi saldo terlebih dahulu \n");
	printf("\t\t\t\t 3. Pilih restoran yang Anda ingin pesan \n");
	printf("\t\t\t\t 4. Pesan makanan dan minuman sesuai keinginan Anda \n");
	printf("\t\t\t\t	* Total pembayaran akan muncul pada layar \n");
	printf("\t\t\t\t 	* Bila saldo kurang, maka sistem akan memberitahu kepada Anda \n");
	printf("\t\t\t\t	untuk melakukan pengisian saldo \n");
	printf("\t\t\t\t 5. Pilih lokasi Anda sesuai dengan alamat Anda ingin diantarkan \n");
	printf("\t\t\t\t 6. Akan muncul pesan konfirmasi pembayaran sebelum memesan \n");
	printf("\t\t\t\t 7. Tunggu proses pengantaran sampai selesai\n");
	printf("\t\t\t\t 8. Anda akan dapat struk pembayaran sebagai bukti bahwa pesanan Anda\n");
	printf("\t\t\t\t  	telah sampai \n\n");
	printf("\t\t\t\t   Tekan tombol apapun untuk kembali...");
	getch();
}

char login(){
	int x,y;
	int n = 1;
	char unLogin[50], pwLogin[50];
	
	do{
		fflush(stdin);
		system("cls");
		system("color F0");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tLogin \n");
		printf("\t\t\t\t\t     (space and case-sensitive!) \n\n\n");
		
		printf("\t\t\t\t\tNama:    ");
		fgets(unLogin, 50, stdin);
		printf("\t\t\t\t\tPassword:    ");
		fgets(pwLogin, 50, stdin);
		x = strcmp(unLogin, username);
		y = strcmp(pwLogin, password);
		
		if(x==0 && y==0){
			break;
		}
		else{
			printf("\n\t\t\t\tNama atau password tidak sesuai! ");
			printf("Coba lagi.");
			Sleep(1000);
			
		}
		
	}while(n=1);
	
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

void refill() {
	system("cls");
	int a;
	do{
		printf("\n\t\t\t\t\t\t      User: %s", username);
		printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
		printf("\n\n\n");
		printf("Masukan saldo Anda : ");
		scanf("%d", &a);
		if(a<5000)
		{
			printf("\nMaaf, Anda dapat mengisi saldo minimal 5000 rupiah\n\n");
			fflush(stdin);
			printf("Ketik apapun untuk mencoba lagi, atau ESC untuk kembali ke halaman utama");
			switch(getch()){
				case ESC:
					menu();
					break;
				default:
					system("cls");
			}
			
		}
	} while(a<5000);
	cash+=a;
	Sleep(200);
	printf("\nPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	system("cls");
	printf("\n\t\t\t\t\t\t      User: %s", username);
	printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", cash);
	printf("\n\n\nTransaksi Berhasil");
	Sleep(400);
	printf("\n\nKetik apapun untuk kembali...");
	getch();
	
}
