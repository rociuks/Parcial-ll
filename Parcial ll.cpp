#include <iostream>
#include <conio.h>

using namespace std;

int funcion_sueldo(float n1, float n2);

struct Empleado{
	int *codigo_empleado;
	string *nombre;
	string *apellido;
	string *puesto;
	float *sueldo;
	float *bonificacion;
};

int main(){
	int fila_empleado=0;
	
	Empleado empleado;
		cout<<"\t\t\t\t----------- Registros de Datos ----------"<<endl;
		cout<<"Cuantos Empleados Desea Ingresar: ";
		cin>>fila_empleado;
		cout<<"\n------------------------------------\n"<<endl;
	
	empleado.codigo_empleado = new int[fila_empleado];
	empleado.nombre = new string[fila_empleado];
	empleado.apellido = new string[fila_empleado];
	empleado.puesto = new string[fila_empleado];
	empleado.sueldo = new float [fila_empleado];
	empleado.bonificacion = new float [fila_empleado];
	

string nombre;
for (int i=0;i<fila_empleado;i++){
	cout<<"Codigo: ";
	cin>>empleado.codigo_empleado[i];
	cin.ignore();
	cout<<"Nombre: ";
	getline(cin,empleado.nombre[i]);
	cout<<"Apellido: ";
	getline(cin,empleado.apellido[i]);
	cout<<"Puesto: ";
	getline(cin,empleado.puesto[i]);
	cout<<"Sueldo base: ";
	cin>>empleado.sueldo[i];
	cout<<"Bonificacion: ";
	cin>>empleado.bonificacion[i];
	cout<<"------------------------------------\n"<<endl;
};

	cout<<"\n\t\t\t\t----------- Mostrar Datos -----------\n"<<endl;
for (int i=0;i<fila_empleado;i++){
	cout<<"Codigo: "<<empleado.codigo_empleado[i]<<endl; 
	cout<<"Nombre: "<<empleado.nombre[i]<<endl;
	cout<<"Apellido: "<<empleado.codigo_empleado[i]<<endl; 
	cout<<"Puesto: "<<empleado.nombre[i]<<endl;
	cout<<"Sueldo base: "<<empleado.sueldo[i]<<endl;
	cout<<"Bonificacion: "<<empleado.bonificacion[i]<<endl;		
	cout<<"Sueldo Total: "<<funcion_sueldo(empleado.sueldo[i], empleado.bonificacion[i])<<endl;
	cout<<"------------------------------------\n"<<endl;
	cout<<endl;
	}


for (int i=0;i<fila_empleado;i++)

delete[] empleado.codigo_empleado;
delete[] empleado.nombre;
delete[] empleado.apellido;
delete[] empleado.puesto;


	system("PAUSE");
	return 0;

}

int funcion_sueldo(float n1, float n2){
	float suma=0;	
	suma = n1+n2;
	return suma;
}




