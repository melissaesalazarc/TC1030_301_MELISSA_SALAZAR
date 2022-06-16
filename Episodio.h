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
//Método constructor default
 Episodio();

//Método constructor con parámetros: titulo, temporada, calificación
 Episodio(string _titulo, int _temporada, double _calificacion);


//MÉTODOS MODIFICADORES (SETS)
 void setTitulo(string _titulo);//recibe el nuevo título del episodio
 void setTemporada(int _temporada);//recibe el nuevo valor para la temporada del episodio
 void setCalificacion(int _calificacion);//recibe el nuevo valor para la calificación del episodio

//MÉTODOS DE ACCESO(GETS)
 string getTitulo(); //retorna el titulo actual del episodio
 int getTemporada(); //retorna la temporada actual del episodio
 double getCalificacion(); //retorna la calificación actual del episodio


//otros métodos
//retorna toda la información del episodio separada por ,
 string str() const;
};

#endif /* Episodio_hpp*/
