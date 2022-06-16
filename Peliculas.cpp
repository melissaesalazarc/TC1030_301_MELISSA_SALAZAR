//Peliculas.cpp

#include "Peliculas.h"

#include <fstream>
#include <sstream>

Peliculas::Peliculas() {}

Peliculas::Peliculas(string _iD, string _titulo, int _duracion, string _genero,
                     double _calificacionPromedio, int _oscares) {}

// otros métodos
void Peliculas::leerArchivo() {
  // lectura - file input
  fstream lectura;
  // para almacenar los datos de la línea separados :arreglo de strings
  string row[6];
  // line almacena la línea leída y word la palabra que se saca line
  string line, word;
////
   int iR{}, iS{};
  // abrir archivo de entrada
  lectura.open("C:\\Users\\USER\\Documents\\prog\\proyecto poo\\proyectopooBUENO\\Pelicula-1.csv", ios::in);

  // inicializar el atributo cantidad con 0
  cantidad = 0;

  // lee una línea del archivo y la almacena en line
  while (getline(lectura, line)) {
    // despliega en consola la linea
    // cout << line << endl;

    // usado para separar las palabras split()
    std::stringstream s(line);

    // read every column data of a row and store it in a string variable, 'word'
    int iR = 0;

    // extrae caracteres de s y los almacena en word hasta que encuentra el
    // delimitador ','

    while (getline(s, word, ',')) {
            cout << word << endl;
      // añade la word al arreglo row e incrementa iR para la próxima palabra
            row[iR++] = word;
    }
    // oerador new crear un objeto del tipo película - -mem dinamica - HEAP
    // retorna un pointer a un objeto Película stoi - funcion que convierte un
    // string a int
    // stod - funcion que convirte un string a double

    setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]), row[3],
                                stod(row[4]), stoi(row[5])));

    // incrementa el atributo cantidad para la siguiente pelicula
    cantidad = cantidad + 1;
  }
  lectura.close();

  // sale del ciclo cuando ya no existen más lineas en el archivo
  // desplegar todas las películas leídas - borrar o comentar ciclo con cout's

  for (int iR = 0; iR < cantidad; iR++) {
    cout << iR << "--" << arrPtrPeliculas[iR]->str() << endl;
  }
}


// inicializar el acum = 0
void Peliculas::reporteTodasLasPeliculas() {
  double acum = 0;

  for (int iR = 0; iR < cantidad; iR++) {
    cout << iR << "--" << arrPtrPeliculas[iR]->str() << endl;
    acum = acum + arrPtrPeliculas[iR]->getCalificacion();
  }

  if (cantidad > 0) {
    cout << "El promedio de las películas es : " << acum / cantidad << endl;
  }
}


void Peliculas::reporteConCalificacion(double _calificacion) {
  int count = 0;

  for (int iR = 0; iR < cantidad; iR++) {

    if (arrPtrPeliculas[iR]->getCalificacion() == _calificacion) {
      cout << iR << ' ' << *arrPtrPeliculas[iR] << endl;
      count++;
    }
  }

  if (count == 0)
    cout << "No hay películas con calificación " << _calificacion << endl;
}


void Peliculas::reporteGenero(string _genero) {
  int count = 0;
  for (int iR = 0; iR < cantidad; iR++) {
    if (arrPtrPeliculas[iR]->getGenero() == _genero) {
      cout << iR << ' ' << *arrPtrPeliculas[iR] << endl;
      count++;
    }
  }
  if (count == 0)
    cout << "No hay películas del género " << _genero << endl;
}


// Métodos de acceso(gets)
Pelicula *Peliculas::getPtrPelicula(string _iD) {
  return new Pelicula();
  }

int Peliculas::getCantidadPeliculas() {
  return 0;
  }


// métodos modificadores(SETS)
void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula) {
  if (cantidad < 50) {
    arrPtrPeliculas[cantidad++] = _ptrPelicula;
  } else
    cout << "no hay peliculas para reportar\n";
}


void Peliculas::setCantidadPeliculas(int _cantidad) {
  cantidad = _cantidad;
}
