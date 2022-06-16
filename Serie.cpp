//Serie.cpp

#include "Serie.h"

//ver video
Serie::Serie():Video(){
cantidad = 0;
}


Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _cantidad):Video(_iD, _titulo, _duracion, _genero, 0){
  cantidad = 0;
}


// Destructor No lleva código
Serie::~Serie() {
  cout << "se destruyó un objeto Serie:\n ";
}


//Métodos modificadores SETS
void Serie::setEpisodio(int _iEp, Episodio _episodio)
{
  //validar que el _index sea correcto  si no cumple el _index no se cambia
 if (cantidad>=0 && _iEp < cantidad){
   episodios[_iEp] = _episodio;
 }
}


void Serie::setCantidad(int _cantidad){
  cantidad = _cantidad;
}


//métodos de acceso GETS
Episodio Serie::getEpisodio(int _iEp){
  Episodio ep;
  //validar que el _index sea correcto (cantidad>=0) && (_index < cantidad) si no cumple el _index no se cambia
  if (cantidad>=0 &&  _iEp < cantidad){
   return episodios[_iEp];
  }
  else
   return Episodio();
}


int Serie::getCantidad(){
  return cantidad;
}


//otros métodos
double Serie::calculaCalPromedio(){
  double acum = 0;
  for(int iEp = 0; iEp < cantidad; iEp++)
    acum = acum + episodios[iEp].getCalificacion();
  if (cantidad > 0)
    return acum / cantidad;
   else
     return 0;


}


string Serie::str(){
  // 1° concatenar todos los episodios de la serie
  string acum = "\n";
  for(int iEp = 0; iEp < cantidad; iEp++)
    acum = acum + episodios[iEp].str() + '\n';
  return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acum;
}


ostream & operator<<(ostream &out, const Serie &s){
  string acum = "\n";
  for(int index = 0; index < s.cantidad ; index++){
    acum = acum + to_string(index) + '-' + s.episodios[index].str() + '\n';
  }
  out << s.iD << s.titulo << ',' << s.duracion << ',' << s.genero << ',' << s.calificacionPromedio << ',' << acum ;
  return out;
}

