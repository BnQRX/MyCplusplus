#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>




//��������� ������
void M_rand (int A[], int n)
{
	int i;
	for ( i=0; i<n; i++ )
	{
		A[i] = rand() % 1000;//���������� N ������� ������� ������� �� 0 �� 999 � ����� �������
	}
		printf("��������� ������:\n");
			for(i=0;i<n;i++)
				{
					printf("%5d",A[i]);
				}	
			printf("\n");
	}
//������� ������
void M_good (int A[], int n)
{	int i;
	for ( i=0; i<n; i++ )
		{
		 A[i] = i+1;//����� ������� �� 1 �� N
		}
	  printf("}{������ ������:\n");
			for(i=0;i<n;i++)
				{
					printf("%5d",A[i]);
				}	printf("\n");
}
//���������� ������
void M_bad (int A[], int n)
{	int i,j;
	for ( i=0; i<n; i++ )
	{
		A[i] = n-i;//����� ������� � N �� 1
	}
		printf("���}{�� ������:\n");
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
   printf("��������� ������ ������������ �����������:\n");
  for(t=0;t<n;t++) 
	{
		printf("%5d",A[t]);
	};
  printf("\n");
  printf("� ������������ ����������� ����������� %d ��������� � %d ����������",srav1,pris1);
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
		
	printf("��������� ������ ������������� ����������� �������������:\n");
	for(t=0;t<n;t++) 
		{
			printf("%5d",A[t]);
		};
  printf("\n");
  printf("� ������������ ����������� ����������� %d ��������� � %d ����������",srav2,pris2);
 
} 

void main () 
{ 	FILE *f; 
	SetConsoleOutputCP(1251);
	f=fopen("c:\\\sort.txt","w");
	int n,t;
	int *A,*B,*C;
	printf("������� ����������� �������\n");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
		printf("������ � ����������� ��������\n");
		M_good(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");	
				
printf("\n");
		printf("������ � ���������� ��������\n");
		M_bad(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");
				
printf("\n");
		printf("������ �o ��������� ��������\n");
		M_rand(A,n);
		printf("\n");
				quickSortR(A,n);printf("\n");
				SortVst(A,n);printf("\n");
	fclose;
	getchar();getchar();
}