#include <stdio.h>

int main(void)
{
	int sayi=0;                            //Toplam asal say�lar� hesaplamak i�in sayi ad�nda integer sayi tan�mlad�m.
	int primeNumber[1000];


	for(int i=0;i<=1000;i++)               //Olu�turdu�um primeNumber ad�ndakiki dizinin indek say�s�n� kendi de�eri olarak atad�m.
		{
			primeNumber[i]=i;
   		}

   	primeNumber[1]=0;                      //Dizinin 0. eleman� 0 yapm��t�m. Burada 1.eleman� 0 yapt�m.

 	for (int i = 2; i <= (1000); i++)     //Dizinin 2. eleman�ndan itibaren 1000'e kadar 2,3,5 ve 7 ye b�l�m�nden kalan 0 olan say�lar�n
    {                                     // de�erlerini 0 olarak de�i�tirdim.
		if(i%2==0)
		{
		primeNumber[i] = 0;
		primeNumber[2]=2;
		}
		else if(i%3==0)
		{
		primeNumber[i] = 0;
		primeNumber[3]=3;
		}
		else if(i%5==0)
		{
		primeNumber[i] = 0;
		primeNumber[5]=5;
		}
		else if(i%7==0)
		{
		primeNumber[i] = 0;
		primeNumber[7]=7;
		}
		else
		continue;

    }

	printf("Prime Number is==>\n");

    for(int i=0;i<1000;i++)
    {
    	if(primeNumber[i]!=0)          //Burada ise kalan say�lar�n ekrana bast�r�lmas�n� sa�lad�m.
		{
		sayi++;
  		printf("%d\t", primeNumber[i]);
		}
		else
		sayi=sayi;
    }
    printf("Total Prime Number:%d",sayi);
	return 0;

}
