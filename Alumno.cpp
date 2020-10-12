#include<iostream>
using namespace std;
class Alumno{
	protected : string nombres, apellidos, grado, seccion;
				int telefono;
	
	protected : 
				Alumno(string nom,string ape,string gra, string sec,int tel){
					nombres=nom;
					apellidos=ape;
					grado=gra;
					seccion=sec;
					telefono=tel;
				}
				
	void agregar();
	void mostrar();
};
