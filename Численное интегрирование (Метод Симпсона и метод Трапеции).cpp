#include <iostream>
#include <cstdlib> 
#include <cmath>
using namespace std;



int main() 
{ 
    setlocale(0, "");
	double PT,PS,TZ=1,a,b,IntegrS=0,h,SrChet=0,SrNChet=0,Summ=0,IntegrTR=0;
	int i,j,n,k,p;
	cout << "\n Введите интервал(a,b) ";
	printf ("\n");
	 cin >> a;
	 cin >> b;
	cout << "Введите n ";
 	 cin >> n; //разбиение

h=(b-a)/n; 	//шаг
//cout << " Решение методом Симпсона";
double otr[n]; //обьявим массив на количество точек
otr[0]=a;//1 элемент
otr[n]=b;//последний элемент
for (i=1 ; i<n; i++)
 	 {
 	 	otr[i]=a+i*h;//средние элементы
 	 }
SrNChet=sin(a+h);//0
for (int k = 2; k < n; k += 2)//cчет средних элементов
	{
		SrNChet += sin(a+(k+1)*h);//нечетные
		SrChet += sin(a + k*h);//четные
	}	  
IntegrS=(sin(otr[0])+sin(otr[n])+4*SrNChet+2*SrChet)*(h/3);//интеграл;
PS=TZ-IntegrS;//Погрешность по Симпсону
cout << "Значение интеграла по формуле Симпсона ";
printf ("\n"); 
cout << IntegrS ;
printf ("\n");
printf ("Погрешность измерения по методу Симпсона");
printf ("\n");
cout << PS ;
printf ("\n");
printf ("\n");
//cout << " Решение методом формулы трапеции";
for (p=1 ; p<n; p++)
	{
		Summ+=cos(a+p*h);
	}
IntegrTR=(h/2)*(sin(a)+sin(b)+2*Summ);
PT=TZ-IntegrTR;//Погрешность по Симпсону
cout << "Значение интеграла по формуле Трапеции ";
printf ("\n"); 
cout << IntegrTR ;
printf ("\n");
printf ("Погрешность измерения по методу Трапеции");
printf ("\n");
cout << PT;

//system("pause");
getchar();
}
