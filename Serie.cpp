//Serie.cpp

#include "Serie.hpp"

//ver video
Serie::Serie():Video(){
cantidad = 0;

}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificaionPromedio):Video(_iD,_titulo,_duracion,_genero,0){
  cantidad = 0;
}

//Métodos modificadores SETS
void Serie::setEpisodio(int _index, Episodio _episodio)//index ver video 945
{
  //validar que el _index sea correcto  si no cumple el _index no se cambia 
 if (cantidad>=0 && _index < cantidad){
   episodios[_index] = _episodio;
 }
}

void Serie::setCantidad(int _cantidad){
  cantidad = _cantidad;
}

//métodos de acceso GETS
Episodio Serie::getEpisodio(int _index){
  Episodio ep;
  //validar que el _index sea correcto (cantidad>=0) && (_index < cantidad) si no cumple el _index no se cambia
  
  if (cantidad>=0 &&  _index < cantidad){
   return episodios[_index];
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
  for(int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].getCalificacion();

  if (cantidad > 0)
    return acum / cantidad;
  else
    return 0;
    
}
string Serie::str(){
  // 1° concatenar todos los episodios de la serie
  string acum = "";
  for(int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].str() + '\n';
    
  return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acum;
}