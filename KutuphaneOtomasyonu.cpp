#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void mainmenu();
void yeniKitapEkle(); 
void kitapSil();
void kitaplarilistele();
void kitapOduncDurumu();
void yeniKullaniciEkle();
void kullaniciSil();
void kitapOduncVer();
void kullanicilariListele();

void edit_books(); 
void search_books(); 




int wrong=1, count;
int i=0, valid=0;
char choice=0 ;

char cevap;
int target=0,found=0;

struct books
{
	int books_id; 
	char b_name[20];
	char kitapyazari[20];
	char s_name[20];
	char add[15];
	char donustarihi[15];
	int alankullaniciId;; 
	
}m;


struct kullanici
{
	int kullaniciId; 
	char kullaniciAdi[20];
	char kullaniciSoyadi[20];
	char Adresi[20];
}n;

struct odunc
{
	char odunckullaniciAdi[20];
	char odunckullaniciSoyadi[20];
	char odunckitapAdi[20];
	char oduncsonteslimtarihi[20];
}f;




void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main() 
{
	mainmenu();
}





void mainmenu(void)
	{
		int menuislem;
printf("||__     __   ____   ___ ||  ____    ____     _  __  ||\t**    ***  **      **  *********  **      **  ********   **     **      ***      **    **  ********* \n");
printf("||  |__ |--|_| || |_|   |||_|**|*|__|+|+||___| ||  | ||\t**   ***   **      **  *********  **      **  ***    **  **     **   ***   ***   ***   **  *********\n");
printf("||==|^^||--| |=||=| |=*=||| |~~|~|  |=|=|| | |~||==| ||\t**  ***    **      **     ***     **      **  **     **  **     **  ***     ***  ****  **  **\n");
printf("||  |##||  | | || | |###|||-|  | |==|+|+||-|-|~||__| ||\t** ***     **      **     ***     **      **  **     **  *********  *** *** ***  ** ** **  ******\n");
printf("||__|__||__|_|_||_|_|___|||_|__|_|__|_|_||_|_|_||__|_||\t**  ***    **      **     ***     **      **  ***  **    *********  *** *** ***  **   ***  ******\n");
printf("||_______________________||__________________________||\t**   ***   **********     ***     **********  **         **     **  ***     ***  **    **  **\n");
printf("||_______________________||__________________________||\t**    ***  **********     ***     **********  **         **     **  ***     ***  **    **  *********\n");
printf("||=|=|=|=|=|=|=|=|=|=|=| _____ |=|=|=|=|=|=|=|=|=|=|=||\n");
printf("|| | | | | | | | | | | |/\     \\| | | | | | | | | | | ||\t\t*****KITAP ISLEMLERI********\n");
printf("||_|_|_|_|_|_|_|_|_|_|_/_/\____/\\_\|_|_|_|_|_|_|_|_|_|_||\n");
printf("||____________________/\~(*)/(*)~\\____________________||\t\t\t1-Yeni Kitap Ekle\n");
printf("||__   __    _  _     \\   (-)   /     __ __    _  _  ||\n");
printf("||~~|_|..|__| || |_ _   \\ //\\ /      |~||__|  |_||_| ||\t\t\t2-Kitap Listesi\n");
printf("||--|+|^^|==|1||2| | |__/ | | /\\__   |+||^^|  |1||2| ||\n");
printf("||__|_|__|__|_||_|_| /  \\      /  \\__|_||__|__|_||_|_||\t\t\t3-Kitap Sil\n");
printf("||__________________/    \\    /    \\_________________||\n");
printf("||_____   _   __  |/      \\../      \\ __    __    __ ||\t\t\t4-Kitap Odunc Durumu\n");
printf("||_____|_| |_|##|_||   |   \\/   |   ||##|  |##|  |##|||\t\t\t5-Kitap Odunc Ver\n");
printf("||______||=|#|--| |\\   \\   o    /   /|__|  |__|  |__|||\t\t*****KULLANICI ISLEMLERI*****\n");
printf("||______||_|_|__|_|_\\   \\  o   /   /_|__|__|__|__|__|||\n");
printf("||___________________\\___\\____/___/__________________||\t\t\t6-Yeni Kullanici Ekle\n");
printf("||_______     ________     ______            /| _ _ _||\n");
printf("||      /   //    /| //   /  /  / |         / ||*|*|*||\t\t\t7-Tum Kullanicilari Listele\n");
printf("||     /   //____// //   /__/__/ (_)       /  ||=|=|=||\n");
printf("||    /   /(____|/ //                     /  /||~|~|~||\t\t\t8-Kayitli Bir Kullaniciyi Sil\n");
printf("||__ /   /________//                     /  / ||_|_|_||\n");
printf("||_ /   (|________/                     /  /| |______||\t\t\t0-Cikis\n");   
printf("\t\t\t\t\t\t\t\tYapmak istediginiz islemi seciniz:");
scanf("%d",&menuislem);
		switch(menuislem)
			{
				case 1:
				yeniKitapEkle();
				break;
				
				case 2:
			    kitaplarilistele();
				break;
				
				case 3:
				kitapSil();
				break;
				
				case 4:
				kitapOduncDurumu();
				break;
				
				case 5:
				kitapOduncVer();
				break;
				
				
				case 6:
				yeniKullaniciEkle();
				break;
				
				case 7:
				kullanicilariListele();
				break;
				
				case 8:
				kullaniciSil();
				break;
				
				
				
				case 0:
				exit(0);
				break;
				
			
				default:
					printf("Hatali Tuslama Yaptiniz.Anamenuye Gonderiliyorsunuz");
					exit(0);
								
			}
			}
		
		
		
