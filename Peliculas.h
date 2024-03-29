//Peliculas.h

#ifndef PELICULAS_H
#define PELICULAS_H


#include <stdio.h>
//composici�n con Pel�cula
#include "Pelicula.h"
//#include "Video.hpp"


const int MAX_PEL = 50;


class Peliculas{
 private:
   Pelicula *arrPtrPeliculas[MAX_PEL];
   int cantidad;

 public:
   Peliculas();
   Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);


   //otros m�todos
   void leerArchivo();
   void reporteTodasLasPeliculas();
   void reporteConCalificacion(double _calificacion);
   void reporteGenero(string _genero);


  //M�todos de acceso(gets)
   Pelicula* getPtrPelicula(string _iD);
   int getCantidadPeliculas();


   //m�todos modificadores(SETS)
   void setPtrPelicula(Pelicula *_ptrPelicula);
   void setCantidadPeliculas(int _cantidad);

};
#endif /* Peliculas_hpp*/

