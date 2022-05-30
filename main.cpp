#include <iostream>
#include "Video.hpp"
#include "Serie.hpp"
#include "Pelicula.hpp"

int main() {
  //declaracion de un video default
  Video lunes;
  //decalracion de un video con parámetros
  Video martes{"001", "No sé", 100, "Comedia", 100};

  Serie reina{"002", "la reina", 300, "drama",0};
  Episodio episodio1{"coronacion",1,10};

  reina.setEpisodio(0,episodio1);
  reina.setCantidad(reina.getCantidad());
  reina.setEpisodio(1,episodio1);
  reina.setCantidad(reina.getCantidad());
  cout << reina.str() << endl;

  
  //desplegar el video
   cout << lunes.str( )<< endl;
   cout << martes.str() <<endl;
 
  return 0;
}