#include "Alumno.cpp"
#include<iostream>
using namespace std;
class Carnet:Alumno{
	
	private : string nit;
	public :
			Carnet(string nom,string ape,string gra,string sec,int tel,string a):Alumno(nom,ape,gra,sec,tel){
				nit=a;
			}
			
	void setNit(string a){nit=a;}
	void setNombre(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setGrado(string gra){grado=gra;}
	void setSeccion(string sec){seccion=sec;}
	void setTelefono(int tel){telefono=tel;}
		
		string getNit(){return nit;}
		string getNombre(){return nombres;}
		string getApellido(){return apellidos;}
		string getGrado(){return grado;}
		string getSeccion(){return seccion;}
		int getTelefono(){return telefono;}
		
	void mostrar(){
	cout<<"-----------------------------------------------"<<endl;
	cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<grado<<", "<<seccion<<", "<<telefono<<endl;
	}
};
