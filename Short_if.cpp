#include<iostream>
using namespace std;
main(){
	int n1=0, n2=0, n3=0, promedio=0;
	cout<<"Nota 1: "; cin>>n1;
	cout<<"Nota 2: "; cin>>n2;
	cout<<"Nota 3: "; cin>>n3;
	promedio = (n1+n2+n3) / 3;
	cout<<"Este es el promedio: "<<promedio<<endl;
	
    string mensaje="";
    mensaje = promedio >= 61?" Aprobado" : "Reprobado";
    cout<<"Usted esta: "<<mensaje<<endl;
	
system("pause");	
	
}