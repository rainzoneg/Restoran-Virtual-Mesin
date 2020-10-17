char name_food[50][30]; //Nama makanan/minuman
int price_food[50]; //Harga makanan
int count[50]; //Banyak porsi/gelas
int size; //Isi array



//TODO: Menghias Struk
void struk(int price_food[50], int count[50], int size) {
	int i;
	for(i=0;i<size;i++) {
		printf("\n\n\t\t\t\tHarga Makanan/Minuman\tBanyak\tHarga\n");
		printf("\t\t\t\tNama Makanan/minuman\t%d\t%d", count[i], price_food[i]);
	}
}




int distance(int restaurant, int location, int price) 
{
//	jawa = 0;
//	sumatera = 1;
//	kalimantan = 2;
//	sulawesi =3;
//	papua = 4;

	if (restaurant==location) 
	{
		return 10000;
	}
	else if (restaurant==0&&location==1||restaurant==1&&location==0)
	{
		return 20000;
	}
	else if (restaurant==0&&location==2||restaurant==2&&location==0)
	{
		return 25000;
	}
	else if (restaurant==0&&location==3||restaurant==3&&location==0)
	{
		return 30000;
	}
	else if (restaurant==0&&location==4||restaurant==4&&location==0)
	{
		return 35000;
	}

	else if (restaurant==1&&location==2||restaurant==2&&location==1)
	{
		return 25000;
	}
	else if (restaurant==1&&location==3||restaurant==3&&location==1)
	{
		return 30000;
	}
	else if (restaurant==1&&location==4||restaurant==4&&location==1)
	{
		return 35000;
	}
	else if (restaurant==2&&location==3||restaurant==3&&location==2)
	{
		return 20000;
	}
	else if (restaurant==2&&location==4||restaurant==4&&location==2)
	{
		return 30000;
	}
	else if (restaurant==3&&location==4||restaurant==4&&location==3)
	{
		return 25000;
	} 
	else
	{
		return price;
	}
	
}



