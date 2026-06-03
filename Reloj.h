/*
 * W4tchCollector
 * Héctor Enrique Gassan Sánchez
 * A01709807
 * 03/06/2026
 * Esta clase define el objeto de tipo Reloj que contiene las clases heredadas
 * Automatico, Cuarzo y Digital.
 */

#ifndef RELOJ_H_
#define RELOJ_H_

#include <iostream>
#include <string>
using namespace std;

//Declaracion de clase Reloj que es abstracta
class Reloj {

  //Declaro variables de instancia
protected:
  string nombre;
  string modelo;
  string cristal;
  int precio;
  int year;

  //Declaro los métodos que va a tener el objeto
public:
  Reloj() : nombre(""), modelo(""), cristal(""), precio(0), year(0) {}; //constructor por defualt
  Reloj(string n, string m, string c, int p, int y)
      : nombre(n), modelo(m), cristal(c), precio(p), year(y) {};

  string getNombre();
  string getModelo();
  string getCristal();
  int getPrecio();
  int getYear();

  void setNombre(string n);
  void setModelo(string m);
  void setCristal(string c);
  void setPrecio(int p);
  void setYear(int y);
  virtual void imprimeCaracteristicas() = 0; //método abstracto será sobreescrito
};

string Reloj ::getNombre() { return nombre; }

string Reloj ::getModelo() { return modelo; }

string Reloj ::getCristal() { return cristal; }

int Reloj ::getPrecio() { return precio; }

int Reloj ::getYear() { return year; }

void Reloj ::setNombre(string n) { nombre = n; }

void Reloj ::setModelo(string m) { modelo = m; }

void Reloj ::setCristal(string c) { cristal = c; }

void Reloj ::setPrecio(int p) { precio = p; }

void Reloj ::setYear(int y) { year = y; }

//Declaro objeto Automatico que hereda de Reloj
class Automatico : public Reloj {

  //Variables de instancia del objeto
private:
  string movimiento;

  //Metodos del objeto
public:
  Automatico() : Reloj(), movimiento("") {};
  Automatico(string n, string m, string c, int p, int y, string mo)
      : Reloj(n, m, c, p, y), movimiento(mo) {};
  string getMovimiento();

  void setMovimiento(string m);
  void imprimeCaracteristicas();
};

string Automatico ::getMovimiento() { return movimiento; }

void Automatico ::setMovimiento(string m) { movimiento = m; }

/**
 * imprimeCaracteristicas 
 *
 * imprime todos los atributos en consola
 *
 * @param
 * @return
 */
void Automatico ::imprimeCaracteristicas() {
      cout << "Nombre: " << nombre << endl;
      cout << "Modelo: " << modelo << endl;
      cout << "Tipo de cristal: " << cristal << endl;
      cout << "Precio: " << precio << endl;
      cout << "Año: " << year << endl;
      cout << "Movimiento: " << movimiento << endl;
}

//Declaro objeto Cuarzo que hereda de Reloj
class Cuarzo : public Reloj {

  //Declaro las variables de instancia privadas
private:
  int frecuenciaCuarzo;

  //Declaro metodos públicos
public:
  Cuarzo() : Reloj(), frecuenciaCuarzo(0) {};
  Cuarzo(string n, string m, string c, int p, int y, int fc)
      : Reloj(n, m, c, p, y), frecuenciaCuarzo(fc) {};
  int getFrecuencia();

  void setFreciencia(int fc);
  void imprimeCaracteristicas();
};

int Cuarzo ::getFrecuencia() { return frecuenciaCuarzo; }

void Cuarzo ::setFreciencia(int fc) { frecuenciaCuarzo = fc; }

/**
 * imprimeCaracteristicas 
 *
 * imprime todos los atributos en consola
 *
 * @param
 * @return 
 */
void Cuarzo ::imprimeCaracteristicas() {
    cout << "Nombre: " << nombre << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Tipo de cristal: " << cristal << endl;
    cout << "Precio: " << precio << endl;
    cout << "Año: " << year << endl;
    cout << "Frecuencia del cuarzo: " << frecuenciaCuarzo << endl;
}

//Declaro el objeto Digital que hereda de Reloj
class Digital : public Reloj {

  //Variables de instancia privadas del objeto
private:
  string display;

  //Metodos públicos del objeto
public:
  Digital() : Reloj(), display("") {};
  Digital(string n, string m, string c, int p, int y, string di)
      : Reloj(n, m, c, p, y), display(di) {};
  string getDisplay();

  void setDisplay(string di);
  void imprimeCaracteristicas();
};

string Digital ::getDisplay() { return display; }

void Digital ::setDisplay(string di) { display = di; }

/**
 * imprimeCaracteristicas
 *
 * imprime todos los atributos en consola
 *
 * @param
 * @return 
 */
void Digital ::imprimeCaracteristicas() {
      cout << "Nombre: " << nombre << endl;
      cout << "Modelo: " << modelo << endl;
      cout << "Tipo de cristal: " << cristal << endl;
      cout << "Precio: " << precio << endl;
      cout << "Año: " << year << endl;
      cout << "Tipo de display: " << display << endl;
}

#endif // RELOJ_H_
