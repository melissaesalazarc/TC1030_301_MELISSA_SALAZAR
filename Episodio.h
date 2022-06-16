//Episodio.h

#ifndef EPISODIO_H
#define EPISODIO_H

#include <stdio.h>
#include <string>
using namespace std;

class Episodio{

protected:
 string titulo;
 int temporada;
double calificacion;

public:
//M�todo constructor default
 Episodio();

//M�todo constructor con par�metros: titulo, temporada, calificaci�n
 Episodio(string _titulo, int _temporada, double _calificacion);


//M�TODOS MODIFICADORES (SETS)
 void setTitulo(string _titulo);//recibe el nuevo t�tulo del episodio
 void setTemporada(int _temporada);//recibe el nuevo valor para la temporada del episodio
 void setCalificacion(int _calificacion);//recibe el nuevo valor para la calificaci�n del episodio

//M�TODOS DE ACCESO(GETS)
 string getTitulo(); //retorna el titulo actual del episodio
 int getTemporada(); //retorna la temporada actual del episodio
 double getCalificacion(); //retorna la calificaci�n actual del episodio


//otros m�todos
//retorna toda la informaci�n del episodio separada por ,
 string str() const;
};

#endif /* Episodio_hpp*/
