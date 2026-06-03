/*
 * W4tchCollector
 * Héctor Enrique Gassan Sánchez
 * A01709807
 * 03/06/26
 * Esta clase define al objeto tipo Coleccion que tiene lo necesario para poder
 * agregar relojes, calcular su valor, ver sus caracteristicas, etc. Esta clase
 * se usara en main como el motor principal del programa.
 */

#ifndef COLECCION_H_
#define COLECCION_H_


#include "Reloj.h" //biblioteca con mis objetos a usar
#include <iostream>
#include <string>
using namespace std;

class Coleccion {

  //Declaro las variables privadas de instancia
private:
  Reloj* relojes[100]; //se define como apuntador para usar polimorfismo
  int cont = 0;

  //Declaro constructor por default y metodos públicos
public:
  Coleccion() {}; //constructor por defualt
  void agregarAutomatico(string n, string m, string c, int p, int y, string mo);
  void agregarCuarzo(string n, string m, string c, int p, int y, int fc);
  void agregarDigital(string n, string m, string c, int p, int y, string di);
  int valorColeccion();
  void mostrarColeccion();
  int cantidadRelojes();
  void caracteristicas(int numReloj);
};

/**
 * agregarAutomatico 
 *
 * crea un objeto Automatico y lo agrega al arreglo de relojes usando
 * como indice el contador, el cuál después incrementa en 1.
 *
 * @param string n, string m, string c, int p, int y, string mo
 * @return
 */
void Coleccion ::agregarAutomatico(string n, string m, string c, int p, int y,
                                   string mo) {

  //new crea el objeto en el heap para usar polimorfismo
  relojes[cont] = new Automatico(n, m, c, p, y, mo);
  cont++;
}

/**
 * agregarCuarzo 
 *
 * crea un objeto Cuarzo y lo agrega al arreglo de relojes
 * usando como indice el contador, el cuál después incrementa en 1.
 *
 * @param string n, string m, string c, int p, int y, int fc
 * @return
 */
void Coleccion ::agregarCuarzo(string n, string m, string c, int p, int y,
                               int fc) {

  //new crea el objeto en el heap para usar polimorfismo
  relojes[cont] = new Cuarzo(n, m, c, p, y, fc);
  cont++;
}

/**
 * agregarDigital
 *
 * crea un objeto Digital y lo agrega al arreglo de relojes
 * usando como indice el contador, el cuál después incrementa en 1.
 *
 * @param string n, string m, string c, int p, int y, string di
 * @return
 */
void Coleccion ::agregarDigital(string n, string m, string c, int p, int y,
                                string di) {

  //new crea el objeto en el heap para usar polimorfismo
  relojes[cont] = new Digital(n, m, c, p, y, di);
  cont++;
}

/**
 * valorColeccion
 *
 * utiliza el arreglo relojes[] y el contador, para recorrer 
 * todo el arreglo acumulando el precio de todos los relojes.
 *
 * @param
 * @return int con la suma de todos los precios
 */
int Coleccion ::valorColeccion() {
  int sum = 0;
  for (int i = 0; i < cont; i++) {
    sum = sum + relojes[i]->getPrecio();
  }
  return sum;
}

/**
 * mostrarColeccion 
 *
 * utiliza el arreglo relojes[] y el contador, para recorrer
 * todo el arreglo imprimiendo el nombre de cada reloj.
 *
 * @param 
 * @return
 */
void Coleccion ::mostrarColeccion() {
  int num = 1;
  //Ciclo que recorre el arreglo e imprime cada objeto.
  for (int i = 0; i < cont; i++) {
    cout << num << ".- " << relojes[i]->getNombre() << endl;
    num++;
  }
}

/**
 * cantidadRelojes 
 *
 * devuelve la cantidad de relojes en el arreglo.
 *
 * @param
 * @return int con la cantidad de relojes
 */
int Coleccion ::cantidadRelojes() { return cont; }

/**
 * caracteristicas 
 *
 * utiliza el arreglo relojes[] y el numero de reloj, para imprimir las
 * caracteristicas del reloj usando su indice en el arreglo, le
 * resto uno por que el arreglo empieza en 0.
 *
 * @param int numReloj.
 * @return
 */
void Coleccion ::caracteristicas(int numReloj) {
  relojes[numReloj - 1]->imprimeCaracteristicas();
}

#endif // COLECCION_H_
