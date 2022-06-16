//Series.cpp

#include "Series.h"

#include <fstream>
#include <sstream>

Series::Series() {}

  // Series::Series(string _iD, string _titulo, int _duracion, string _genero,
  // double _calificacionPromedio){}

  // Leer todas series y sus episodios desde un archivo
void Series::leerArchivo() {

    // Decalración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];

    // variable para levar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};

    // declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;

    // *******************LEER LAS SERIES******************

    lectura.open("C:\\Users\\USER\\Documents\\prog\\proyecto poo\\proyectopooBUENO\\Serie2021.csv", ios::in);
    // inicializar el atributo cantidad con 0
    cantidad = 0;

    // lee una línea del archivo y la almacena en line
    while (getline(lectura, linea)) {
      std::stringstream registro(linea);
      iRow = 0;

      // Cicilo para separar los elementos de la serie (string)
      while (getline(registro, dato,
                     ',')) { // separamos los elemntos de la serie leída
        cout << dato << endl;
        row[iRow++] = dato;
      }
      // crear un objeto de la clase Serie, new retorna un pointer
      arrPtrSeries[cantidad] =
          new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), 0);

      // vamos por la siguiente serie del archivo, se incrementa para la
      // siguiente
      cantidad++;
    }
    lectura.close();


    //******************************LEER LOS EPISODIOS DE LAS SERIES***************************

    lectura.open("C:\\Users\\USER\\Documents\\prog\\proyecto poo\\proyectopooBUENO\\Episodio2021.csv", ios::in);

    // ciclo para leer todo el archivo
    while (getline(lectura, linea)) {
      std::stringstream registro(linea);
      iRow = 0;

      while (getline(
          registro, dato,
          ',')) // separar los datos del espisodio desde la linea de registro
      {
        row[iRow++] = dato;
      } // al salir de aqui ya se separó toda la línea

      // i D - converit int - sacar la posicion de la serie 500 - 0, 501 - 1,
      // 502
      iS = stoi(row[0]) - 500; // posición del arreglo donde esta el ptr de la
                               // serie pertenece el episodio

      // crear el episodio
      episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));

      // trer la cantdad de episodios de la serie iS - la 1a vez retorna 0
      cantEpisodios = arrPtrSeries[iS]->getCantidad();

      // verificar si todavía podemos añadir otro Episodio al arreglo
      if (cantEpisodios < 5) {
        arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodio));
        arrPtrSeries[iS]->setCantidad(++cantEpisodios);
      }
    }
    lectura.close();

    // sale del ciclo cuando ya no existen más lineas en el archivo
    // desplegar todas las películas leídas - borrar o comentar ciclo con cout's
    for (int iR = 0; iS < cantidad; iS++) {
      cout << iR << "--" << arrPtrSeries[iS]->str() << endl;
    }
  }


  // inicializar el acum = 0
void Series::reporteTodasLasSeries() {
    double acum = 0;
    double promedio = 0;
    for (int iS = 0; iS < cantidad; iS++) {
      cout << *arrPtrSeries[iS] << endl;
    }
    promedio = acum / cantidad;
    cout << "Promedio: " + to_string(promedio) << endl;
}


void Series::reporteConCalificacion(double _calificacion) {
  int count = 0;
  for (int iS = 0; iS < cantidad; iS++) {
    if (arrPtrSeries[iS]->getCalificacion() == _calificacion) {
      cout << iS << ' ' << *arrPtrSeries[iS] << endl;
      count++;
    }
  }
  if (count == 0)
    cout << "No hay series con esa calificación" << _calificacion << endl;
}


void Series::reporteGenero(string _genero) {
  int count = 0;
  for (int iS = 0; iS < cantidad; iS++) {
    if (arrPtrSeries[iS]->getGenero() == _genero) {
      cout << iS << ' ' << arrPtrSeries[iS]->str() << endl;
      count++;
    }
  }
  if (count == 0)
    cout << "No hay películas del género " << _genero << endl;
}

void Series::calcularCalificacionSeries() {
    double acum = 0;
    for(int iS = 0; iS < cantidad; iS++){
        acum = acum + arrPtrSeries[iS]->getCalificacion();
    }
    if (cantidad > 0){
        acum / cantidad;
    }
    else  {
        cout << "No hay calificación" << endl;;
    }
}


// Métodos de acceso(gets)
Serie *Series::getPtrSerie(string _iD) {
    return new Serie();
    }


int Series::getCantidadSeries() {
     return 0;

    }


// métodos modificadores(SETS)
void Series::setPtrSerie(Serie *_ptrSerie) {
  if (cantidad < 50) {
    arrPtrSeries[cantidad++] = _ptrSerie;
  } else
    cout << "no hay series para reportar\n";
}


void Series::setCantidadSeries(int _cantidad) {
  cantidad = _cantidad;
}

