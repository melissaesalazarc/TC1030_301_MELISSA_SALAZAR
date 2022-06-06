//Pelicula.hpp
#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include <string>
#include "Video.hpp"

class Pelicula: public Video{
//atributos de la clase
protected:
 int oscares;

 //Métodos
public:

//constructores
 Pelicula();
 Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio,int _oscares);
 ~Pelicula();


//Métodos modificadores (sets)
 void setOscares(int _oscares);

//Métodos de acceso(gets)
 int getOscares();

//otros métodos
 string str();

};

#endif /* Pelicula_hpp*/