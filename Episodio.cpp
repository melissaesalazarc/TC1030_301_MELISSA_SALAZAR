#include "Episodio.h"

//Episodio.cpp

Episodio::Episodio(){
  titulo = "Episodio Sin Titulo";
  temporada = 0;
  calificacion = 0;
}

//M�todo constructor con par�metros: titulo, temporada, calificacion
//episodio(string,int,double)
Episodio::Episodio(string _titulo, int _temporada, double _calificacion)
{
  titulo = _titulo;
  temporada = _temporada;
  calificacion = _calificacion;
}

//M�TODOS MODIFICADORES (SETS)
void Episodio::setTitulo(string _titulo){//recibe el nuevo t�tulo del episodio
  titulo = _titulo;
}

 void Episodio::setTemporada(int _temporada){//recibe el nuevo valor para la temporada del episodio
   temporada = _temporada;
 }

 void Episodio::setCalificacion(int _calificacion){//recibe el nuevo valor para la calificaci�n del episodio
   calificacion = _calificacion;
 }


//M�TODOS DE ACCESO(GETS)
 string Episodio::getTitulo(){ //retorna el titulo actual del episodio
   return titulo;
 }

 int Episodio::getTemporada(){//retorna la temporada actual del episodio
   return temporada;
 }

 double Episodio::getCalificacion(){//retorna la calificaci�n actual del episodio
   return calificacion;
 }

//otros m�todos
//retorna toda la informaci�n del episodio separada por ,
 string Episodio::str() const{
   return(titulo + ',' + to_string(temporada) + ',' + to_string(calificacion));
 }
