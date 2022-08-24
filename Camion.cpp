/*
  Archivo: Camion.cpp
  Autor:
	Mayra Alejandra Sánchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co> 
	Brayan Stiven Sánchez León <brayan.sanchez.leon@correounivalle.edu.co >
  Fecha creación: 2021-02-26
  Fecha última modificación: 2021-03-09
  Licencia: 
*/

#include"Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
/**Definimos cuales atributos le corresponden a los parametros ingresados en los camiones que se crean */
{
	this->placa = laPlaca; 
	this->capacidadMaxima = laCapacidadMaxima; 
	this->pesoTotalCamion = 0;
}

Camion::~Camion()
{
	// No hay que hacer nada
}

int Camion::hacerMudanza() 
/**Retorna el valor final de pesoTotalCamion*/
{  
	return	pesoTotalCamion; 
} 

string Camion::cualEsLaPlaca() 
/**Retorna la placa*/
{ 
	return	placa; 
}

bool Camion::cargarUnObjeto(int pesoDelObjeto)
/**La funcion se encarga de comparar la suma de los pesos de los objetos y la capacidad maxima para saber cuando se llenan los camiones*/
{
  if(pesoTotalCamion + pesoDelObjeto <= capacidadMaxima)
  {
    pesoTotalCamion = pesoTotalCamion + pesoDelObjeto;
	  return	true;
  }
  else
  {
    return	false;      
  }
}




