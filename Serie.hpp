//Serie.hpp

#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>
#include "Video.hpp"
#include "Episodio.hpp"


class Serie: public Video {
private:
 Episodio episodios[5];
//cantidad de episodios de la serie
 int cantidad;

public:
 Serie();
 Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificaionPromedio);

//Métodos modificadores SETS
 void setEpisodio(int _index, 
 Episodio _episodio);
 void setCantidad(int _cantidad);

//métodos de acceso GETS
 Episodio getEpisodio(int _index);
 int getCantidad();

//otros métodos
 double calculaCalPromedio();
 string str();

};

#endif /* Serie_hpp*/
