// Peliculas.hpp
#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
//composición con Película
#include "Pelicula.hpp"
//#include "Video.hpp"

const int MAX_PEL = 50;

class Peliculas{
 private:
   Pelicula *arrPtrPeliculas[MAX_PEL];
   int cantidad;

 public:
   Peliculas();
   Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
 

   //otros métodos
   void leerArchivo();
   void reporteTodasLasPeliculas();
   void reporteConCalificacion(double _calificacion);
   void reporteGenero(string _genero);

  //Métodos de acceso(gets)
   Pelicula* getPtrPelicula(string _iD);
   int getCantidadPeliculas();

   //métodos modificadores(SETS)
   void setPtrPelicula(Pelicula *_ptrPelicula);
   void setCantidadPeliculas(int _cantidad);
  

};

#endif /* Peliculas_hpp*/