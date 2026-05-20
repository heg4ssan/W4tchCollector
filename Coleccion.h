#include "Reloj.h"
#include <iostream>
#include <string>
using namespace std;

class Coleccion {
private:
  Reloj relojes[100];
  int cont = 0;

public:
  Coleccion() {};
  void agregarAutomatico(string n, string m, string c, int p, int y, string mo);
  void agregarCuarzo(string n, string m, string c, int p, int y, int fc);
  void agregarDigital(string n, string m, string c, int p, int y, string di);
  int valorColeccion();
  void mostrarColeccion();
  void cantidadRelojes();
  void Caracteristicas(int numReloj);
};

void Coleccion ::agregarAutomatico(string n, string m, string c, int p, int y,
                                   string mo) {
  relojes[cont] = Automatico(n, m, c, p, y, mo);
  cont++;
}

void Coleccion ::agregarCuarzo(string n, string m, string c, int p, int y,
                               int fc) {
  relojes[cont] = Cuarzo(n, m, c, p, y, fc);
  cont++;
}

void Coleccion ::agregarDigital(string n, string m, string c, int p, int y,
                                string di) {
  relojes[cont] = Digital(n, m, c, p, y, di);
  cont++;
}

int Coleccion ::valorColeccion() {
  int sum = 0;
  for (int i = 0; i < cont; i++) {
    sum = sum + relojes[i].getPrecio();
  }
  return sum;
}

void Coleccion ::mostrarColeccion() {
  int num = 1;
  for (int i = 0; i < cont; i++) {
    cout << num << ".- " << relojes[i].getNombre() << endl;
    num++;
  }
}

void Coleccion ::cantidadRelojes() { cout << cont << endl; }

void Coleccion ::Caracteristicas(int numReloj) {
  relojes[numReloj - 1].imprimeCaracteristicas();
}
