#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;



int main() 
{ 
    setlocale(0, "");
	double PT,PS,TZ=1,a,b,IntegrS=0,h,SrChet=0,SrNChet=0,Summ=0,IntegrTR=0;
	int i,j,n,k,p;
	cout << "\n ������� ��������(a,b) ";
	printf ("\n");
	 cin >> a;
	 cin >> b;
	cout << "������� n ";
 	 cin >> n; //���������

h=(b-a)/n; 	//���
//cout << " ������� ������� ��������";
double otr[n]; //������� ������ �� ���������� �����
otr[0]=a;//1 �������
otr[n]=b;//��������� �������
for (i=1 ; i<n; i++)
 	 {
 	 	otr[i]=a+i*h;//������� ��������
 	 }
SrNChet=sin(a+h);//0
for (int k = 2; k < n; k += 2)//c��� ������� ���������
	{
		SrNChet += sin(a+(k+1)*h);//��������
		SrChet += sin(a + k*h);//������
	}	  
IntegrS=(sin(otr[0])+sin(otr[n])+4*SrNChet+2*SrChet)*(h/3);//��������;
PS=TZ-IntegrS;//����������� �� ��������
cout << "�������� ��������� �� ������� �������� ";
printf ("\n"); 
cout << IntegrS ;
printf ("\n");
printf ("����������� ��������� �� ������ ��������");
printf ("\n");
cout << PS ;
printf ("\n");
printf ("\n");
//cout << " ������� ������� ������� ��������";
for (p=1 ; p<n; p++)
	{
		Summ+=cos(a+p*h);
	}
IntegrTR=(h/2)*(sin(a)+sin(b)+2*Summ);
PT=TZ-IntegrTR;//����������� �� ��������
cout << "�������� ��������� �� ������� �������� ";
printf ("\n"); 
cout << IntegrTR ;
printf ("\n");
printf ("����������� ��������� �� ������ ��������");
printf ("\n");
cout << PT;

//system("pause");
getchar();
}
