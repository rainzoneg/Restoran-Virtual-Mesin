char name_food[50][30]; //Nama makanan/minuman
int price_food[50]; //Harga makanan
int count[50]; //Banyak porsi/gelas
int size; //Isi array


int distance(int restaurant, int location) 
{
//	jakpus = 1;
//	jakbar = 2;
//	jakut = 3;
//	jaktim =4;
//	jaksel = 5;

	if (restaurant==location) 
	{
		return 10000;
	}
	else if (restaurant==1&&location==2||restaurant==2&&location==1)
	{
		return 20000;
	}
	else if (restaurant==1&&location==3||restaurant==3&&location==1)
	{
		return 25000;
	}
	else if (restaurant==1&&location==4||restaurant==4&&location==1)
	{
		return 30000;
	}
	else if (restaurant==1&&location==5||restaurant==5&&location==1)
	{
		return 35000;
	}
	else if (restaurant==2&&location==3||restaurant==3&&location==2)
	{
		return 25000;
	}
	else if (restaurant==2&&location==4||restaurant==4&&location==2)
	{
		return 30000;
	}
	else if (restaurant==2&&location==5||restaurant==5&&location==2)
	{
		return 35000;
	}
	else if (restaurant==3&&location==4||restaurant==4&&location==3)
	{
		return 20000;
	}
	else if (restaurant==3&&location==5||restaurant==5&&location==3)
	{
		return 30000;
	}
	else if (restaurant==4&&location==5||restaurant==5&&location==4)
	{
		return 25000;
	} 
	else
	{
		return 0;
	}
	
}



