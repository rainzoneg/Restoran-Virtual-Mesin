/*Tugas Projek*/
/*Kelompok 13 - Juan Patrick 1906355516 ; Samuel Nathaniel Halim 1906355560*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "library.h"
#define ESC 27

struct Account{
	char name[100];
	char password[100];
	int cash;
}user;
char filename[50] = "account.txt";
int process;
char menu();
char pesan();
char pesan1();
char login();
char signup();
int checkUseAccount;
void helpMenu();
char refillMenu();
char discountMenu();

int main(){
	fflush(stdin);
	system("cls");
	system("color F0");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t Apakah anda ingin masuk menggunakan akun?\n\n\n");
	printf("\t\t\t\t\t\t1.Ya, akses dengan akun\n\n");
	printf("\t\t\t\t\t\t2.Tidak, akses tanpa akun.\n\n");
	switch(getch()){
		case '1':
			system("cls");
			system("color F0");
			printf("\n\n\n\n\n\n\n\n");
			printf("\t\t\t\t\t\tSign-Up / Login Akun\n\n\n");
			printf("\t\t\t\t\t\t1.Login\n\n");
			printf("\t\t\t\t\t\t2.Sign-up akun baru.\n\n");
			switch(getch()){
				case '1':
					login();
					break;
				case '2':
					signup();
					login();
					break;
				default:
					printf("Input invalid!");
					return main();
			}
			break;
		case '2':
			checkUseAccount = 0;
			menu();
			break;
		default:
			printf("Input invalid!");
			return main();
	}
}

char menu(){
	/*Fungsi modular untuk main menu program*/
	fflush(stdin);
	system("cls");
	system("color E0");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n");
	}
	else{
		printf("\n\n\n");
	}
	puts(
    "\t\t\t    ___        _                          _     \n"                
    "\t\t\t   | _ \\___ __| |_ __ _ _  _ _ _ __ _ _ _| |_     \n"              
    "\t\t\t   |   / -_(_-|  _/ _` | || | '_/ _` | ' |  _|     \n"             
    "\t\t\t   |_|_\\___/__/\\__\\__,_|\\_,_|_| \\__,_|_||_\\__|     \n"              
    "\t\t\t   __   ___     _             _   __  __         _    _    \n"      
    "\t\t\t   \\ \\ / (_)_ _| |_ _  _ __ _| | |  \\/  |__ _ __| |_ (_)_ _  ___ \n"
    "\t\t\t    \\ V /| | '_|  _| || / _` | | | |\\/| / _` / _| ' \\| | ' \\/ -_)\n"
    "\t\t\t     \\_/ |_|_|  \\__|\\_,_\\__,_|_| |_|  |_\\__,_\\__|_||_|_|_||_\\___|\n");    
	printf("\t\t\t\t\t\t1.Pesan Makanan!\n\n");
	printf("\t\t\t\t\t\t2.Isi Saldo\n\n");
	printf("\t\t\t\t\t\t3.Discount & Promo\n\n");
	printf("\t\t\t\t\t\t4.Bantuan\n\n");
	printf("\t\t\t\t\t\t5.Logout\n\n");
	printf("\t\t\t\t\t\t6.Keluar\n\n");
	printf("\t\t\t\t\t Masukan angka menu Anda:\n\n\n");
	switch(getch()){
		case '1':
			pesan();
			return menu();
			break;
		case '2':
			refillMenu();
			return menu();
			break;
		case '3':
			discountMenu();
			return menu();
			break;
		case '4':
			helpMenu();
			return menu();
			break;
		case '5':
			/*Ketika logout, maka dikeluarkan dari menu dan kembali ke menu awal*/
			main();
			break;
		case '6':
			system("cls");
			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tTerima kasih telah mencoba !\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(500);
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
	/*Fungsi yang menangani proses pemesanan makanan/minuman dari restoran*/
	fflush(stdin);
	size = 0;
	char restoran[100];
	int x;
	int y;
	int price;
	char alamatTujuan[50];
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
	printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Jakarta Pusat\t\t\tB. Jakarta Barat");
	printf("\n\t\t\t\t1. Koeno Koeni Cafe\t\t\t4. Rumah Makan Kebon Jeruk");
	printf("\n\t\t\t\t2. Oseng Mercon Bu Ani Samanhudi\t5. Nasi Kapau Uni Liis");
	printf("\n\t\t\t\t3. RM Sari Rasa Kebon Kacang\t\t6. Bundo Kanduang Mangga Besar");
	printf("\n\n\t\t\t\tC. Jakarta Utara");
	printf("\n\t\t\t\t7. Nasi Sariasa Sawah Besar");
	printf("\n\t\t\t\t8. Rumah Makan Tjilik Riwut ");
	printf("\n\t\t\t\t9. Telaga Sampireun Ancol\n\n\n");
	switch(getch()){
		case '1':
			x=1;
			price=food1(user.name, user.cash, checkUseAccount);
			break;
		case '2':
			x=1;
			price=food2(user.name, user.cash, checkUseAccount);
			break;
		case '3':
			x=1;
			price=food3(user.name, user.cash, checkUseAccount);
			break;
		case '4':
			x=2;
			price=food4(user.name, user.cash, checkUseAccount);
			break;
		case '5':
			x=2;
			price=food5(user.name, user.cash, checkUseAccount);
			break;
		case '6':
			x=2;
			price=food6(user.name, user.cash, checkUseAccount);
			break;
		case '7':
			x=3;
			price=food7(user.name, user.cash, checkUseAccount);
			break;
		case '8':
			x=3;
			price=food8(user.name, user.cash, checkUseAccount);
			break;
		case '9':
			x=3;
			price=food9(user.name, user.cash, checkUseAccount);
			break;
		case ESC:
			menu();
		case '0':
			system("cls");
			system("color 30");
			if(checkUseAccount == 1){
				printf("\n    User: %s", user.name);
				printf("\n    Saldo: Rp %d", user.cash);
				printf("\n\n");
			}
			printf("\n\n\n\n\n\t\t\t\tMasukan restoran yang ingin anda pesan!\n\t\t\t  ");
			printf("\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
			printf("\t(Ketik 0 untuk ganti halaman, ESC untuk kembali ke halaman utama) \n\t\t\t  ");
			printf("\n\n\t\t\t\tD. Jakarta Timur");
			printf("\n\t\t\t\t1. Coto Nusantara Cipinang");
			printf("\n\t\t\t\t2. Konro Karebosi");
			printf("\n\t\t\t\t3. Pondok Raya Minahasa");
			printf("\n\n\t\t\t\tE. Jakarta Selatan");
			printf("\n\t\t\t\t4. Ampera Garden Food Festival");
			printf("\n\t\t\t\t5. Pusat Kuliner Kalibata");
			printf("\n\t\t\t\t6. Kitong Serasa Resto\n\n\n");
			switch(getch()){
			case '1':
				x=4;
				price=food10(user.name, user.cash, checkUseAccount);
				break;
			case '2':
				x=4;
				price=food11(user.name, user.cash, checkUseAccount);			
				break;
			case '3':
				x=4;
				price=food12(user.name, user.cash, checkUseAccount);
				break;
			case '4':
				x=5;
				price=food13(user.name, user.cash, checkUseAccount);			
				break;
			case '5':
				x=5;
				price=food14(user.name, user.cash, checkUseAccount);			
				break;
			case '6':
				x=5;
				price=food15(user.name, user.cash, checkUseAccount);			
				break;
			case '0':
				pesan();
				break;
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
	
	void address() {
		system("cls");
		system("color 30");
		if(checkUseAccount == 1){
			printf("\n    User: %s", user.name);
			printf("\n    Saldo: Rp %d", user.cash);
			printf("\n\n\n\n\n");
		}
		/*Menentukan alamat user 1*/
		printf("\n\n\n\n\n\t\t\t\tMasukan Alamat Domisili Anda!\n\t\t\t  ");
		printf("\n\t\t\t\t1. Jakarta Pusat");
		printf("\n\t\t\t\t2. Jakarta Barat");
		printf("\n\t\t\t\t3. Jakarta Utara");
		printf("\n\t\t\t\t4. Jakarta Timur");
		printf("\n\t\t\t\t5. Jakarta Selatan\n\n");	
		printf("\t\t\t\tMasukan pilihan Anda: ");	
		switch(getch()){
			case '1':
				y = 1;
				printf("\n\t\t\t\tDomisili = Jakarta Pusat");
				Sleep(1000);
				break;
			case '2':
				y = 2;
				printf("\n\t\t\t\tDomisili = Jakarta Barat");
				Sleep(1000);
				break;
			case '3':
				y = 3;
				printf("\n\t\t\t\tDomisili = Jakarta Utara");
				Sleep(1000);
				break;
			case '4':
				y = 4;
				printf("\n\t\t\t\tDomisili = Jakarta Timur");
				Sleep(1000);
				break;
			case '5':
				y = 5;
				printf("\n\t\t\t\tDomisili = Jakarta Selatan");
				Sleep(1000);
				break;
			default:
				printf ("\n\t\t\t\tInput salah !\n");
				printf ("\t\t\t\tMasukan angka menu dengan benar.\n");
				printf("\t\t\t\t");
				system("pause");
				return address();
				
		}
		
	}
	address();
	Sleep(1000);
	fflush(stdin);
	printf("\n\t\t\t\tTekan tombol apapun untuk melanjutkan...");
	getch();
	/*Menentukan alamat user bagian 2*/
	printf("\n\n\t\t\t\tAlamat lokasi tujuan anda: ");
	fgets(alamatTujuan, 100, stdin);
	Sleep(500);
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t    Pesanan sedang dikonfirmasi.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	char check;
	process = 1;
	
	price+=distance(x, y);

	/*Mencetak struk pemesanan sebelum dilakukan transaksi. Jika saldo belum mencukupi, diarahkan ke menu top up saldo*/
	do {	
		struk(user.name, user.cash, alamatTujuan);
		
		printf("\n\n\t\t\t\tHarga Ongkos\t\t\tRp %d", distance(x, y));
		printf("\n\n\t\t\t\tTOTAL\t\t\t\tRp %d", price);
		printf("\n\n\t\t\t\tApakah Anda ingin melanjutkan pembayaran: (y/n) ");
		scanf(" %c", &check);
		if(user.cash-price<0) {
			printf("\t\t\t\tSaldo Anda Tidak Cukup !");
			printf("\n\t\t\t\tHarap isi saldo Anda: (y/n) ");
			scanf(" %c", &check);
			if(check=='y') {
				refillMenu();
			}
		}
	} while(check =='n' || user.cash-price<0);
	/* Pengecekan looping untuk mengecek apakah saldo sudah cukup untuk membayar pesanan atau belum*/
	size=0;
	user.cash-=price;
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t\tPesanan sedang dikonfirmasi.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	printf("\n\t\t\t\t\t\tPesanan sedang diantar.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t\tPesanan Sampai!");
	process = 0;
	Sleep(400);
	getch();
}


void helpMenu(){
	system("cls");
	system("color E0");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
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

char discountMenu(){
	system("cls");
	system("color E0");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t Cara menggunakan Restaurant Virtual System:\n\n");
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
	/*Fungsi untuk login user*/
	int x,y;
	int n = 1;
	int notFound = 0;
	char unLogin[100], pwLogin[100];
	char line[128];
	char *cashPtr;
	FILE *fPtr;
	char updateCash[100];
	
	do{
		fflush(stdin);
		system("cls");
		system("color F0");
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\tLogin \n");
		printf("\t\t\t\t\t     (space and case-sensitive!) \n\n\n");
		printf("\t\t\t\t\tNama:    ");
		fgets(unLogin, 100, stdin);
		unLogin[strcspn(unLogin, "\n")] = 0;
		printf("\t\t\t\t\tPassword:    ");
		fgets(pwLogin, 100, stdin);
		pwLogin[strcspn(pwLogin, "\n")] = 0;
		/*Pengecekkan informasi login user dengan membandingkan string login dengan string dari database accounts (account.txt)*/
		fPtr = fopen(filename, "r");
		if (fPtr)
		{
		    while(fgets(line, sizeof(line), fPtr))
		    {
		    	line[strcspn(line, "\n")] = 0;
		    	if(sscanf(line, "Username:%99s Password:%99s Saldo:%99s", user.name, user.password, updateCash) == 3){
		    		x = strcmp(unLogin, user.name);
			    	y = strcmp(pwLogin, user.password);	
			        if (x == 0 && y == 0) {
			        	user.cash = strtol(updateCash, &cashPtr, 10);
	                    printf("\n\t\t\t\t\t>>>User dan password terverifikasi!<<<\n");
	                    notFound = 0;
	                    n = 0;
						break;
	                }
	                else {
	                	notFound = 1;
	                    continue;
	                }    
				}
		    }
		    if(notFound == 1){
		    	printf("\n\t\t\t\t\t>>>User dan password tidak ditemukan!<<<\n");
		    	Sleep(100);
		    	printf("\n\t\t\t\t\t>>>Silahkan coba lagi.<<<\n");
		    	getch();
			}
		    fclose(fPtr);
		}	
	}while(n==1);
	checkUseAccount = 1;
	printf("\n\t\t\t\t\tSelamat datang, %s", user.name);
	Sleep(200);
	printf("\n\t\t\t\t\tPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	/*Setelah login berhasil, lanjut ke main menu*/
	menu();
}

char signup(){
	fflush(stdin);
	char texting[100];	
	FILE *fPtr;
		
	system("cls");
	system("color F0");
	sprintf(texting, "%s", filename);
	fPtr = fopen(texting, "a");
	
	if(fPtr == NULL){
		printf("File tidak ditemukkan! Invalid!");
		exit(EXIT_FAILURE);
	}
	
	/*Sign-Up Akun User*/
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tSign-Up\n\n\n");
	
	printf("\t\t\t\t\tNama anda:    ");
	fgets(user.name, sizeof(user.name), stdin);
	user.name[strcspn(user.name, "\n")] = 0;
	while(user.name[0]=='\0'){
		printf("\n\t\t\t\t\tNama tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	fprintf(fPtr, "Username:%s ", user.name);
	
	printf("\t\t\t\t\tPassword anda:    ");
	fgets(user.password, sizeof(user.password), stdin);
	user.password[strcspn(user.password, "\n")] = 0;
	while(user.password[0]=='\0'){
		printf("\n\t\t\t\t\tPassword tidak boleh kosong");
		Sleep(1000);
		return main();
	}
	fprintf(fPtr, "Password:%s ", user.password);
	fprintf(fPtr, "Saldo:0\n");
	fclose(fPtr);
}

char refillMenu() {
	/*Fungsi untuk menangani refill/top-up saldo user*/
	int mobileNumber = 0;
	system("cls");
	system("color 9F");
	int a = 0;
	char line[128];
	int loopCheck = 0;
	int notFound = 0;
	char updateName[100];
	char updatePassword[100];
	char updateSaldo[100];
	int x,y;
	
	
	
	do{
		if(checkUseAccount == 1){
			printf("\n\t\t\t\t\t\t      User: %s", user.name);
			printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
			printf("\n\n\n");
			
		}
		else{
			printf("\n\t\t\t\t\t   User: Tidak Menggunakan Account");
			printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
			printf("\n\n\n");
		}
		/*3 Metode top-up:*/
		printf("Pilih metode top up:\n\n");
		printf("1. Mobile Credit\n");
		printf("2. Minimart Voucher\n");
		printf("3. Transfer E-money\n");
		if(process==0){
			printf("4. Kembali ke menu\n");	
		}
		printf("Masukan angka menu Anda: ");
		switch(getch()){
			case '1':
				while(mobileNumber < 100000)
				{
					system("cls");
					printf("\n\t\t\t\t\t\t      User: %s", user.name);
					printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
					printf("\n\n\n");
					printf("Masukkan nomor mobile anda: ");
					scanf("%d", &mobileNumber);
					if(mobileNumber<100000){
						printf("\nMasukkan nomor yang valid! (minimal 6 angka)");
					}
					Sleep(1000);
					fflush(stdin);
				} 
				mobileNumber = 0;
				;
				while(loopCheck<1)
				{
					system("cls");
					printf("\n\t\t\t\t\t\t      User: %s", user.name);
					printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
					printf("\n\n\n");
					printf("Masukan saldo Anda : \n");
					scanf("%d", &a);
					if(a<5000){
						printf("\nMaaf, Anda dapat mengisi saldo minimal 5000 rupiah\n\n");
						fflush(stdin);
						printf("Ketik apapun untuk mencoba lagi, atau ESC untuk mencoba metode lain");
						switch(getch()){
							case ESC:
								return refillMenu();
								break;
							default:
								system("cls");
						}
					}	
					else{
						loopCheck = 1;
					}
				}
				break;
			case '2':
				system("cls");
				printf("\n\t\t\t\t\t\t      User: %s", user.name);
				printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
				printf("\n\n\n");
				printf("Pilihlah voucher saldo yang ingin dibeli:\n");
				printf("1. Rp10.000,00\n");
				printf("2. Rp20.000,00\n");
				printf("3. Rp50.000,00\n");
				printf("4. Kembali\n"); 
				printf("Masukan pilihan Anda: ");
				switch(getch()){
					case '1':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 10000;
						break;
					case '2':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 20000;
						break;
					case '3':
						printf("\nKonfirmasikan transaksi di kasir minimart.");
						Sleep(400);
						printf(".");
						Sleep(400);
						printf(".");
						Sleep(500);
						a = 50000;
						break;
					case '4':
						return refillMenu();
						break;
					default:
						printf ("\n\nInput salah !\n");
						printf ("Masukan angka menu dengan benar.\n");
						system("pause");
						return refillMenu();
				}
				break;
			case '3':
				system("cls");
				printf("\n\t\t\t\t\t\t      User: %s", user.name);
				printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
				printf("\n\n\n");
				printf("Masukan saldo Anda : \n");
				scanf("%d", &a);
				if(a<5000)
				{
					printf("\nMaaf, Anda dapat mengisi saldo minimal 5000 rupiah\n\n");
					fflush(stdin);
					printf("Ketik apapun untuk mencoba lagi, atau ESC untuk mencoba ke metode lain");
					switch(getch()){
						case ESC:
							return refillMenu();
							break;
						default:
							system("cls");
					}
			
				}
				break;
			case '4':
				if(process==0){
					menu();
				}
			default:
				printf ("\n\nInput salah !\n");
				printf ("Masukan angka menu dengan benar.\n");
				system("pause");
				return refillMenu();
		}
	} while(a<5000);
	user.cash+=a;
	FILE *fPtr;
	FILE *fPtr2;
	int lnum = 0, lineCount = 0;
	char string[256];
	fPtr = fopen(filename, "r");
	if (fPtr)
	{
		while(fgets(line, sizeof(line), fPtr))
		{
		    line[strcspn(line, "\n")] = 0;
		    if(sscanf(line, "Username:%99s Password:%99s Saldo:%s", updateName, updatePassword, updateSaldo) == 3){
		    	x = strcmp(user.name, updateName);
			    y = strcmp(user.password, updatePassword);			    
			    if (x == 0 && y == 0) {
			    	lnum++;
					Sleep(1000);
	                notFound = 0;
					break;
	            }
	            else {
	                notFound = 1;
					lnum++;
	                continue;
	            }    
			}
		}
		    fclose(fPtr);
	}	
	fPtr = fopen(filename, "r");
	fPtr2 = fopen("temp.txt", "w");
	while (!feof(fPtr)) {
            strcpy(string, "\0");
            fgets(string, sizeof(string), fPtr);
            if (!feof(fPtr)) {
                lineCount++;
                /* skip the line at given line number */
                if (lineCount != lnum) {
                    fprintf(fPtr2, "%s", string);
                } 
				else {
                    /* replacing with new input line */
                    fprintf(fPtr2, "Username:%s Password:%s Saldo:%d\n", user.name, user.password, user.cash);
                }
            }
    }
    fclose(fPtr);
    fclose(fPtr2);
    remove(filename);
    rename("temp.txt", filename);

	Sleep(200);
	printf("\nPlease wait.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	system("cls");
	printf("\n\t\t\t\t\t\t      User: %s", user.name);
	printf("\n\t\t\t\t\t\tSaldo Sekarang: Rp %d", user.cash);
	printf("\n\n\nTransaksi Berhasil");
	Sleep(400);
	printf("\n\nKetik apapun untuk kembali...");
	getch();
	
	
}
