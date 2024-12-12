#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
	int n1,n2,n3,resultado;
	srand(time(NULL));
	n1=rand()%5;
	cout<<"el resultado es:"<<n1<<endl;
	do
	{
		cout<<"adivina el numero aleatorio";
		cin>>resultado;
		if(resultado=n1)
		{
			cout<<"adivinastes el numero \n";
			cout<<"deseas intentar de nuevo \n";
			cout<<"ingrese 5 para intentar otro numero aleatorio";
			cin>>n3;
		}
		else
		{
			cout<<"intentar de nuevo \n";
			cout<<"ingresar 5 \n";
			cin>>n3;	
		}
	}
	while(n1==5);
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
}
