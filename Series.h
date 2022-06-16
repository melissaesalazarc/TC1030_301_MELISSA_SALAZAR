//Series.h

#ifndef SERIES_H
#define SERIES_H

#include <stdio.h>
#include "Serie.h"

const int MAX_SERIES = 50;

class Series{
 private:
// Arreglo de apuntadores de la calse Serie
   Serie *arrPtrSeries[MAX_SERIES];

// cantidadde Series dadas de alta en el arrPtrSeries, inicialmente es 0
   int cantidad;

 public:
// constructor que inicializa el *arrPtrSeries[MAX_SERIES] con nullptr y el atributo cantidad 0
   Series();
   Series(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);


   //otros métodos

// lee las Series desde un archivo csv y ls cargas en el arreglo arrPtrSeries
   void leerArchivo();

// Reporte de todas las Series que están en el arreglo arrPtrSeries
// Despliega todas las series contenidad en el arreglo - usa str()
   void reporteTodasLasSeries();

//Reporte de todas Series del arreglo arrPtrSeries que tienen cierta calificación
//Despliega todas las series cuya calificacionPromedio sea iguala la recibida en el parámetro de entrada _calificacion -- usa str() para desplegar la info de la Serie
   void reporteConCalificacion(double _calificacion);

// Reporte de Series del arreglo arrPtrSeries que tienen cierto genero
//Despliega todas las series cuyo atributo genero sea igual al recibifo en el parámetro de entrada _genero - - usa str() para deslpegar la info de la Seire
   void reporteGenero(string _genero);

// Calcular la calificacion de cada serie en base a sus episodios
// manda llamar al método calculaCalPromedio de la clase Serie para que se calcule la calificación promedio de la Serie
   void calcularCalificacionSeries();

  //MÉTODOS DE ACCESO (gets)

// Retorna un apuntador Serie que tiene el iD igual al _iD recibido en el parámetro de entrada, si no existe ese _iD retorna nullPtr
   Serie* getPtrSerie(string _iD);

// Retorna el valor del atributo cantidad
   int getCantidadSeries();

   //MÉTODOS MODIFICADORES (SETS)

// se asigna ese apuntador al arrPtrSeries[cantidad] en la posición actual
// actualmente el atributo cantidad
   void setPtrSerie(Serie *_ptrSerie);

// Asigna al atributo cantidad el valor de _cantidad
   void setCantidadSeries(int _cantidad);


};
#endif
