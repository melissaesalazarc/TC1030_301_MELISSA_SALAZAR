//Pelicula.hpp
#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include "Video.hpp"

class Pelicula{
//atributos de la clase
protected:
 int oscares;

 //Métodos
public:

//constructores
 Pelicula();
 Pelicula(int _oscares);

//Métodos modificadores (sets)
 void setOscares(int _oscares);

//Métodos de acceso(gets)
 int getOscares();

//otros métodos
 string str();

};

#endif /* Pelicula_hpp*/