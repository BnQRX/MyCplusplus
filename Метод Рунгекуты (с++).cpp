#include <iostream>
#include <cstdlib>		
#include <cmath>
using namespace std;

int main()
	{
		setlocale(0, "");
	    double a,b,h,K1,K2,K3,K4,n,x,y;
	    int i;
		cout << "������� ��������(a,b) ";
		printf ("\n");
	 	cin >> a;
	 	cin >> b;
		cout << "������� h= ";
 		cin >> h; //���������
 		cout << "������� ��������� �������� x= ";
 		cin >> x; //x
 		cout << "������� ��������� �������� y= ";
 		cin >> y; //y
	n=(b-a)/h;
	for (i=0;i<n;i++)
		{
			K1=h*(-x*y/(1-x*x));
      		K2=h*(-(x+h/2)*(y+K1/2))/(1-(x+h/2)*(x+h/2));
      		K3=h*(-(x+h/2)*(y+K2/2))/(1-(x+h/2)*(x+h/2));
      		K4=h*(-(x+h)*(y+K3))/(1-(x+h)*(x+h));
      		x+=h;
     		y+=(K1+2*K2+2*K3+K4)/6;
     		cout<<"�������� � ����� ��������� : \n";
			cout<<"x="<<x<<" "<<"y="<<y<<endl;		
		}
	
}
