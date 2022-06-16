//main.cpp

#include "Pelicula.h"
#include "Peliculas.h"
#include "Serie.h"
#include "Series.h"
#include "Video.h"
#include <iostream>

int menuPeliculas() {
  int iOpcion;

  cout << "\n ****** Pel�culas ******"
       << "\n1. Leer Pel�culas desde Archivo "
       << "\n2. Reporte de todas las Pel�culas "
       << "\n3. Reporte de Pel�culas que tienen cierta Calificaci�n "
       << "\n4. Reporte de Pel�culas de cierto G�nero "
       << "\n\n ****** Series ******"
       << "\n5. Leer Series desde Archivo "
       << "\n6. Reporte de todas las Series "
       << "\n7. Reporte de Series que tienen cierta Calificaci�n "
       << "\n8. Reporte de Series de cierto G�nero "
       << "\n9. Calcular calificaci�n de todas las Series"
       << "\n0. SALIR\nTeclea la opci�n:  ";

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

  // Leer el archivo de pel�culas y cargarlo en el arreglo de apuntadores dentro
  // de la clase Peliculas
  peliculas.leerArchivo();
  series.leerArchivo();

  // 1o inicializar la vcc antes del ciclo
  iOpcion = menuPeliculas();
  // 2a incluir en la condicion la vcc
  while (iOpcion != 0) {
    switch (iOpcion) {
    //********** Pel�culas
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
      cout << "ingresa la calificaci�n: ";
      cin >> dCal;
      series.reporteConCalificacion(dCal);
      break;
    case 8: // reporte de series de cierto g�nero
      cin >> sGenero;
      series.reporteGenero(sGenero);
      break;
    case 9: // Calcular calificaci�n de todas las Series
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
