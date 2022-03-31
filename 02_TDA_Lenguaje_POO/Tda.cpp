#include <iostream>
using namespace std;

#define TAM 15

struct persona{
        char Nombre[TAM];
        char Apellido_1[TAM];
	char Apellido_2[TAM];
        int Edad;
        char Genero[TAM];
        char Accion_1[TAM];
	char Accion_2[TAM];
	char Accion_3[TAM];
        char Accion_4[TAM];

};

int main(){
    persona p,a;

        cout <<"Escriba el Nombre: ";
        cin >> p.Nombre;

        cout <<"Escriba los Apellidos: ";
        cin >> p.Apellido_1>>p.Apellido_2;

        cout <<"Escriba la Edad: ";
        cin >> p.Edad;

        cout <<"Escriba el Genero: ";
        cin >> p.Genero;

	cout<<"\nAcciones: Escriba las acciones en presente"<<endl;
	cout <<"Accion 1: ";
        cin >> a.Accion_1;

	cout <<"Accion 2: ";
        cin >> a.Accion_2;

	cout <<"Accion 3: ";
        cin >> a.Accion_3;

	cout <<"Accion 4: ";
        cin >> a.Accion_4;

	// impresion de los datos
	cout<<"\n\t********Persona********\n";

        cout<<"\nNombre: "<<p.Nombre<<" "<<p.Apellido_1<<" "<<p.Apellido_2;
        if(p.Edad<=9){
	cout<<"\nEdad: "<<p.Edad<<" año";
        }else if(p.Edad>=10){
	cout<<"\nEdad: "<<p.Edad<<" años";
	}
	cout<<"\nGenero: "<<p.Genero;
	cout<<"\n"<<p.Nombre<<" esta "<<a.Accion_1;
        cout<<"\n"<<p.Nombre<<" esta "<<a.Accion_2;
        cout<<"\n"<<p.Nombre<<" esta "<<a.Accion_3;
        cout<<"\n"<<p.Nombre<<" esta "<<a.Accion_4;

return 0;
}

