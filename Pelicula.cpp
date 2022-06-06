//Pelicula.cpp
 #include "Pelicula.hpp"

Pelicula::Pelicula(): Video(){
  oscares = 0; //iOscares = 0;
}

//método constructor con parámetros
Pelicula::Pelicula(string _id, string _titulo, int _duracion, string _genero, double _calificacion,int _oscares) :Video(_id, _titulo, _duracion, _genero, _calificacion){
  oscares = _oscares;
}
//***

// Destructor No lleva código
Pelicula::~Pelicula() {
  cout << "se destruyó un objeto película:\n ";
  
}

//Métodos modificadores (sets)
void Pelicula::setOscares(int _oscares){
  oscares = _oscares;
  //actualiza la calificaci´n 0.5 calificacion
  //Private :
  //setCalificacion(oscares*0.5);
  //Protected : tenemos acceso diresto a el atributo
  calificacionPromedio = oscares * 0.5;
}

//Métodos de acceso(gets)
int Pelicula::getOscares(){
  return oscares;
}

//otros métodos
string Pelicula::str(){
  return to_string(oscares);
}
