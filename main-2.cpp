#include"carnet.cpp"
#include<iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,grado,seccion;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombre: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Grado: ";
	cin>>grado;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Carnet car = Carnet(nombres,apellidos,grado,seccion,telefono,nit);
	car.mostrar();
	
	cout<<"------------Modificar------------"<<endl;
	cout<<"Ingrese Nit: "<<endl;
	cin>>nit;
	cout<<"Ingrese Nombre: "<<endl;
	cin>>nombres;
	cout<<"Ingrese Apellidos: "<<endl;
	cin>>apellidos;
	cout<<"Ingrese Grado: "<<endl;
	cin>>grado;
	cout<<"Ingrese Seccion: "<<endl;
	cin>>seccion;
	cout<<"Ingrese Telefono: "<<endl;
	cin>>telefono;
	cout<<" "<<endl;
	cout<<"------------Mostrar------------"<<endl;
	car.setNit(nit);
	car.setNombre(nombres);
	car.setApellidos(apellidos);
	car.setGrado(grado);
	car.setSeccion(seccion);
	car.setTelefono(telefono);
	
	cout<<car.getNit()<<endl;
	cout<<car.getNombre()<<endl;
	cout<<car.getApellido()<<endl;
	cout<<car.getGrado()<<endl;
	cout<<car.getSeccion()<<endl;
	cout<<car.getTelefono()<<endl;
}
