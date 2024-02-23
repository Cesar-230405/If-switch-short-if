#include<iostream>
using namespace std;
main(){
// and (y) &&
// or (o) ||

//Puede entrar a mi clase si trae lapiz y lapicero
char lapiz, lapicero;
cout<< " Trae lapiz (s/n): "<<endl;
cin>>lapiz;
cout<< " Trae lapicero (s/n): "<<endl;
cin>>lapicero;

if(lapiz == 's' && lapicero == 's'||lapiz == 'n' && lapicero == 's'){
	cout<<"\nEntra a clase"<<endl;
}
else{
	cout<<"Lo siento no puede ingresar"<<endl;
}

//switch

int codigo=0;
cout<<"Ingrese codigo de area: ";
cin>>codigo;
switch(codigo){
	case 502 : 
	      cout<<"Guatemala"<<endl;
	    break;
	case 503 :
	      cout<<"El Salvador"<<endl;
	    break;
	case 504 :
	      cout<<"Honduras"<<endl;
	    break;
	case 505 :
	      cout<<"Nicaragua"<<endl;
	    break;
	case 506 :
	      cout<<"Costa Rica"<<endl;
	    break;
	case 507 :
	      cout<<"Panama"<<endl;
	    break;
	default :
		  cout<<"Este codigo no existe"<<endl;
}




}