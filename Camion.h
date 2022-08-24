/*
  Archivo: Camion.h
  Autor: 
	Mayra Alejandra Sánchez Salinas <mayra.alejandra.sanchez@correounivalle.edu.co>
  Brayan Stiven Sánchez León <brayan.sanchez.leon@correounivalle.edu.co >
	Fecha creación: 2021-02-26
  Fecha última modificación: 2021-03-09
  Licencia: 
*/

/*
  CLASE: Camion
  INTENCIÓN: quiero guardar la placa, la capacidad maxima y el peso total de un camion
  
  RELACIONES: ninguna
*/

#ifndef CAMION_H
#define CAMION_H

#include<string>
using namespace std;

class Camion
{
  private:
  	string	placa;
  	int	capacidadMaxima;
  	int	pesoTotalCamion;
    
  public:
  /**
  Constructor. Da valores iniciales a los atributos internos
  */
  Camion(string laPlaca, int laCapacidadMaxima);
  /**
  Destructor. No hace nada
  */
  virtual ~Camion();
  /**
  Pregunta y retorna si es un camion u otro
  */
  virtual	string	cualEsLaPlaca(); 
  /**
  Pregunta y retorna la placa del Camion
  */
  virtual	bool	cargarUnObjeto(int pesoDelObjeto);
	/**
	Carga un objeto depediendo de su peso
	*/
	virtual	int	hacerMudanza(); 
};


#else
class Camion; // Declaración adelantada
#endif