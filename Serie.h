//Serie.h

#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include "Video.h"
#include "Episodio.h"

//Serie es una clase derivada de Video
class Serie: public Video {
private:

//Para esta versi�n - cada serie tiene como m�ximo 5 episodios, puede tener menos
 Episodio episodios[5];

//cantidad de episodios de la serie
 int cantidad;

public:

//M�todo constructor default
 Serie();

//m�todo constructor con par�metros-inicializa todos los par�metros excepto episodios
 Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad);

//destructoe de un objeto de la clase Serie
~Serie();

//M�todos modificadores SETS

//Asigna el Episodio _episodio en la posici�n iEp del arreglo de episodios
 void setEpisodio(int iEp, Episodio _episodio);

//Asigna al atributo cantidad el valor recibido como par�metro
//validad de que sea un valor entre 0..5
 void setCantidad(int _cantidad);


//m�todos de acceso GETS

//retorna el Episodio que esta en la posici�n iEp del arreglo de episodios
 Episodio getEpisodio(int _iEp);

//retora el valor actual del atributo cantidad
 int getCantidad();


//otros m�todos

// calcula el promedio de todos los episodios de la serie
// en base a las calificaciones de sus episodios
// y lo asigna al atributo calificacionPromedio
 double calculaCalPromedio();

 string str();

 friend ostream &operator<<(ostream &out, const Serie &s);
};

#endif /* Serie_hpp*/
