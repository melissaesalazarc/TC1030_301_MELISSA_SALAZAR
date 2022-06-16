//main.cpp

#include "Pelicula.h"
#include "Peliculas.h"
#include "Serie.h"
#include "Series.h"
#include "Video.h"
#include <iostream>

int menuPeliculas() {
  int iOpcion;

  cout << "\n ****** Películas ******"
       << "\n1. Leer Películas desde Archivo "
       << "\n2. Reporte de todas las Películas "
       << "\n3. Reporte de Películas que tienen cierta Calificación "
       << "\n4. Reporte de Películas de cierto Género "
       << "\n\n ****** Series ******"
       << "\n5. Leer Series desde Archivo "
       << "\n6. Reporte de todas las Series "
       << "\n7. Reporte de Series que tienen cierta Calificación "
       << "\n8. Reporte de Series de cierto Género "
       << "\n9. Calcular calificación de todas las Series"
       << "\n0. SALIR\nTeclea la opción:  ";

  cin >> iOpcion;
  return iOpcion;
}
// *******************************
//          AVANCE 2
// *******************************

int main() {
  // se manda llamar al constructor - default
  Peliculas peliculas{};

  // polimorfismo - {} llama al constructor
  Series series{};

  int iOpcion;
  string sGenero, sId;
  double dCal;

  // Leer el archivo de películas y cargarlo en el arreglo de apuntadores dentro
  // de la clase Peliculas
  peliculas.leerArchivo();
  series.leerArchivo();

  // 1o inicializar la vcc antes del ciclo
  iOpcion = menuPeliculas();
  // 2a incluir en la condicion la vcc
  while (iOpcion != 0) {
    switch (iOpcion) {
    //********** Películas
    case 1: //// 1. Leer Peliculas  desde Archivo" <<
      peliculas.leerArchivo();
      break;
    case 2: // 2. Reporte de todas las peliculas" <<
      peliculas.reporteTodasLasPeliculas();
      break;
    case 3: // 3. Reporte de todas las peliculas con cierta Calificacion" <<
      // cout << "Ingresa la calificacion:";
      cin >> dCal;
      peliculas.reporteConCalificacion(dCal);
      break;
    case 4: // 4. Reporte de todas las peliculas con cierto genero" <<
      // cout << "Ingresa el Genero:";
      cin >> sGenero;
      peliculas.reporteGenero(sGenero);
      break;
    case 5: // leer videos
      series.leerArchivo();
      break;
    case 6: // reporte todas las series
      series.reporteTodasLasSeries();
      break;
    case 7: // reporte series que tienen cierta calififcacion
      cout << "ingresa la calificación: ";
      cin >> dCal;
      series.reporteConCalificacion(dCal);
      break;
    case 8: // reporte de series de cierto género
      cin >> sGenero;
      series.reporteGenero(sGenero);
      break;
    case 9: // Calcular calificación de todas las Series
      series.calcularCalificacionSeries();
      break;
    default:
      // cout << "Opcion incorrecta\n";
      break;
    }

    // 3ro actualizar la vcc dentro del ciclo
    iOpcion = menuPeliculas();
  }
  return 0;
}
