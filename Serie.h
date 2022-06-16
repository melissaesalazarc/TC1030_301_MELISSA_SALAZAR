//Serie.h

#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include "Video.h"
#include "Episodio.h"

//Serie es una clase derivada de Video
class Serie: public Video {
private:

//Para esta versión - cada serie tiene como máximo 5 episodios, puede tener menos
 Episodio episodios[5];

//cantidad de episodios de la serie
 int cantidad;

public:

//Método constructor default
 Serie();

//método constructor con parámetros-inicializa todos los parámetros excepto episodios
 Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad);

//destructoe de un objeto de la clase Serie
~Serie();

//Métodos modificadores SETS

//Asigna el Episodio _episodio en la posición iEp del arreglo de episodios
 void setEpisodio(int iEp, Episodio _episodio);

//Asigna al atributo cantidad el valor recibido como parámetro
//validad de que sea un valor entre 0..5
 void setCantidad(int _cantidad);


//métodos de acceso GETS

//retorna el Episodio que esta en la posición iEp del arreglo de episodios
 Episodio getEpisodio(int _iEp);

//retora el valor actual del atributo cantidad
 int getCantidad();


//otros métodos

// calcula el promedio de todos los episodios de la serie
// en base a las calificaciones de sus episodios
// y lo asigna al atributo calificacionPromedio
 double calculaCalPromedio();

 string str();

 friend ostream &operator<<(ostream &out, const Serie &s);
};

#endif /* Serie_hpp*/
