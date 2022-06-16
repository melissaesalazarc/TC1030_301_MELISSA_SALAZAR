//Pelicula.hpp

#ifndef PELICULA_H
#define PELICULA_H


#include <stdio.h>
#include <string>
#include "Video.h"

class Pelicula: public Video{
//atributos de la clase
protected:
 int oscares;


 //M�todos
public:
//constructores
 Pelicula();
 Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacionPromedio,int _oscares);
 ~Pelicula();


//M�todos modificadores (sets)
 void setOscares(int _oscares);
//M�todos de acceso(gets)
 int getOscares();
//otros m�todos
 string str();
 friend ostream & operator <<(ostream &out, const Pelicula &p);//la v se puede cambiar a lo que querramos
};
#endif /* Pelicula_h*/