int food1(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18000;
			strcpy(name_food[size], "Nasi Liwet\t\t");
		}
		else if(option==2)
		{
			option=15000;
			strcpy(name_food[size], "Mie Lethek\t\t");
		}
		else if(option==3)
		{
			option=7000;
			strcpy(name_food[size], "Gethuk\t\t\t");			
		}
		else if(option==4)
		{
			option=17000;
			strcpy(name_food[size], "Gudeg\t\t");	
		}
		else if(option==5)
		{
			option=16000;
			strcpy(name_food[size], "Nasi Grombyong\t\t");
		}
		else if(option==6)
		{
			option=8000;
			strcpy(name_food[size], "Wedang Uwuh\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Bir Pletok\t\t");
		}
		else if(option==8)
		{
			option=15000;
			strcpy(name_food[size], "Es Dawet\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
	
}

int food2(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Gandul\t\tRp 15.000");
	printf("\n\t\t\t\t2. Oseng Mercon\t\tRp 7.000");
	printf("\n\t\t\t\t3. Gethuk Goreng\tRp 3.000");
	printf("\n\t\t\t\t4. Berkecek\t\tRp 10.000");
	printf("\n\t\t\t\t5. Karang Gesing\tRp 5.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sekoteng\t\tRp 8.000");
	printf("\n\t\t\t\t7. Bajigur\t\tRp 7.000");
	printf("\n\t\t\t\t8. Wedang Jaselang\tRp 10.000\n\n\n");
	printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
	printf("\t\t\t\t Pesan Nomor: ");
	scanf("%d", &option);
		if(option==1)
		{
			option=15000;
			strcpy(name_food[size], "Nasi Gandul\t\t");

		}
		else if(option==2)
		{
			option=7000;
			strcpy(name_food[size], "Oseng Mercon\t\t");
		}
		else if(option==3)
		{
			option=3000;
			strcpy(name_food[size], "Gethuk Goreng\t\t");
		}
		else if(option==4)
		{
			option=10000;
			strcpy(name_food[size], "Berkecek\t\t");
		}
		else if(option==5)
		{
			option=5000;
			strcpy(name_food[size], "Karang Gesing\t\t");
		}
		else if(option==6)
		{
			option=8000;
			strcpy(name_food[size], "Sekoteng\t\t");
		}
		else if(option==7)
		{
			option=7000;
			strcpy(name_food[size], "Bajigur\t\t\t");
		}
		else if(option==8)
		{
			option=10000;
			strcpy(name_food[size], "Wedang Jaselang\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	return total; //Harga Total
}

int food3(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Tiwul\t\tRp 15.000");
	printf("\n\t\t\t\t2. Jadah Tempe\t\tRp 5.000");
	printf("\n\t\t\t\t3. Garang Asem\t\tRp 7.000");
	printf("\n\t\t\t\t4. Mie Ongklok\t\tRp 12.000");
	printf("\n\t\t\t\t5. Lumpia\t\tRp 5.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Wedang Pokak\t\tRp 10.000");
	printf("\n\t\t\t\t7. Wedang Jahe\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Gempol Pleret\tRp 15.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;
			strcpy(name_food[size], "Tiwul\t\t\t");
		}
		else if(option==2)
		{
			option=5000;
			strcpy(name_food[size], "Jadah Tempe\t\t");
		}
		else if(option==3)
		{
			option=7000;
			strcpy(name_food[size], "Garang Asem\t\t");
		}
		else if(option==4)
		{
			option=12000;
			strcpy(name_food[size], "Mie Ongklok\t\t");
		}
		else if(option==5)
		{
			option=5000;
			strcpy(name_food[size], "Lumpia\t\t\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Wedang Pokak\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Wedang Jahe\t\t");
		}
		else if(option==8)
		{
			option=15000;
			strcpy(name_food[size], "Es Gempol Pleret\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food4(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;
			strcpy(name_food[size], "Gulai Gajebo\t\t");
		}
		else if(option==2)
		{
			option=10000;
			strcpy(name_food[size], "Sate Padang\t\t");
		}
		else if(option==3)
		{
			option=18000;
			strcpy(name_food[size], "Soto Padang\t\t");
		}
		else if(option==4)
		{
			option=20000;
			strcpy(name_food[size], "Nasi Sala\t\t");
		}
		else if(option==5)
		{
			option=12000;
			strcpy(name_food[size], "Martabak Kubang\t\t");
		}
		else if(option==6)
		{
			option=9000;
			strcpy(name_food[size], "Teh Talua\t\t");
		}
		else if(option==7)
		{
			option=12000;
			strcpy(name_food[size], "Jus Pinang Mudo\t\t");
		}
		else if(option==8)
		{
			option=10000;
			strcpy(name_food[size], "Aia Aka\t\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food5(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=15000;
			strcpy(name_food[size], "Nasi Kapau\t\t");
		}
		else if(option==2)
		{
			option=12000;
			strcpy(name_food[size], "Ayam Pop\t\t");
		}
		else if(option==3)
		{
			option=20000;
			strcpy(name_food[size], "Dendeng Balado\t\t");
		}
		else if(option==4)
		{
			option=10000;
			strcpy(name_food[size], "Gulai Paku\t\t");
		}
		else if(option==5)
		{
			option=8000;
			strcpy(name_food[size], "Sate Lokan\t\t");
		}
		else if(option==6)
		{
			option=7000;
			strcpy(name_food[size], "Kawa Daun\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Dadiah\t\t\t");
		}
		else if(option==8)
		{
			option=12000;
			strcpy(name_food[size], "Es Durian\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food6(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17500;
			strcpy(name_food[size], "Nasi Kapau\t\t");
		}
		else if(option==2)
		{
			option=15000;
			strcpy(name_food[size], "Kalio\t\t\t");
		}
		else if(option==3)
		{
			option=10000;
			strcpy(name_food[size], "Sala Lauak\t\t");
		}
		else if(option==4)
		{
			option=7000;
			strcpy(name_food[size], "Lompong Sagu\t\t");
		}
		else if(option==5)
		{
			option=10000;
			strcpy(name_food[size], "Kacimuih\t\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Es Tebak\t\t");
		}
		else if(option==7)
		{
			option=7000;
			strcpy(name_food[size], "Air Kacang\t\t");
		}
		else if(option==8)
		{
			option=13500;
			strcpy(name_food[size], "Es Cendol Mak Khatib\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food7(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Soto Banjar\t\tRp 18.500");
	printf("\n\t\t\t\t2. Mie Sagu\t\tRp 13.000");
	printf("\n\t\t\t\t3. Chai Kue\t\tRp 6.500");
	printf("\n\t\t\t\t4. Bubur Pedas\t\tRp 12.500");
	printf("\n\t\t\t\t5. Ayam Cincane\t\tRp 10.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Lidah Buaya\tRp 8.000");
	printf("\n\t\t\t\t7. Es Teler Pontianak\tRp 10.000");
	printf("\n\t\t\t\t8. Liang Teh\t\tRp 7.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18500;
			strcpy(name_food[size], "Soto Banjar\t\t");
		}
		else if(option==2)
		{
			option=13000;
			strcpy(name_food[size], "Mie Sagu\t\t");
		}
		else if(option==3)
		{
			option=6500;
			strcpy(name_food[size], "Chai Kue\t\t");
		}
		else if(option==4)
		{
			option=12500;
			strcpy(name_food[size], "Bubur Pedas\t\t");
		}
		else if(option==5)
		{
			option=10000;
			strcpy(name_food[size], "Ayam Cincane\t\t");
		}
		else if(option==6)
		{
			option=8000;
			strcpy(name_food[size], "Es Lidah Buaya\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Es Teler Pontianak\t");
		}
		else if(option==8)
		{
			option=7000;
			strcpy(name_food[size], "Liang Teh\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food8(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Juhu Umbut Sawi\tRp 14.000");
	printf("\n\t\t\t\t2. Iwak Pakasam\t\tRp 13.000");
	printf("\n\t\t\t\t3. Amparan Tatak\tRp 7.500");
	printf("\n\t\t\t\t4. Manday\t\tRp 10.000");
	printf("\n\t\t\t\t5. Pengkang\t\tRp 9.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Teler Pontianak\tRp 10.000");
	printf("\n\t\t\t\t7. Es Jagung\t\tRp 9.000");
	printf("\n\t\t\t\t8. Cincau\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=14000;
			strcpy(name_food[size], "Juhu Umbut Sawi\t\t");
		}
		else if(option==2)
		{
			option=13000;
			strcpy(name_food[size], "Iwak Pakasam\t\t");
		}
		else if(option==3)
		{
			option=7500;
			strcpy(name_food[size], "Amparan Tatak\t\t");
		}
		else if(option==4)
		{
			option=10000;
			strcpy(name_food[size], "Manday\t\t");
		}
		else if(option==5)
		{
			option=9000;
			strcpy(name_food[size], "Pengkang\t\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Es Teler Pontianak\t");
		}
		else if(option==7)
		{
			option=9000;
			strcpy(name_food[size], "Es Jagung\t\t");
		}
		else if(option==8)
		{
			option=8000;
			strcpy(name_food[size], "Cincau\t\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food9(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Bekepor\t\tRp 17.000");
	printf("\n\t\t\t\t2. Bingka Barandam\tRp 6.500");
	printf("\n\t\t\t\t3. Sate Payau\t\tRp 5.000");
	printf("\n\t\t\t\t4. Kalumpe\t\tRp 8.000");
	printf("\n\t\t\t\t5. Ketupat Kandangan\tRp 12.500");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Ce Hun Tiaw\t\tRp 10.000");
	printf("\n\t\t\t\t7. Es Tebu Kalimantan\tRp 7.500");
	printf("\n\t\t\t\t8. Cendol\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17000;
			strcpy(name_food[size], "Nasi Bekepor\t\t");
		}
		else if(option==2)
		{
			option=6500;
			strcpy(name_food[size], "Bingka Barandam\t\t");
		}
		else if(option==3)
		{
			option=5000;
			strcpy(name_food[size], "Sate Payau\t\t");
		}
		else if(option==4)
		{
			option=8000;
			strcpy(name_food[size], "Kalumpe\t\t\t");
		}
		else if(option==5)
		{
			option=12500;
			strcpy(name_food[size], "Ketupat Kandangan\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Ce Hun Tiaw\t\t");
		}
		else if(option==7)
		{
			option=7500;
			strcpy(name_food[size], "Es Tebu Kalimantan\t");
		}
		else if(option==8)
		{
			option=8000;
			strcpy(name_food[size], "Cendol\t\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food10(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Coto Makassar\tRp 20.000");
	printf("\n\t\t\t\t2. Nasi Jaha\t\tRp 12.500");
	printf("\n\t\t\t\t3. Lapa-lapa\t\tRp 7.000");
	printf("\n\t\t\t\t4. Pallukacci\t\tRp 9.000");
	printf("\n\t\t\t\t5. Burasa\t\tRp 12.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sarabba\t\tRp 10.000");
	printf("\n\t\t\t\t7. Sirup Pisang Ambon\tRp 9.000");
	printf("\n\t\t\t\t8. Sirup Markisa\tRp 7.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=20000;
			strcpy(name_food[size], "Coto Makassar\t\t");
		}
		else if(option==2)
		{
			option=12500;
			strcpy(name_food[size], "Nasi Jaha\t\t");
		}
		else if(option==3)
		{
			option=7000;
			strcpy(name_food[size], "Lapa-lapa\t\t");
		}
		else if(option==4)
		{
			option=9000;
			strcpy(name_food[size], "Pallukacci\t\t");
		}
		else if(option==5)
		{
			option=12000;
			strcpy(name_food[size], "Burasa\t\t\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Sarabba\t\t\t");
		}
		else if(option==7)
		{
			option=9000;
			strcpy(name_food[size], "Sirup Pisang Ambon\t");
		}
		else if(option==8)
		{
			option=7000;
			strcpy(name_food[size], "Sirup Markisa\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food11(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=17500;
			strcpy(name_food[size], "Sup Konro\t\t");
		}
		else if(option==2)
		{
			option=12000;
			strcpy(name_food[size], "Kasoami\t\t\t");
		}
		else if(option==3)
		{
			option=13000;
			strcpy(name_food[size], "Sayur Ganemo\t\t");
		}
		else if(option==4)
		{
			option=14000;
			strcpy(name_food[size], "Kanre Santan\t\t");
		}
		else if(option==5)
		{
			option=9000;
			strcpy(name_food[size], "Sate Kambing Balanga\t");
		}
		else if(option==6)
		{
			option=10000;
			strcpy(name_food[size], "Es Palu Butung\t\t");
		}
		else if(option==7)
		{
			option=12000;
			strcpy(name_food[size], "Es Pisang Ijo\t\t");
		}
		else if(option==8)
		{
			option=9000;
			strcpy(name_food[size], "Saguer\t\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food12(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Nasi Kuning Riburane\tRp 19.000");
	printf("\n\t\t\t\t2. Tinutuan\t\tRp 12.000");
	printf("\n\t\t\t\t3. Kalppertaart\t\tRp 15.000");
	printf("\n\t\t\t\t4. Panada\t\tRp 7.500");
	printf("\n\t\t\t\t5. Halua Kenari\t\tRp 8.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Es Tji Mei\t\tRp 5.000");
	printf("\n\t\t\t\t7. Jus Patikala\t\tRp 10.000");
	printf("\n\t\t\t\t8. Es Brenebon\t\tRp 12.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=19000;
			strcpy(name_food[size], "Nasi Kuning Riburane\t");
		}
		else if(option==2)
		{
			option=12000;
			strcpy(name_food[size], "Tinutuan\t\t");
		}
		else if(option==3)
		{
			option=15000;
			strcpy(name_food[size], "Kalppertaart\t\t");
		}
		else if(option==4)
		{
			option=7500;
			strcpy(name_food[size], "Panada\t\t\t");
		}
		else if(option==5)
		{
			option=8000;
			strcpy(name_food[size], "Halua Kenari\t\t");
		}
		else if(option==6)
		{
			option=5000;
			strcpy(name_food[size], "Es Tji Mei\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Jus Patikala\t\t");
		}
		else if(option==8)
		{
			option=12000;
			strcpy(name_food[size], "Es Brenebon\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food13(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	printf("\n\n\n\n\t\t\t\tPilih makanan/minuman dengan memasukkan nomor");
	printf("\n\t\t\t\tsesuai tertera pada layar\n\t\t\t  ");
	printf("\n\n\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t1. Bubur Sagu\t\tRp 20.000");
	printf("\n\t\t\t\t2. Papeda\t\tRp 18.000");
	printf("\n\t\t\t\t3. Ikan Bungkus\t\tRp 12.500");
	printf("\n\t\t\t\t4. Sate Ulat Sagu\tRp 6.000");
	printf("\n\t\t\t\t5. Kue Bagea\t\tRp 7.000");
	printf("\n\n\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t6. Sunset Orange\t\tRp 12.000");
	printf("\n\t\t\t\t7. Es Matoa\t\tRp 10.000");
	printf("\n\t\t\t\t8. Kopi Senang\t\tRp 8.000\n\n\n");
		printf("\t\t\t\t Total Harga : Rp %d\n\n", total);
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=20000;
			strcpy(name_food[size], "Bubur Sagu\t\t");
		}
		else if(option==2)
		{
			option=18000;
			strcpy(name_food[size], "Papeda\t\t\t");
		}
		else if(option==3)
		{
			option=12500;
			strcpy(name_food[size], "Ikan Bungkus\t\t");
		}
		else if(option==4)
		{
			option=6000;
			strcpy(name_food[size], "Sate Ulat Sagu\t\t");
		}
		else if(option==5)
		{
			option=7000;
			strcpy(name_food[size], "Kue Bagea\t\t\t");
		}
		else if(option==6)
		{
			option=12000;
			strcpy(name_food[size], "Sunset Papua\t\t");
		}
		else if(option==7)
		{
			option=10000;
			strcpy(name_food[size], "Es Matoa\t\t");
		}
		else if(option==8)
		{
			option=8000;
			strcpy(name_food[size], "Kopi Senang\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food14(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=18000;
			strcpy(name_food[size], "Aunu Senebre\t\t");
		}
		else if(option==2)
		{
			option=12000;
			strcpy(name_food[size], "Udang Selingkuh\t\t");
		}
		else if(option==3)
		{
			option=13000;
			strcpy(name_food[size], "Ikan Bakar Manokwari\t");
		}
		else if(option==4)
		{
			option=10000;
			strcpy(name_food[size], "Martabak Sagu\t\t");
		}
		else if(option==5)
		{
			option=8500;
			strcpy(name_food[size], "Kue Lontar\t\t");
		}
		else if(option==6)
		{
			option=8500;
			strcpy(name_food[size], "Kopi Arabica Wamena\t");
		}
		else if(option==7)
		{
			option=12000;
			strcpy(name_food[size], "Es Matoa\t\t");
		}
		else if(option==8)
		{
			option=10000;
			strcpy(name_food[size], "Teh Sari Sarang Semut\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}

int food15(char username[50], int cash, int checkUseAccount) 
{
	int total=0;
	int option;
	char check;
	
	do {
	system("cls");
	system("color 30");
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
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
		printf("\t\t\t\t Pesan Nomor: ");
		scanf("%d", &option);
		if(option==1)
		{
			option=10000;
			strcpy(name_food[size], "Abon Gulung\t\t");			
		}
		else if(option==2)
		{
			option=12000;
			strcpy(name_food[size], "Aunuve Habre\t\t");
		}
		else if(option==3)
		{
			option=9000;
			strcpy(name_food[size], "Sagu Lempeng\t\t");
		}
		else if(option==4)
		{
			option=7000;
			strcpy(name_food[size], "Kue Bagea\t\t");
		}
		else if(option==5)
		{
			option=12000;
			strcpy(name_food[size], "Colo-colo\t\t");
		}
		else if(option==6)
		{
			option=12000;
			strcpy(name_food[size], "Es Kelapa Muda As-Mi\t");
		}
		else if(option==7)
		{
			option=9500;
			strcpy(name_food[size], "Es Matoa\t\t");
		}
		else if(option==8)
		{
			option=11000;
			strcpy(name_food[size], "Amungme\t\t\t");
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
			
		printf("\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
	} while(check == 'y');
	
	return total; //Harga Total
}


void struk(username, cash, alamatTujuan) {
	int i;
	system("cls");
	printf("\n    User: %s", username);
	printf("\n    Saldo: Rp %d", cash);
	printf("\n\n\n\n\n\t\t\t\t========================================\n");
	printf("\t\t\t\t\tStruk Bukti Pembayaran\n\t\t\t  ");	
	printf("\n\t\t\t\tAlamat Tujuan: %s", alamatTujuan);
	printf("\n\n\t\t\t\tNama Makanan/Minuman\tPorsi\tHarga\n");
	for(i=0;i<size;i++) {
		printf("\n\t\t\t\t%s%d\tRp %d", name_food+i, count[i], price_food[i]);
	}

}
