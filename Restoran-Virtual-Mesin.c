/*Tugas Projek*/
/*Kelompok 13 - Juan Patrick 1906355516 ; Samuel Nathaniel Halim 1906355560*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "library.h"
#include "jurumasak.h"
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

	char restoran[100];
	int x;
	int y;
	int price;
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		
	} 
	printf("\n\n\n\n\n\t\t\t\tMasukan angka sesuai restoran Anda tuju!\n\t\t\t  ");
	printf("\tESC untuk kembali ke halaman utama) \n\t\t\t  ");
    printf("\n\n\t\t\t\t\t\t   #############    \n");     
	printf("\t\t\t\t\t\t   ##         ##     \n"); 
	printf("\t\t\t\t\t\t   #  ~~   ~~  #     \n");
	printf("\t\t\t\t\t\t   #  ()   ()  #      \n");
	printf("\t\t\t\t\t\t   (     ^     )      \n");
	printf("\t\t\t\t\t\t    |         |       \n");
	printf("\t\t\t\t\t\t    |  \\___/  |     \n");
	printf("\t\t\t\t\t\t     \\       /      \n");
	printf("\t\t\t\t\t\t    /  -----  \\     \n");
	printf("\t\t\t\t\t\t ---  |%%\\ /%%|  ---    \n");
	printf("\t\t\t\t\t\t/     |%%%%%%%%%%|     \\  \n");
	printf("\n\n\t\t\t\t Bisa saya bantu?");
	printf("\n\t\t\t\t1. Pesan");
	printf("\n\t\t\t\t2. Bantuan\n\n\n");
	switch(getch()){
		case '1':
			price=food(user.name, user.cash, checkUseAccount);
			break;
		case '2':
			helpMenu();
			return pesan();
			break;
		case ESC:
			menu();
		default:
			printf ("Input salah !\n");
			printf ("Masukan angka menu dengan benar.\n");
			system("pause");
			return pesan();
	}	
	
	Sleep(1000);
	fflush(stdin);
	printf("\n\t\t\t\tTekan tombol apapun untuk melanjutkan...");
	getch();
	Sleep(500);
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	} else {
		price = -price;
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t    Pesanan telah diterima.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	char check;
	process = 1;
	

	/*Mencetak struk pemesanan sebelum dilakukan transaksi. Jika saldo belum mencukupi, diarahkan ke menu top up saldo*/
	do {	
		if(checkUseAccount == 1) {
			printf("\n\n\t\t\t\tTOTAL\t\t\t\tRp %d", price);
		} else {
			printf("\n\n\t\t\t\tTOTAL\t\t\t\tRp %d", -price);
		}
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
	printf("\n\t\t\t\t\t\tPesanan sedang diproses.");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(500);
	displayAnimation();
	displayAnimation();
	Sleep(1000);
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\n\n\t\t\t\t\t\tPesanan Selesai!");
	process = 0;
	char line[128];
	int notFound = 0;
	char updateName[100];
	char updatePassword[100];
	char updateSaldo[100];
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
	Sleep(400);
	getch();
}


void helpMenu(){
	system("cls");
	system("color E0");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("");
	}
	printf("\n\n\n");
	printf("\t   ##################################################################################################\n");
	printf("\t   #                                                                                                #\n");
	printf("\t   #\t\t\t Cara menggunakan Restaurant Virtual Machine:                               #\n");
	printf("\t   #                                                                                                #\n");
	printf("\t   #\t\t 1. Pilih menu dituju dengan memasukkan angka sesuai tertera pada layar             #\n");
	printf("\t   #\t\t 2. Pemesanan dapat dilakukan menggunakan akun ataupun tidak menggunakan akun:      #\n");
	printf("\t   #\t\t    * Dengan akun, pembayaran dilakukan menggunakan sistem saldo                    #\n");
	printf("\t   #\t\t    * Saldo dapat diisi terlebih dahulu melalui beberapa cara                       #\n");
	printf("\t   #\t\t    * Tanpa akun, pembayaran hanya dilakukan secara langsung/tunai                  #\n");
	printf("\t   #\t\t 3. Penggunakan akun mendapatkan benefit seperti diskon/bonus saldo,                #\n");
	printf("\t   #\t\t    dan akun beserta saldo user akan tersimpan untuk dapat dipakai lagi             #\n");
	printf("\t   #\t\t 4. Pesan makanan dan minuman sesuai keinginan Anda dengan menambahkan ke cart      #\n");
	printf("\t   #\t\t	* Total harga dan pembayaran akan muncul pada layar                         #\n");
	printf("\t   #\t\t	* Dapat menghapus pesanan jika tidak jadi                                   #\n");
	printf("\t   #\t\t 	* Bila saldo kurang, maka sistem akan memberitahu kepada Anda               #\n");
	printf("\t   #\t\t    untuk melakukan pengisian saldo                                                 #\n");
	printf("\t   #\t\t 5. Akan muncul pesan konfirmasi pembayaran sebelum memesan                         #\n");
	printf("\t   #\t\t 6. Tunggu pesanan diproses sampai selesai                                          #\n");
	printf("\t   #\t\t 7. Anda akan dapat struk pembayaran sebagai bukti bahwa pesanan Anda               #\n");
	printf("\t   #\t\t    telah sampai                                                                    #\n");
	printf("\t   #                                                                                                #\n");
	printf("\t   #\t\t   Tekan tombol apapun untuk kembali... 					    #\n");
	printf("\t   #                                                                                                #\n");
	printf("\t   ##################################################################################################\n");
	getch();
}

char discountMenu(){
	system("cls");
	system("color B0");
	if(checkUseAccount == 1){
		printf("\n    User: %s", user.name);
		printf("\n    Saldo: Rp %d", user.cash);
		printf("\n\n\n\n");
	} else {
		printf("\n\n\n\n\n\n\n\n\t\t\tMohon maaf, kupon hanya dapat dibagikan pada akun yang telah terdaftar");
		Sleep(400);
		printf("\n\n");
		printf("\n\n\t\t\t\t\t    Ketik apapun untuk kembali...");
		getch();
		menu();
	}
	printf("\n\n");
	printf("\t\t\t\t\t Diskon dan Promo yang tersedia:\n\n");
	printf("\t\t\t\t\t   1. Bonus saldo Rp.10000\n\n\n ");
	printf("\t\t\t\t\t   2. Bonus saldo Rp.20000 \n\n\n");
	printf("\t\t\t\t\t   3. Potongan diskon 25% \n\n\n");
	printf("\t\t\t\t\t   4. Placeholder \n\n\n");
	printf("\t\t\t\t\t   5. Kembali ke menu");
	switch(getch()){
		case '1':
			printf("\nPlaceholder");
			break;
		case '2':
			printf("\nPlaceholder");
			break;
		case '3':
			printf("\nPlaceholder");
			break;
		case '4':
			printf("\nPlaceholder");
			break;
		case '5':
			menu();
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
			printf("\n\t\t\t\t\t   Anda tidak dapat mengisi saldo");
			Sleep(400);
			printf("\n\n\n");
			printf("\n\nKetik apapun untuk kembali...");
			getch();
			menu();
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
