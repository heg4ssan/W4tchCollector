#ifndef RELOJ_H_
#define RELOJ_H_

#include <iostream>
#include <string>
using namespace std;

class Reloj {
protected:
  string nombre;
  string modelo;
  string cristal;
  int precio;
  int year;

public:
  Reloj() : nombre(""), modelo(""), cristal(""), precio(0), year(0) {};
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
  virtual void imprimeCaracteristicas();
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

void Reloj ::imprimeCaracteristicas() {
  cout << "Nombre: " << nombre << endl;
  cout << "Modelo: " << modelo << endl;
  cout << "Tipo de cristal: " << cristal << endl;
  cout << "Precio: " << precio << endl;
  cout << "Año: " << year << endl;
}

class Automatico : public Reloj {
private:
  string movimiento;

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

void Automatico ::imprimeCaracteristicas() {
    Reloj::imprimeCaracteristicas();
    cout << "Movimiento: " << movimiento << endl;
}

class Cuarzo : public Reloj {
private:
  int frecuenciaCuarzo;

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

void Cuarzo ::imprimeCaracteristicas() {
    Reloj::imprimeCaracteristicas();
    cout << "Frecuencia del cuarzo: " << frecuenciaCuarzo << endl;
}

class Digital : public Reloj {
private:
  string display;

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

void Digital ::imprimeCaracteristicas() {
    Reloj::imprimeCaracteristicas();
    cout << "Tipo de display: " << display << endl;
}

#endif
