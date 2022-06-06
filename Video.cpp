#include "Video.hpp"

//iniciar los atributos de la clase
 Video::Video(){
   iD = "000";
   titulo = "La Botella";
   duracion = 90;
   genero = "Terror";
   calificacionPromedio = 5.0;
 }

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
   iD = _iD;
   titulo = _titulo;
   duracion = _duracion;
   genero = _genero;
   calificacionPromedio = _calificacionPromedio;
}

//Métodos modificadores (sets)
void Video::setId(string _iD){
  iD = _iD;
}
void Video::setTitulo(string _titulo){
  titulo = _titulo;
}
void Video::setDuracion(int _duracion){
  duracion = _duracion;
}
void Video::setGenero(string _genero){
  genero = _genero;
}
void Video::setCalificacion(double _calificacionPromedio){
  calificacionPromedio = _calificacionPromedio;
}

//Métodos de acceso(gets)
string Video::getId(){
     return iD;
   }
string Video::getTitulo(){
     return titulo;
   }
int Video::getDuracion(){
     return duracion;
   }
string Video::getGenero(){
   return genero;
   }
double Video::getCalificacion(){
   return calificacionPromedio;
   }

//otros métodos
   string Video::str(){ 
     return (iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio));
   }