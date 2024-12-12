#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
	int n1,maria;
	cout<<"ingrese el numero limite";
	cin>>maria
	srand(time(NULL));//innovar la semilla basada en el reloj
	n1=1+rand()%5;
	cout<<"el numero generado foe:"<<n1;
}
