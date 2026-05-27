#ifndef COLECCION_H_
#define COLECCION_H_


#include "Reloj.h"
#include <iostream>
#include <string>
using namespace std;

class Coleccion {
private:
  Reloj* relojes[100];
  int cont = 0;

public:
  Coleccion() {};
  void agregarAutomatico(string n, string m, string c, int p, int y, string mo);
  void agregarCuarzo(string n, string m, string c, int p, int y, int fc);
  void agregarDigital(string n, string m, string c, int p, int y, string di);
  int valorColeccion();
  void mostrarColeccion();
  int cantidadRelojes();
  void caracteristicas(int numReloj);
};

void Coleccion ::agregarAutomatico(string n, string m, string c, int p, int y,
                                   string mo) {
  relojes[cont] = new Automatico(n, m, c, p, y, mo);
  cont++;
}

void Coleccion ::agregarCuarzo(string n, string m, string c, int p, int y,
                               int fc) {
  relojes[cont] = new Cuarzo(n, m, c, p, y, fc);
  cont++;
}

void Coleccion ::agregarDigital(string n, string m, string c, int p, int y,
                                string di) {
  relojes[cont] = new Digital(n, m, c, p, y, di);
  cont++;
}

int Coleccion ::valorColeccion() {
  int sum = 0;
  for (int i = 0; i < cont; i++) {
    sum = sum + relojes[i]->getPrecio();
  }
  return sum;
}

void Coleccion ::mostrarColeccion() {
  int num = 1;
  for (int i = 0; i < cont; i++) {
    cout << num << ".- " << relojes[i]->getNombre() << endl;
    num++;
  }
}

int Coleccion ::cantidadRelojes() { return cont; }

void Coleccion ::caracteristicas(int numReloj) {
  relojes[numReloj - 1]->imprimeCaracteristicas();
}

#endif
