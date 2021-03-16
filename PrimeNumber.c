#include <stdio.h>

int main(void)
{
	int sayi=0;                            //Toplam asal sayýlarý hesaplamak için sayi adýnda integer sayi tanýmladým.
	int primeNumber[1000];


	for(int i=0;i<=1000;i++)               //Oluþturduðum primeNumber adýndakiki dizinin indek sayýsýný kendi deðeri olarak atadým.
		{
			primeNumber[i]=i;
   		}

   	primeNumber[1]=0;                      //Dizinin 0. elemaný 0 yapmýþtým. Burada 1.elemaný 0 yaptým.

 	for (int i = 2; i <= (1000); i++)     //Dizinin 2. elemanýndan itibaren 1000'e kadar 2,3,5 ve 7 ye bölümünden kalan 0 olan sayýlarýn
    {                                     // deðerlerini 0 olarak deðiþtirdim.
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
    	if(primeNumber[i]!=0)          //Burada ise kalan sayýlarýn ekrana bastýrýlmasýný saðladým.
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
