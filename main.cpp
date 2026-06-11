/*
 * W4tchCollector
 * Héctor Enrique Gassan Sánchez
 * A01709807
 * 03/06/26
 * Este es un programa que guarda los diferentes
 * relojes que tenga el usuario en su coleccion ya sean
 * automaticos, de cuarzo y digitales con todos sus datos.
 * Puede consultarlos y agregarlos.
 */

// Bibliotecas
#include "Coleccion.h" // donde estan los objetos de mi proyecto
#include <iostream> //para imprimir
#include <string>   // usar stirngs
using namespace std;

// Procedimiento menu
void imprimir_menu(){
  // Imprime las opciones que va a tener el sistema
  cout << "1. Agregar Reloj Automatico" << endl;
  cout << "2. Agregar Reloj de Cuarzo" << endl;
  cout << "3. Agregar Reloj Digital" << endl;
  cout << "4. Mostrar Coleccion" << endl;
  cout << "5. Valor de Coleccion" << endl;
  cout << "6. Mostrar Cantidad de Relojes" << endl;
  cout << "7. Caracteristicas" << endl;
}

int main() {
  // Variables y arreglos con su estado inicial
  Coleccion Collec;
  bool correrProgra = true;
  int salirProgra;
  
  // Ciclo para que el sistema siga corriendo mientras el 
  // usuario no elija la opcion salir.
  while(correrProgra){
      // Impresion de menu
      imprimir_menu();
      // Leer indice que selecciona la opcion del menu
      int opcion;
      cin >> opcion;
      
      /**
       * Si la opcion es uno, le pide al usuario todos los datos del reloj
       * automatico que quiere guardar, crea el objeto y lo guarda en la coleccion.
       */
      if(opcion == 1){
          string n, m, c, mo;
          int p, y;
          cout << "Ingresa los datos de tu reloj automatico:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Movimiento:" << endl;
          cin.ignore();
          getline(cin, mo);
          Collec.agregarAutomatico(n, m, c, p, y, mo);
          
      /**
       * Si la opcion es dos, le pide al usuario todos los datos del reloj
       * de cuarzo que quiere guardar, crea el objeto y lo guarda en la coleccion.
       */
      } else if(opcion == 2){
          string n, m, c;
          int p, y, fc;
          cout << "Ingresa los datos de tu reloj de cuarzo:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Frecuencia del cuarzo:" << endl;
          cin >> fc;
          Collec.agregarCuarzo(n, m, c,  p, y, fc);
          
      /**
       * Si la opcion es tres, le pide al usuario todos los datos del reloj
       * digital que quiere guardar, crea el objeto y lo guarda en la coleccion.
       */
      } else if (opcion == 3) {
          string n, m, c, di;
          int p, y;
          cout << "Ingresa los datos de tu reloj digital:" << endl;
          cout << "Nombre:" << endl;
          cin.ignore();
          getline(cin, n);
          cout << "Modelo:" << endl;
          getline(cin, m);
          cout << "Tipo de cristal (Zafiro, Mineral, Reisina..):" << endl;
          getline(cin, c);
          cout << "Precio del reloj:" << endl;
          cin >> p;
          cout << "Año del reloj:" << endl;
          cin >> y;
          cout << "Display (LCD, Memory in Pixel.....):" << endl;
          cin.ignore();
          getline(cin, di);
          Collec.agregarDigital(n, m, c, p, y, di);
          
      /**
       * Si la opcion es cuatro, imprime el nombre de todos los
       * relojes guardados en forma de lista.
       */
      } else if(opcion == 4){
          cout << "Coleccion:" << endl;
          Collec.mostrarColeccion();

       /**
       * Si la opcion es cinco, imprime el valor monetario total
       * de la coleccion.
       */
      } else if(opcion == 5){
          cout << "El valor total de tu coleccion es de: " << Collec.valorColeccion() << "$" << endl;

       /**
       * Si la opcion es seis, imprime el numero de relojes en 
       * la coleccion.
       */
      } else if(opcion == 6){
          cout << "En tu coleccion hay una cantidad de " << Collec.cantidadRelojes() << " relojes" << endl;
          
      /**
       * Si la opcion es siete, pide el numero de reloj con base a la primera
       * lista mostrada en opcion 4, y asi, enseña toda la informacion del reloj.
       */
      } else if(opcion == 7){
          int relj;
          cout << "De que reloj quieres ver sus caracteristicas (Ingresa el numero del reloj en la lista de coleccion):" << endl;
          cin >> relj;
          Collec.caracteristicas(relj);
      } else {
          cout << "Este numero no es una opcion, vuelve a intentar." << endl;
      }

      // Pregunta si quiere salir del programa
      cout << "Quieres terminar el programa? 1-Si / 2-No" << endl;
      cin >> salirProgra;

      /**
       * Si es asi, acaba el programa, de lo contrario, regresa al menu
       */
      if (salirProgra == 1) {
          correrProgra = false;
      }
  }
  return 0;
}
