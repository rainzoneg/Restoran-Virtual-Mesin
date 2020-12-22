struct node {
	int id; //Nomor id
	char *name; //nama makanan
	int price; //harga
	int item; //jumlah makanan
	struct node *next;  //listnode pointer
};

void insert();
void display();
void removeId();
void proses(int num, char* food, int num_1);
int count();
int Id, total;


typedef struct node data;
data *head, *start, *temp = 0, *prev;

int food(char username[50], int cash, int checkUseAccount) { 
	system("cls");
	system("color 30");
	
	if(checkUseAccount == 1){
		printf("\n    User: %s", username);
		printf("\n    Saldo: Rp %d", cash);
		printf("\n\n\n\n\n");
	}
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t\tMasukan pilihan menu: \n\n"
			"\t\t\t\t\t\t1. Pesan\n\n"
			"\t\t\t\t\t\t2. Lihat Pesanan Anda\n\n"
			"\t\t\t\t\t\t3. Hapus Pesanan\n\n"
			"\t\t\t\t\t\t4. Konfirmasi Pembayaran.\n\n" );
    switch (getch()) {
      case '1':
        insert();
        food(username, cash, checkUseAccount);
        break;
      case '2':
        display();
        food(username, cash, checkUseAccount);
        break;
      case '3':
      	removeId();
      	food(username, cash, checkUseAccount);
        break;
      case '4':
        count();
        char check;
        printf("\n\n\n\t\t\t\t Adakah anda ingin memesan lagi: (y/n) ");
		scanf(" %c", &check);
		if(check!='y'){
			return total;
		}
        food(username, cash, checkUseAccount);
        break;
      default:
      	printf("Input invalid!");
        food(username, cash, checkUseAccount);
        break;
    }
}

void insert() {
	int choice;
	int item;
	system("cls");
	printf("\n\n\t\t\t\t\tA. Makanan :");
	printf("\n\t\t\t\t\t1. Nasi Liwet\t\tRp 18.000");
	printf("\n\t\t\t\t\t2. Mie Lethek\t\tRp 15.000");
	printf("\n\t\t\t\t\t3. Gethuk Manis\t\tRp 12.000");
	printf("\n\t\t\t\t\t4. Gudeg Jawa\t\tRp 17.000");
	printf("\n\t\t\t\t\t5. Nasi Grombyong\tRp 16.000");
	printf("\n\n\t\t\t\t\tB. Minuman :");
	printf("\n\t\t\t\t\t6. Wedang Uwuh\t\tRp 10.000");
	printf("\n\t\t\t\t\t7. Bir Pletok\t\tRp 10.000");
	printf("\n\t\t\t\t\t8. Es Dawet\t\tRp 15.000\n\n\n");
	printf("\n\t\t\t\t\tPesan Nomor : ");
	scanf("%d", &choice);
	
	if(choice==1) 
	{
		Id++;
		char *name_food = "Nasi Liwet";
		choice=18000;
		proses(Id, name_food, choice);
		
	} else if(choice==2)
	{
		Id++;
		char *name_food = "Mie Lethek";
		choice=15000;
		proses(Id, name_food, choice);
		
	} else if(choice==3)
	{
		Id++;
		char *name_food = "Gethuk Manis";
		choice=12000;
		proses(Id, name_food, choice);
				
	} else if(choice==4)
	{
		Id++;
		char *name_food = "Gudeg Jawa";
		choice=17000;
		proses(Id, name_food, choice);
				
	} else if(choice==5)
	{
		Id++;
		char *name_food = "Nasi Grombyong";
		choice=16000;
		proses(Id, name_food, choice);
				
	} else if(choice==6)
	{
		Id++;
		char *name_food = "Wedang Uwuh";
		choice=10000;
		proses(Id, name_food, choice);
				
	} else if(choice==7)
	{
		Id++;
		char *name_food = "Bir Pletok";
		choice=10000;
		proses(Id, name_food, choice);
				
	} else if(choice==8)
	{
		Id++;
		char *name_food = "Es Dawet";
		choice=15000;
		proses(Id, name_food, choice);
				
	} else {
		printf("Input invalid!");
		getch();
	}
	fflush(stdin);
	
}

void proses(int num, char* food, int num_1) {
	int item;	
	printf("\n\t\t\t\t\tBerapa porsi: ");
	scanf("%d", &item);
	
	temp = (data*) malloc(sizeof (data));
	
	temp->id =num;
	temp->name=food;
	temp->price=num_1;
	temp->item=item;
	
	if (start == 0) {
		start = temp;
	} else {
	    head->next = temp;
	}
	temp->next = 0;
	head = temp;
	
}


void removeId() {
	display();
	temp =start;
	int i;
	
  	if(temp!=0){
  		printf("\nMasukan ID menu nomor : \n");
  		scanf("%d", &i);
  		if(i == temp->id){ //Hapus jika node pertama
  			temp = temp->next;
  			start=temp;
  			printf("Nomor menu %d berhasil dihapus",head->id);
		} 
  		while(temp!=0){ //Node berikutnya
  			if(i==temp->id) {
  				prev->next=temp->next;
  				head = prev;
  				printf("Nomor menu %d berhasil dihapus",temp->id);
  				break;		
  			} 
  			prev = temp;
  			temp = temp->next;
		}
	} else {
		printf("\n\n\t\tBelum ada pesanan. Silahkan pesan terlebih dahulu sebelum menggunakan fitur menghapus");
	}
  getch();
  
}

void display() {
	fflush(stdin);
	system("cls");
	temp = start;
	printf("\n\t\t   ===================      DAFTAR   PESANAN   ANDA      =================== \n\n");
	printf("\t\tID\tNama Makanan\t\tHarga\t\t\tPorsi\t\tJumlah\n");
	printf("");
	while (temp != 0) {
		printf("\t\t%d\t%s\t\tRp %d\t\t%d\t\tRp %d\n", temp->id, temp->name,temp->price, temp->item, temp->item*temp->price);
    	temp = temp -> next;
	}

  	getch();
}

int count() {
	fflush(stdin);
	temp = start;
	while (temp != 0) {
		total+=temp->item*temp->price;
		temp = temp->next;
	}

	display();
	printf("\n\n\t\tHarga total: %d", total);

  	getch();
}
