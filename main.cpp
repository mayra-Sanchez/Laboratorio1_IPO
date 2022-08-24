/*
  Archivo: main.cpp
  Autor: 
	Mayra Alejandra Sánchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Brayan Stiven Sánchez León <brayan.sanchez.leon@correounivalle.edu.co >
	Fecha creación: 2021-02-26
  Fecha última modificación: 2021-03-09
  Licencia: 
*/

/*
  Utilidad para la asignatura: Crear nuevos tipos de datos (clases) y datos (objetos)

  Historia: Se trata de una mudanza en la cual hay un camion que transporta los objetos que tienen distintos pesos.

	El camión tiene un número de placa y una capacidad máxima. Si se supera esa capacidad, me avisará, para que el objeto que intento subir lo guarde en el otro camión
*/

#include "Camion.h"

#include <iostream>
using namespace std;

int main()
{
  Camion	unCamion("ABC-001", 10000);
  Camion	otroCamion("DEF-002", 5000);
	
  string	laPlaca;
  int	laCapacidadMaxima;

  int objetos[8] = 
  { 
  	1000, 3000, 5000, 2000, 500, 1800, 4000, 30
  };

  for(int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
  {
    int objetoATransportar = objetos[cualObjeto];
    if(not unCamion.cargarUnObjeto(objetoATransportar))
			if(not otroCamion.cargarUnObjeto(objetoATransportar))
      	cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
  }
  
	cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;
	
	cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;
	
  return 0;
}