// yeni kitap ekleme
void yeniKitapEkle()
{
	int days;
	system("cls");
	FILE *sfile;
	sfile = fopen("BookRecord.txt","a");
	printf("\n\t\t****************************************************");
	printf("\n\t\t*******************KITAP EKLEME PANELI**************");
	printf("\n\t\t****************************************************");
	printf("\n\t\tKitap ID:\t\t:");
	fflush(stdin);
	scanf("%d",&m.books_id);
	do
	{
		printf("\n\t\tKitap Adi:\t\t:");
		fflush(stdin);
		gets(m.b_name);
		m.b_name[0]=toupper(m.b_name[0]);
		for (i=0;i<strlen(m.b_name); ++i)
		{
			if(isalpha(m.b_name[i]))
			{
				valid = 1;
			}
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\n\t\tKitap Adi Bir Karakter ile Baslamalidir!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tKitap Yazari:\t\t:");
		fflush(stdin);
		gets(m.kitapyazari);
		m.kitapyazari[0]=toupper(m.kitapyazari[0]);
		for (i=0;i<strlen(m.kitapyazari); ++i)
		{
			if(isalpha(m.kitapyazari[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nKitap Yazari Sadece Karakterlerden Olusmalidir!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tRaf Kodu\t\t:");
		fflush(stdin);
		gets(m.s_name);
		m.s_name[0]=toupper(m.s_name[0]);
		for (i=0;i<strlen(m.s_name); ++i)
		{
			if(isalpha(m.s_name[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nRaf Kodu Yalnizca Karakterlerden Olusmalidir!");
		}
	}while(!valid);
	fprintf(sfile,"%d %s %s %s \n\n",m.books_id, m.b_name, m.kitapyazari, m.s_name);
	fclose(sfile);
	printf("\n\t\tKitap Basariyla Kaydedildi.\n");
	printf("\n\t\tBaska Bir Kitap Eklemek Istiyormusunuz?[E/H]:");
	scanf("%s",&cevap);
	while(toupper(cevap)!='E'&& toupper(cevap)!='H')
	{
		printf("\t\t\tHatali Tuslama Yaptiniz.Anamenuye Gonderiliyorsunuz");
		getch();
		main();
	}
	if(toupper(cevap)=='E')
	{
		yeniKitapEkle();
	}
	else
	{
		
		main();
	}
}





// yeni kitap ekleme
void yeniKullaniciEkle()
{
	system("cls");
	FILE *sfile;
	sfile = fopen("Kullanicilar.txt","a");
	printf("\n\t\t****************************************************");
	printf("\n\t\t*******************KULLANICI EKLEME PANELI**************");
	printf("\n\t\t****************************************************");
	printf("\n\t\tKullanici ID:\t\t:");
	fflush(stdin);
	scanf("%d",&n.kullaniciId);
	do
	{
		printf("\n\t\tKullanicinin Adi:\t\t:");
		fflush(stdin);
		gets(n.kullaniciAdi);
		n.kullaniciAdi[0]=toupper(n.kullaniciAdi[0]);
		for (i=0;i<strlen(n.kullaniciAdi); ++i)
		{
			if(isalpha(n.kullaniciAdi[i]))
			{
				valid = 1;
			}
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\n\t\tKullanici Adi Sadece Karakterlerden Olusmalidir.!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tKullanici Soyadi:\t\t:");
		fflush(stdin);
		gets(n.kullaniciSoyadi);
		n.kullaniciSoyadi[0]=toupper(n.kullaniciSoyadi[0]);
		for (i=0;i<strlen(n.kullaniciSoyadi); ++i)
		{
			if(isalpha(n.kullaniciSoyadi[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nKullanici Soyadi Sadece Karakterlerden Olusmalidir!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tAdres:\t\t:");
		fflush(stdin);
		gets(n.Adresi);
		n.Adresi[0]=toupper(n.Adresi[0]);
		for (i=0;i<strlen(n.Adresi); ++i)
		{
			if(isalpha(n.Adresi[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nAdres Yalnizca Karakterlerden Olusmalidir!");
		}
	}while(!valid);

	fprintf(sfile,"%d %s %s %s \n\n",n.kullaniciId, n.kullaniciAdi, n.kullaniciSoyadi, n.Adresi);
	fclose(sfile);
	printf("\n\t\tKullanici Basariyla Kaydedildi.\n");
	printf("\n\t\tBaska Bir Kullanici Eklemek Istiyormusunuz?[E/H]:");
	scanf("%s",&cevap);
	while(toupper(cevap)!='E'&& toupper(cevap)!='H')
	{
		printf("\t\t\tHatali Tuslama Yaptiniz.Anamenuye Gonderiliyorsunuz");
		getch();
		main();
	}
	if(toupper(cevap)=='E')
	{
		yeniKullaniciEkle();
	}
	else
	{
		
		main();
	}
}




void kullanicilariListele(){

	int i,e;
	FILE*sfile;
	system("cls");
	sfile=fopen("Kullanicilar.txt","r");
	printf("\n\t\t\t*********************************************************");
	printf("\n\t\t\t****************KAYITLI KULLANICILAR LISTESI*****************");
	printf("\n\t\t\t*********************************************************");
	if(sfile==NULL)
	{
		printf("\n\n\t\tKutuphanede Kayitli Kullanici Yok");
		getch();
	}
	else
	{
		gotoxy(1,6);
		printf("Kullanici ID");
		gotoxy(13,6);
		printf("Kullanici Adi");
		gotoxy(30,6);
		printf("Kullanici SoyAdi");
		gotoxy(45,6);
		printf("Adresi");
		for(i=0;i<95;i++)
		{
			printf("-");
		}
		e=8;
		while(fscanf(sfile,"%d %s %s %s \n\n",&n.kullaniciId,n.kullaniciAdi,n.kullaniciSoyadi,n.Adresi)!=EOF)
		{
			
		
			gotoxy(1,e);
			printf("%d",n.kullaniciId);
			gotoxy(13,e);
			printf("%s",n.kullaniciAdi);
			gotoxy(30,e);
			printf("%s",n.kullaniciSoyadi);
			gotoxy(45,e);
			printf("%s",n.Adresi);
			e++;
		}
		printf("\n");
		for(i=0;i<95;i++)
		printf("-");
	}
	printf("\n\n\t Anamenuye donmek icin bir tusa basiniz...");
	fclose(sfile);
	getch();
	mainmenu();
}







void kitapOduncDurumu(){
		int i,e;
	FILE*sfile;
	system("cls");
	sfile=fopen("Odunc.txt","r");
	printf("\n\t\t\t*********************************************************");
	printf("\n\t\t\t****************ODUNC KITAPLAR LISTESI*****************");
	printf("\n\t\t\t*********************************************************");
	if(sfile==NULL)
	{
		printf("\n\n\t\tKutuphaneden Odunc Alinmis Hic Kitap Yok");
		getch();
	}
	else
	{
		gotoxy(1,6);
		printf("Alan Kisinin Adi");
		gotoxy(13,6);
		printf("Alan Kisinin Soyadi");
		gotoxy(30,6);
		printf("Kitap Adi");
		gotoxy(45,6);
		printf("Teslim Tarihi");
		for(i=0;i<95;i++)
		{
			printf("-");
		}
		e=8;
		while(fscanf(sfile,"%s %s %s %s \n\n",&f.odunckullaniciAdi,f.odunckullaniciSoyadi,f.odunckitapAdi,f.oduncsonteslimtarihi)!=EOF)
		{
			gotoxy(1,e);
			printf("%s",f.odunckullaniciAdi);
			gotoxy(13,e);
			printf("%s",f.odunckullaniciSoyadi);
			gotoxy(30,e);
			printf("%s",f.odunckitapAdi);
			gotoxy(45,e);
			printf("%s",f.oduncsonteslimtarihi);
			e++;
		}
		printf("\n");
		for(i=0;i<95;i++)
		printf("-");
	}
	printf("\n\n\t Anamenuye donmek icin bir tusa basiniz...");
	fclose(sfile);
	getch();
	mainmenu();
}







void kitapOduncVer(){
	int days;
	system("cls");
	FILE *sfile;
	sfile = fopen("Odunc.txt","a");
	printf("\n\t\t****************************************************");
	printf("\n\t\t*******************KITAP ODUNC PANELI**************");
	printf("\n\t\t****************************************************");
	do
	{
		printf("\n\t\tVerilmek Istenen Kullanici Adi:\t\t:");
		fflush(stdin);
		gets(f.odunckullaniciAdi);
		f.odunckullaniciAdi[0]=toupper(f.odunckullaniciAdi[0]);
		for (i=0;i<strlen(f.odunckullaniciAdi); ++i)
		{
			if(isalpha(f.odunckullaniciAdi[i]))
			{
				valid = 1;
			}
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\n\t\tKullanici Adi Sadece Karakterlerden Olusmalidir.!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tVerilmek Istenen Kullanici Soyadi:\t\t:");
		fflush(stdin);
		gets(f.odunckullaniciSoyadi);
		f.odunckullaniciSoyadi[0]=toupper(f.odunckullaniciSoyadi[0]);
		for (i=0;i<strlen(f.odunckullaniciSoyadi); ++i)
		{
			if(isalpha(f.odunckullaniciSoyadi[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nKullanici Soyadi Sadece Karakterlerden Olusmalidir!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tVerilmek Istenen Kitabin Adi:\t\t:");
		fflush(stdin);
		gets(f.odunckitapAdi);
		f.odunckitapAdi[0]=toupper(f.odunckitapAdi[0]);
		for (i=0;i<strlen(f.odunckitapAdi); ++i)
		{
			if(isalpha(f.odunckitapAdi[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nKitap Adi Yalnizca Karakterlerden Olusmalidir!");
		}
	}while(!valid);
	do
	{
		printf("\n\t\tSon teslim tarihi:\t\t:");
		fflush(stdin);
		gets(f.oduncsonteslimtarihi);
		f.oduncsonteslimtarihi[0]=toupper(f.oduncsonteslimtarihi[0]);
		for (i=0;i<strlen(f.oduncsonteslimtarihi); ++i)
		{
			if(isalpha(f.oduncsonteslimtarihi[i]))
				valid = 1;
			else
			{
				valid = 0;
				break;
			}
		}
		if (!valid)
		{
			printf("\nSn teslim tarihi karakterlerden olusmalidir!");
		}
	}while(!valid);
	

	fprintf(sfile,"%s %s %s %s \n\n",f.odunckullaniciAdi, f.odunckullaniciSoyadi, f.odunckitapAdi, f.oduncsonteslimtarihi);
	fclose(sfile);
	printf("\n\t\tKullanici Basariyla Kaydedildi.\n");
	printf("\n\t\tBaska Bir odunc bilgisi Eklemek Istiyormusunuz?[E/H]:");
	scanf("%s",&cevap);
	while(toupper(cevap)!='E'&& toupper(cevap)!='H')
	{
		printf("\t\t\tHatali Tuslama Yaptiniz.Anamenuye Gonderiliyorsunuz");
		getch();
		main();
	}
	if(toupper(cevap)=='E')
	{
		yeniKullaniciEkle();
	}
	else
	{
		
		main();
	}
	
	
	
}




void kitaplarilistele()
{
	int i,e;
	FILE*sfile;
	system("cls");
	sfile=fopen("BookRecord.txt","r");
	printf("\n\t\t\t*********************************************************");
	printf("\n\t\t\t****************KAYITLI KITAPLAR LISTESI*****************");
	printf("\n\t\t\t*********************************************************");
	if(sfile==NULL)
	{
		printf("\n\n\t\tKutuphanede Kayitli Hic Kitap Yok");
		getch();
	}
	else
	{
		gotoxy(1,6);
		printf("Kitap ID");
		gotoxy(13,6);
		printf("Kitap Adi");
		gotoxy(30,6);
		printf("Yazar Adi");
		gotoxy(45,6);
		printf("Raf Kodu");
		for(i=0;i<95;i++)
		{
			printf("-");
		}
		e=8;
		while(fscanf(sfile,"%d %s %s %s \n\n",&m.books_id,m.b_name,m.kitapyazari,m.s_name)!=EOF)
		{
			gotoxy(1,e);
			printf("%d",m.books_id);
			gotoxy(13,e);
			printf("%s",m.b_name);
			gotoxy(30,e);
			printf("%s",m.kitapyazari);
			gotoxy(45,e);
			printf("%s",m.s_name);
			e++;
		}
		printf("\n");
		for(i=0;i<95;i++)
		printf("-");
	}
	printf("\n\n\t Anamenuye donmek icin bir tusa basiniz...");
	fclose(sfile);
	getch();
	mainmenu();


}














// Kullanici Silme Methodu
void kullaniciSil()
{
	int target;
	system("cls");
	printf("\n\t\t*************************************************");
	printf("\n\t***************KULLANICI SILME PANELI****************");
	printf("\n\t\t*************************************************");
	FILE *sfile,*mfile;
	sfile=fopen("Kullanicilar.txt","r");
	printf("\nSilinecek Kullanici ID:");
	scanf("%i",&target);
	mfile=fopen("TempUser.txt","w+");
	if(sfile==NULL)
	{
		printf("\n\tDosya Kaydedilemedi!");
		printf("\n\t\t\tAna Menuye Gitmek Icin Bir Tusa Basiniz.");
		getch();
		mainmenu();
	}
	else
	{
		while(fscanf(sfile,"%d %s %s %s\n",&n.kullaniciId, n.kullaniciAdi, n.kullaniciSoyadi, n.Adresi)!=EOF)
		{
			if(target!=n.kullaniciId)
			{
				fprintf(mfile,"%d %s %s %s\n",n.kullaniciId, n.kullaniciAdi, n.kullaniciSoyadi);
			}
			else
			{
				found=1;
			}
		}
		if(!found)
		{
			printf("\nBoyle Bir Kullanici Bulunamadi");
		}
		else
		{
			printf("\n\tKullanici Basariyla Silindi...");
		}
		fclose(sfile);
		fclose(mfile);
		remove("Kullanicilar.txt");
		rename("TempUser.txt","Kullanicilar.txt");
	}
	getch();
	mainmenu();
}














// KitapSilme Methodu
void kitapSil()
{
	int target;
	system("cls");
	printf("\n\t\t*************************************************");
	printf("\n\t***************Delete Books Details****************");
	printf("\n\t\t*************************************************");
	FILE *sfile,*mfile;
	sfile=fopen("BookRecord.txt","r");
	printf("\nSilinecek Kitap ID:");
	scanf("%i",&target);
	mfile=fopen("TempBook.txt","w+");
	if(sfile==NULL)
	{
		printf("\n\tDosya Kaydedilemedi!");
		printf("\n\t\t\tAna Menuye Gitmek Icin Bir Tusa Basiniz.");
		getch();
		mainmenu();
	}
	else
	{
		while(fscanf(sfile,"%d %s %s %s\n",&m.books_id,m.b_name,m.kitapyazari,m.s_name)!=EOF)
		{
			if(target!=m.books_id)
			{
				fprintf(mfile,"%d %s %s %s\n",m.books_id,m.b_name,m.kitapyazari);
			}
			else
			{
				found=1;
			}
		}
		if(!found)
		{
			printf("\nBoyle Bir Kitap Bulunamadi");
		}
		else
		{
			printf("\n\tKitap Basariyla Silindi...");
		}
		fclose(sfile);
		fclose(mfile);
		remove("BookRecord.txt");
		rename("TempBook.txt","BookRecord.txt");
	}
	getch();
	mainmenu();
}


