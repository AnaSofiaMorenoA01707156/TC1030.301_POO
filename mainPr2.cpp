
#include "prenda.h"
#include "atuendo.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  int crear, dia, comp;
  string m, c, m2, c2, m3, c3;
  string act, ev, tem;
  cout<<"Bienvenido a Viajero Vanguardista :)"<<endl;
  cout<<"Que tipo de atuendo le gustaria planear? \n Casual=1  Fiesta=2  Formal=3 \n Ingrese un numero de las opciones, u otro número para salir del programa."<<endl;
  cin>>crear;
  cout<<"Que dia de tu viaje vas a usar este atuendo?"<<endl;
  cin>>dia;
  cout<<"Para tu atuendo usaras una (1) prenda de una pieza o 2 (una parte superior y una inferior)?"<<endl;
  cin>>comp;
  switch(crear){
    case 1:{
      Casual atCasual(dia);
      switch(comp){
        case 1:{
          cout<<"Perfecto. Ingresa el material de tu prenda de una pieza: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda de una pieza: ";
          cin>>c;
          atCasual.agregarCompleto(m,c);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atCasual.agregarZapatos(m3,c3);
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          atCasual.agregarSuperior(m,c);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          atCasual.agregarSuperior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atCasual.agregarZapatos(m3,c3);
        }
        case 3:{
          cout<<"Opción no válida, inténtalo de nuevo."<<endl;
        }
      }
      break;
    }
    case 2:{
      cout<<"El atuendo de fiesta es con alguna temática? (Si no escribe ninguna) ";
      cin>>tem;
      Fiesta atFiesta(dia, tem);
      switch(comp){
        case 1:{
          cout<<"Perfecto. Ingresa el material de tu prenda de una pieza: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda de una pieza: ";
          cin>>c;
          atFiesta.agregarCompleto(m,c);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFiesta.agregarZapatos(m3,c3);
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          atFiesta.agregarSuperior(m,c);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          atFiesta.agregarSuperior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFiesta.agregarZapatos(m3,c3);
        }
        case 3:{
          cout<<"Opción no válida, inténtalo de nuevo."<<endl;
        }
      }
      break;
    }
    case 3:{
      cout<<"Lo usaras para algun evento especial en tu viaje? (Si no escribe ninguno) ";
      cin>>ev;
      Formal atFormal(dia, ev);
      switch(comp){
        case 1:{
          cout<<"Perfecto. Ingresa el material de tu prenda de una pieza: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda de una pieza: ";
          cin>>c;
          atFormal.agregarCompleto(m,c);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFormal.agregarZapatos(m3,c3);
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          atFormal.agregarSuperior(m,c);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          atFormal.agregarSuperior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFormal.agregarZapatos(m3,c3);
        }
        case 3:{
          cout<<"Opción no válida, inténtalo de nuevo."<<endl;
        }
      }
      break;
    }
    default:{
      cout<<"¡Adios! :)";
    }
  }
  return 0;
}
