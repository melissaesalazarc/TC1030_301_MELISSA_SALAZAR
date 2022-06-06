#include <iostream>
#include "Video.hpp"
#include "Serie.hpp"
#include "Pelicula.hpp"
#include "Peliculas.hpp"

int menuPeliculas(){
  int iOpcion;
  
    cout <<
    "\n ** Películas " <<
    "\n1. Leer Películas desde Archivo " <<
    "\n2. Reporte de todas las Películas " <<
    "\n3. Reporte de Películas que tienen cierta Calificación " <<
    "\n4. Reporte de Películas de cierto Género " <<
    "\n0. SALIR\nTeclea la opción:  " ;
  
  cin >> iOpcion;
  return iOpcion;
}
// *******************************
//          AVANCE 2
// *******************************

int main() {
  //se manda llamar al constructor - default
  Peliculas peliculas{};

  int iOpcion;
  string sGenero, sId;
  double dCal;

  //Leer el archivo de películas y cargarlo en el arreglo de apuntadores dentro de la clase Peliculas
  peliculas.leerArchivo();

  //1o inicializar la vcc antes del ciclo
  iOpcion = menuPeliculas();
  //2a incluir en la condicion la vcc
  while (iOpcion !=0){
    switch(iOpcion){
      //********** Películas
      case 1: //// 1. Leer Peliculas  desde Archivo" <<
       peliculas.leerArchivo();
       break;
      case 2: // 2. Reporte de todas las peliculas" <<
       peliculas.reporteTodasLasPeliculas();
       break;
      case 3: // 3. Reporte de todas las peliculas con cierta Calificacion" <<
       //cout << "Ingresa la calificacion:";
       cin >> dCal;
       peliculas.reporteConCalificacion(dCal);
       break;
      case 4: // 4. Reporte de todas las peliculas con cierto genero" <<
       //cout << "Ingresa el Genero:";
       cin >> sGenero;
       peliculas.reporteGenero(sGenero);
       break;
      default:
       //cout << "Opcion incorrecta\n";
       break;
      
    }

    //3ro actualizar la vcc dentro del ciclo
    iOpcion = menuPeliculas();
    
  }
  return 0;

}