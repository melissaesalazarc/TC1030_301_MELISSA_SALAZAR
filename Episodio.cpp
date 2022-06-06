//Episodio.cpp

#include "Episodio.hpp"

Episodio::Episodio(){
  titulo = "Episodio Sin Titulo";
  temporada = 0;
  calificacion = 0;
}

//Método constructor con parámetros: titulo, temporada, calificacion
//episodio(string,int,double)
Episodio::Episodio(string _titulo, int _temporada, double _calificacion)
{
  titulo = _titulo;
  temporada = _temporada;
  calificacion = _calificacion;
}

//MÉTODOS MODIFICADORES (SETS)
void Episodio::setTitulo(string _titulo){//recibe el nuevo título del episodio
  titulo = _titulo;
}

 void Episodio::setTemporada(int _temporada){//recibe el nuevo valor para la temporada del episodio
   temporada = _temporada;
 }

 void Episodio::setCalificacion(int _calificacion){//recibe el nuevo valor para la calificación del episodio
   calificacion = _calificacion;
 }


//MÉTODOS DE ACCESO(GETS)
 string Episodio::getTitulo(){ //retorna el titulo actual del episodio
   return titulo;
 }

 int Episodio::getTemporada(){//retorna la temporada actual del episodio
   return temporada;
 } 

 int Episodio::getCalificacion(){//retorna la calificación actual del episodio
   return calificacion;
 } 

//otros métodos
//retorna toda la información del episodio separada por ,
 string Episodio::str(){
   return(titulo + ',' + to_string(temporada) + ',' + to_string(calificacion));
 }