int food1(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size=0;
	int total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Liwet\t\tRp 18.000");
	printf("\n\t\t\t\t2. Mie Lethek\t\tRp 15.000");
	printf("\n\t\t\t\t3. Gethuk\t\tRp 7.000");
	printf("\n\t\t\t\t4. Gudeg\t\tRp 17.000");
	printf("\n\t\t\t\t5. Nasi Grombyong\tRp 16.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Wedang Uwuh\t\tRp 8.000");
	printf("\n\t\t\t\t7. Bir Pletok\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Dawet\t\tRp 15.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18000;

		}
		else if(option==2)
		{
			option=15000;
		}
		else if(option==3)
		{
			option=7000;
		}
		else if(option==4)
		{
			option=17000;
		}
		else if(option==5)
		{
			option=16000;
		}
		else if(option==6)
		{
			option=8000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=15000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food2(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Gandul\t\tRp 15.000");
	printf("\n\t\t\t\t2. Oseng Mercon\t\tRp 7.000");
	printf("\n\t\t\t\t3. Gethuk Goreng\tRp 3.000");
	printf("\n\t\t\t\t4. Berkecek\t\tRp 10.000");
	printf("\n\t\t\t\t5. Carang Gesing\tRp 5.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sekoteng\t\tRp 8.000");
	printf("\n\t\t\t\t7. Bajigur\t\tRp 7.000");
	printf("\n\t\t\t\t8. Wedang Jaselang\tRp 10.000\n\n\n");
	printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
	printf("\t\t\t\t Pesan: ");
	scanf("%d", &option);
		if(option==1)
		{
			option=15000;

		}
		else if(option==2)
		{
			option=7000;
		}
		else if(option==3)
		{
			option=3000;
		}
		else if(option==4)
		{
			option=10000;
		}
		else if(option==5)
		{
			option=5000;
		}
		else if(option==6)
		{
			option=8000;
		}
		else if(option==7)
		{
			option=7000;
		}
		else if(option==8)
		{
			option=10000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food3(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Tiwul\t\tRp 15.000");
	printf("\n\t\t\t\t2. Jadah Tempe\t\tRp 5.000");
	printf("\n\t\t\t\t3. Garang Asem\t\tRp 8.000");
	printf("\n\t\t\t\t4. Tahu Petis\t\tRp 4.000");
	printf("\n\t\t\t\t5. Lumpia\t\tRp 5.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Wedang Pokak\t\tRp 10.000");
	printf("\n\t\t\t\t7. Wedang Jahe\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Gempol Pleret\tRp 15.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;

		}
		else if(option==2)
		{
			option=5000;
		}
		else if(option==3)
		{
			option=8000;
		}
		else if(option==4)
		{
			option=4000;
		}
		else if(option==5)
		{
			option=5000;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=15000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food4(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Gulai Gajebo\t\tRp 15.000");
	printf("\n\t\t\t\t2. Sate Padang\t\tRp 10.000");
	printf("\n\t\t\t\t3. Soto Padang\t\tRp 18.000");
	printf("\n\t\t\t\t4. Nasi Sala\t\tRp 20.000");
	printf("\n\t\t\t\t5. Martabak Kubang\tRp 12.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Teh Talua\t\tRp 9.000");
	printf("\n\t\t\t\t7. Jus Pinang Mudo\tRp 12.000");
	printf("\n\t\t\t\t8. Aia Aka\t\tRp 10.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;

		}
		else if(option==2)
		{
			option=10000;
		}
		else if(option==3)
		{
			option=18000;
		}
		else if(option==4)
		{
			option=20000;
		}
		else if(option==5)
		{
			option=12000;
		}
		else if(option==6)
		{
			option=9000;
		}
		else if(option==7)
		{
			option=12000;
		}
		else if(option==8)
		{
			option=10000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food5(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Kapau\t\tRp 15.000");
	printf("\n\t\t\t\t2. Ayam Pop\t\tRp 12.000");
	printf("\n\t\t\t\t3. Dendeng Balado\tRp 20.000");
	printf("\n\t\t\t\t4. Gulai Paku\t\tRp 10.000");
	printf("\n\t\t\t\t5. Sate Lokan\t\tRp 8.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Kawa Daun\t\tRp 7.000");
	printf("\n\t\t\t\t7. Dadiah\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Durian\t\tRp 12.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;

		}
		else if(option==2)
		{
			option=12000;
		}
		else if(option==3)
		{
			option=20000;
		}
		else if(option==4)
		{
			option=10000;
		}
		else if(option==5)
		{
			option=8000;
		}
		else if(option==6)
		{
			option=7000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=12000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food6(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Kapau\t\tRp 17.500");
	printf("\n\t\t\t\t2. Kalio\t\tRp 15.000");
	printf("\n\t\t\t\t3. Sala Lauak\t\tRp 10.000");
	printf("\n\t\t\t\t4. Lompong Sagu\t\tRp 7.000");
	printf("\n\t\t\t\t5. Kacimuih\t\tRp 10.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Tebak\t\tRp 10.000");
	printf("\n\t\t\t\t7. Air Kacang\t\tRp 7.000");
	printf("\n\t\t\t\t8. Es Cendol Mak Khatib\tRp 13.500\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17500;

		}
		else if(option==2)
		{
			option=15000;
		}
		else if(option==3)
		{
			option=10000;
		}
		else if(option==4)
		{
			option=7000;
		}
		else if(option==5)
		{
			option=10000;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=7000;
		}
		else if(option==8)
		{
			option=13500;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food7(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Soto Banjar\t\tRp 18.500");
	printf("\n\t\t\t\t2. Mie Sagu\t\tRp 13.000");
	printf("\n\t\t\t\t3. Mandai\t\tRp 6.500");
	printf("\n\t\t\t\t4. Bubur Pedas\t\tRp 12.500");
	printf("\n\t\t\t\t5. Iwak Pakasam\t\tRp 10.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Lidah Buaya\tRp 8.000");
	printf("\n\t\t\t\t7. Es Teler Pontianak\tRp 10.000");
	printf("\n\t\t\t\t8. Liang Teh\t\tRp 7.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18500;

		}
		else if(option==2)
		{
			option=13000;
		}
		else if(option==3)
		{
			option=6500;
		}
		else if(option==4)
		{
			option=12500;
		}
		else if(option==5)
		{
			option=10000;
		}
		else if(option==6)
		{
			option=8000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=7000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food8(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Juhu Umbut Sawit\tRp 14.000");
	printf("\n\t\t\t\t2. Kalumpe/Karuang\tRp 10.000");
	printf("\n\t\t\t\t3. Amparan Tatak\tRp 7.500");
	printf("\n\t\t\t\t4. Iwak Pakasem\t\tRp 10.000");
	printf("\n\t\t\t\t5. Kue Dange\t\tRp 9.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Tuak\tRp 10.000");
	printf("\n\t\t\t\t7. Es Jagung\t\tRp 9.000");
	printf("\n\t\t\t\t8. Cincau\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=14000;

		}
		else if(option==2)
		{
			option=10000;
		}
		else if(option==3)
		{
			option=7500;
		}
		else if(option==4)
		{
			option=10000;
		}
		else if(option==5)
		{
			option=9000;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=9000;
		}
		else if(option==8)
		{
			option=8000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food9(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Bekepor\t\tRp 17.000");
	printf("\n\t\t\t\t2. Bingka Barandam\tRp 6.500");
	printf("\n\t\t\t\t3. Sate Payau\t\tRp 5.000");
	printf("\n\t\t\t\t4. Ayam Cincane\t\tRp 8.000");
	printf("\n\t\t\t\t5. Ketupat Kandangan\tRp 12.500");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Ce Hun Tiaw\t\tRp 10.000");
	printf("\n\t\t\t\t7. Es Tebu Kalimantan\tRp 7.500");
	printf("\n\t\t\t\t8. Cendol\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17000;

		}
		else if(option==2)
		{
			option=6500;
		}
		else if(option==3)
		{
			option=5000;
		}
		else if(option==4)
		{
			option=8000;
		}
		else if(option==5)
		{
			option=12500;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=7500;
		}
		else if(option==8)
		{
			option=8000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

//TODO: KErjakan
int food10(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Coto Makassar\tRp 20.000");
	printf("\n\t\t\t\t2. Nasi Kuning Riburane\tRp 14.500");
	printf("\n\t\t\t\t3. Lapa-lapa\t\tRp 7.000");
	printf("\n\t\t\t\t4. Pallukacci\t\tRp 9.000");
	printf("\n\t\t\t\t5. Burasa\t\tRp 12.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sarabba\t\tRp 10.000");
	printf("\n\t\t\t\t7. Sirup Pisang Ambon\tRp 9.000");
	printf("\n\t\t\t\t8. Sirup Markisa\tRp 7.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=20000;

		}
		else if(option==2)
		{
			option=14500;
		}
		else if(option==3)
		{
			option=7000;
		}
		else if(option==4)
		{
			option=9000;
		}
		else if(option==5)
		{
			option=12000;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=9000;
		}
		else if(option==8)
		{
			option=7000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food11(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Sup Konro\t\tRp 17.500");
	printf("\n\t\t\t\t2. Kasoami\t\tRp 12.000");
	printf("\n\t\t\t\t3. Sayur Ganemo\t\tRp 13.000");
	printf("\n\t\t\t\t4. Kanre Santan\t\tRp 14.000");
	printf("\n\t\t\t\t5. Sate Kambing Balanga\tRp 9.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Palu Butung\tRp 10.000");
	printf("\n\t\t\t\t7. Es Pisang Ijo\tRp 12.000");
	printf("\n\t\t\t\t8. Saguer\t\tRp 9.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17500;

		}
		else if(option==2)
		{
			option=12000;
		}
		else if(option==3)
		{
			option=13000;
		}
		else if(option==4)
		{
			option=14000;
		}
		else if(option==5)
		{
			option=9000;
		}
		else if(option==6)
		{
			option=10000;
		}
		else if(option==7)
		{
			option=12000;
		}
		else if(option==8)
		{
			option=9000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food12(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Jaha\t\tRp 18.000");
	printf("\n\t\t\t\t2. Tinutuan\t\tRp 12.000");
	printf("\n\t\t\t\t3. Woku Cakalang\tRp 14.000");
	printf("\n\t\t\t\t4. Klappertaart\t\tRp 15.000");
	printf("\n\t\t\t\t5. Panada\t\tRp 8.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Tji Mei\t\tRp 5.000");
	printf("\n\t\t\t\t7. Jus Patikala\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Brenebon\t\tRp 12.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18000;

		}
		else if(option==2)
		{
			option=12000;
		}
		else if(option==3)
		{
			option=14000;
		}
		else if(option==4)
		{
			option=15000;
		}
		else if(option==5)
		{
			option=8000;
		}
		else if(option==6)
		{
			option=5000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=12000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food13(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Bubur Sagu\t\tRp 20.000");
	printf("\n\t\t\t\t2. Papeda\t\tRp 18.000");
	printf("\n\t\t\t\t3. Ikan Bungkus\t\tRp 12.500");
	printf("\n\t\t\t\t4. Sate Ulat Sagu\tRp 6.000");
	printf("\n\t\t\t\t5. Kue Bagea\t\tRp 7.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sunset Papua\t\tRp 12.000");
	printf("\n\t\t\t\t7. Es Matoa\t\tRp 10.000");
	printf("\n\t\t\t\t8. Kopi Senang\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=20000;

		}
		else if(option==2)
		{
			option=18000;
		}
		else if(option==3)
		{
			option=12500;
		}
		else if(option==4)
		{
			option=6000;
		}
		else if(option==5)
		{
			option=7000;
		}
		else if(option==6)
		{
			option=12000;
		}
		else if(option==7)
		{
			option=10000;
		}
		else if(option==8)
		{
			option=8000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food14(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Aunu Senebre\t\t\tRp 18.000");
	printf("\n\t\t\t\t2. Udang Selingkuh\t\tRp 12.000");
	printf("\n\t\t\t\t3. Ikan Bakar Manokwari\t\tRp 13.000");
	printf("\n\t\t\t\t4. Martabak Sagu\t\tRp 10.000");
	printf("\n\t\t\t\t5. Kue Lontar\t\t\tRp 8.500");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Kopi Arabica Wamena\t\tRp 8.500");
	printf("\n\t\t\t\t7. Es Matoa\t\t\tRp 12.000");
	printf("\n\t\t\t\t8. Teh Sari Sarang Semut\tRp 10.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18000;

		}
		else if(option==2)
		{
			option=12000;
		}
		else if(option==3)
		{
			option=13000;
		}
		else if(option==4)
		{
			option=10000;
		}
		else if(option==5)
		{
			option=8500;
		}
		else if(option==6)
		{
			option=8500;
		}
		else if(option==7)
		{
			option=12000;
		}
		else if(option==8)
		{
			option=10000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}

int food15(char username[50], int cash) 
{
	int price_food[50], count[50];
	int size, total=0;
	int option;

	char check;
	
	do {
	system("cls");
	system("color 30");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Abon Gulung\t\t\tRp 10.000");
	printf("\n\t\t\t\t2. Aunuve Habre\t\t\tRp 12.000");
	printf("\n\t\t\t\t3. Sagu Lempeng\t\t\tRp 9.000");
	printf("\n\t\t\t\t4. Kue Bagea\t\t\tRp 7.000");
	printf("\n\t\t\t\t5. Colo-colo\t\t\tRp 12.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Kelapa Muda Asam Manis\tRp 12.000");
	printf("\n\t\t\t\t7. Es Matoa\t\t\tRp 9.500");
	printf("\n\t\t\t\t8. Amungme\t\t\tRp 11.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=10000;

		}
		else if(option==2)
		{
			option=12000;
		}
		else if(option==3)
		{
			option=9000;
		}
		else if(option==4)
		{
			option=7000;
		}
		else if(option==5)
		{
			option=12000;
		}
		else if(option==6)
		{
			option=12000;
		}
		else if(option==7)
		{
			option=9500;
		}
		else if(option==8)
		{
			option=11000;
		}
		else {
			printf("\t\t\t\t Data makanan dan minuman tidak ditemukan\n");
			printf("\t\t\t\t Mohon pilih angka sesuai urutan daftar");
			option=0;
		}
		
		if(option!=0) {
			printf("\t\t\t\t Berapa porsi/gelas : ");
			scanf("%d", &count[size]);
		}
		
		price_food[size]=option*count[size];
		printf("\n\t\t\t\t Harga : Rp %d", price_food[size]);	
		total+=price_food[size];
		size++;
			
		printf("\n\t\t\t\t Adakah anda ingin memesan: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	struk(price_food, count, size);
	return total; //Harga Total
}


			


