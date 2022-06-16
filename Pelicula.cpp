//Pelicula.cpp

#include "Pelicula.h"

Pelicula::Pelicula(): Video(){
  oscares = 0; //iOscares = 0;
}


//m�todo constructor con par�metros
Pelicula::Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacion,int _oscares) :Video(_id, _titulo, _duracion, _genero, _calificacion){
  oscares = _oscares;
}


// Destructor No lleva c�digo
Pelicula::~Pelicula() {
  cout << "se destruy� un objeto pel�cula:\n ";
}


//M�todos modificadores (sets)
void Pelicula::setOscares(int _oscares){
  oscares = _oscares;
  //actualiza la calificaci�n 0.5 calificacion
  //Private :
  //setCalificacion(oscares*0.5);
  //Protected : tenemos acceso diresto a el atributo
  calificacionPromedio = oscares * 0.5;
}

//M�todos de acceso(gets)
int Pelicula::getOscares(){
  return oscares;
}

//Retorna un string con la informaci�n de la pel�cula
string Pelicula::str(){
  return Video::str() + ',' + to_string(oscares);
}


ostream & operator <<(ostream &out, const Pelicula &p){
  out << p.iD << ',' << p.titulo << ',' << p.duracion <<',' <<p.genero << ',' << p.calificacionPromedio << ',' << p.oscares << endl;
  return out;
}

