#include "Coleccion.h"
#include <iostream>
#include <string>
using namespace std;

void imprimir_menu(){
    cout << "1. Agregar Reloj Automatico" << endl;
    cout << "2. Agregar Reloj de Cuarzo" << endl;
    cout << "3. Agregar Reloj Digital" << endl;
    cout << "4. Mostrar Coleccion" << endl;
    cout << "5. Valor de Coleccion" << endl;
    cout << "6. Mostrar Cantidad de Relojes" << endl;
    cout << "7. Caracteristicas" << endl;
}

int main() {
  Coleccion Collec;
  bool correrProgra = true;
  int salirProgra;
  while(correrProgra){
      imprimir_menu();
      int opcion;
      cin >> opcion;
      if(opcion == 1){
          string n, m, c, mo;
          int p, y;
          cout << "Ingresa los datos de tu reloj automatico:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          cin.ignore();
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          cin.ignore();
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Movimiento:" << endl;
          cin.ignore();
          getline(cin, mo);
          Collec.agregarAutomatico(n, m, c, p, y, mo);
      } else if(opcion == 2){
          string n, m, c;
          int p, y, fc;
          cout << "Ingresa los datos de tu reloj de cuarzo:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          cin.ignore();
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          cin.ignore();
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Frecuencia del cuarzo:" << endl;
          cin >> fc;
          Collec.agregarCuarzo(n, m, c,  p, y, fc);
      } else if (opcion == 3) {
          string n, m, c, di;
          int p, y;
          cout << "Ingresa los datos de tu reloj digital:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          cin.ignore();
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          cin.ignore();
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Display (LCD, Memory in Pixel.....):" << endl;
          cin.ignore();
          getline(cin, di);
          Collec.agregarDigital(n, m, c, p, y, di);
      } else if(opcion == 4){
          cout << "Coleccion:" << endl;
          Collec.mostrarColeccion();
      } else if(opcion == 5){
          cout << "El valor total de tu coleccion es de: " << Collec.valorColeccion() << "$" << endl;
      } else if(opcion == 6){
          cout << "En tu coleccion hay una cantidad de " << Collec.cantidadRelojes() << " relojes" << endl;
      } else if(opcion == 7){
          int relj;
          cout << "De que reloj quieres ver sus caracteristicas (Ingresa el numero del reloj en la lista de coleccion):" << endl;
          cin >> relj;
          Collec.caracteristicas(relj);
      } else {
          cout << "Este numero no es una opcion, vuelve a intentar." << endl;
      }

      cout << "Quieres terminar el programa? 1-Si / 2-No" << endl;
      cin >> salirProgra;

      if (salirProgra == 1) {
          correrProgra = false;
      }
  }
  return 0;
}
