#include "Coleccion.h"
#include <iostream>
#include <string>

int main() {
  Coleccion Collec;
  Collec.agregarAutomatico("Orient Bambino", "Version 2", "Mineral", 6000, 2018,
                           "na0176");
  Collec.agregarCuarzo("Casio Forester", "FT-500WC-5BV", "Resiona", 800, 2000,
                       40000);
  Collec.agregarDigital("G-SHOCK", "gbd-200", "Mineral", 3000, 2020,
                        "Memory in pixel");
  cout << Collec.valorColeccion() << endl;
  Collec.cantidadRelojes();
  Collec.mostrarColeccion();
  Collec.Caracteristicas(1);
  Collec.Caracteristicas(2);
  Collec.Caracteristicas(3);
  return 0;
}
