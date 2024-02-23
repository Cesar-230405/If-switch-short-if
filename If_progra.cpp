#include<iostream>
using namespace std;
int main(){
	//numero positivo>0 y negativo<0
	int num = 0, nume = 0 ;
	string pais = "";
	cout<<"Ingrese un numero: "; cin>>num;
	
	if (num<0){
		cout<<"Este numero es negativo"<<endl;
	}
	else if (num>0){
		cout<<"Este numero es positivo"<<endl;
	}
	else{
		cout<<"Numero neutro"<<endl;
	}
	
//--------------------------------------------------------------------	
	cout<<"Ingrese pais: ";
	cin>>pais;
	
	if(pais=="Guatemala"){
		cout<<"Yo soy de "<<pais<<" mi pais"<<endl;
	}
	else{
		cout<<pais<<endl;
	}
//---------------------------------------------------------------------
    cout<<"Ingrese numero: ";
	cin>>nume;	
	if((nume%2) == 0){
		cout<<" par"<<endl;
	}
	else{
		cout<<"impar"<<endl;
	}
	system("pause");
}