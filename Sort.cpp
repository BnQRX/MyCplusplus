#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>




//Случайный массив
void M_rand (int A[], int n)
{
	int i;
	for ( i=0; i<n; i++ )
	{
		A[i] = rand() % 1000;//Заполнение N мерного массива числами от 0 до 999 в любом порядке
	}
		printf("Случайный массив:\n");
			for(i=0;i<n;i++)
				{
					printf("%5d",A[i]);
				}	
			printf("\n");
	}
//Хороший массив
void M_good (int A[], int n)
{	int i;
	for ( i=0; i<n; i++ )
		{
		 A[i] = i+1;//Числа начиная от 1 до N
		}
	  printf("}{ороший массив:\n");
			for(i=0;i<n;i++)
				{
					printf("%5d",A[i]);
				}	printf("\n");
}
//Плохенький массив
void M_bad (int A[], int n)
{	int i,j;
	for ( i=0; i<n; i++ )
	{
		A[i] = n-i;//Числа начиная с N до 1
	}
		printf("Пло}{ой массив:\n");
			for(j=0;j<n;j++)
				{
					printf("%5d",A[j]);
				}	
			printf("\n");
	}			

void SortVst (int A[], int n)
{
	int i,j,c,t,pris1=0,srav1=0;
	for (i=0; i<n-1; i++)
	{
		for (j=n-2; j>= i; j--)
			if ( A[j] > A[j+1]) 
				{
					c = A[j];pris1=pris1+3;
					A[j] = A[j+1];
					A[j+1] = c;
				}srav1++;
	};
   printf("Полученый массив сортированый вставочками:\n");
  for(t=0;t<n;t++) 
	{
		printf("%5d",A[t]);
	};
  printf("\n");
  printf("В сортировочке вставочками произведено %d сравнений и %d присвоений",srav1,pris1);
  }

void quickSortR(int A[], int n)
	{
		int i=0,j=n-1,k=0,t,pris2=0,srav2=0;
		do
		{
			if(A[i]>A[j])
				{
					k=A[i];
					A[i]=A[j];
					A[j]=k;pris2=pris2+3;
				}
			else
				{
					j--;
					if(i==j+1)
						{
							i++;
							j=n-1;
						}
				}srav2++;

		} 
		while (i!=n);
		
	printf("Полученый массив сортированный быстренькой сортировочкой:\n");
	for(t=0;t<n;t++) 
		{
			printf("%5d",A[t]);
		};
  printf("\n");
  printf("В сортировочке быстренькой произведено %d сравнений и %d присвоений",srav2,pris2);
 
} 

void main () 
{ 	FILE *f; 
	SetConsoleOutputCP(1251);
	f=fopen("c:\\\sort.txt","w");
	int n,t;
	int *A,*B,*C;
	printf("Введите размерность массива\n");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
		printf("Работа с Хорошеньким массивом\n");
		M_good(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");	
				
printf("\n");
		printf("Работа с Плохеньким массивом\n");
		M_bad(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");
				
printf("\n");
		printf("Работа сo Случайным массивом\n");
		M_rand(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");
	fclose;
	getchar();getchar();
}