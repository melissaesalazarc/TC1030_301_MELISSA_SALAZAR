//Pelicula.cpp
 #include "Pelicula.hpp"

Pelicula::Pelicula(){
  oscares = 0;
}

Pelicula::Pelicula(int _oscares){
  oscares = _oscares;
}

//Métodos modificadores (sets)
void Pelicula::setOscares(int _oscares){
  oscares = _oscares;
}

//Métodos de acceso(gets)
int Pelicula::getOscares(){
  return oscares;
}

//otros métodos
string Pelicula::str(){
  return to_string(oscares);
}
