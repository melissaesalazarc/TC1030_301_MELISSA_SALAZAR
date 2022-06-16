//Video.h

#ifndef VIDEO_H
#define VIDEO_H

#include <stdio.h>
#include <iostream>
using namespace std;

class Video{
//Atributos de la clase
protected:
   string iD;
   string titulo;
   int duracion;
   string genero;
   double calificacionPromedio;
//M�todos

public:

//constructores
   Video();
   Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

//M�todos modificadores (sets)
   void setId(string _iD);
   void setTitulo(string _titulo);
   void setDuracion(int _duracion);
   void setGenero(string _genero);
   void setCalificacion(double _calificacionPromedio);

//M�todos de acceso(gets)
   string getId();
   string getTitulo();
   int getDuracion();
   string getGenero();
   double getCalificacion();

//otros m�todos
   virtual string str();

};

#endif /*Video_h*/
