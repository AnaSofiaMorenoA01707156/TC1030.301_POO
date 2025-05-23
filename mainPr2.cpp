
#include "prenda.h"
#include "atuendo.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  int crear, dia, comp;
  string m, c, m2, c2, m3, c3;
  string act, ev, tem;
  cout<<"Bienvenido, Viajero Vanguardista :)"<<endl;
  cout<<"Que tipo de atuendo le gustaria planear? \n Casual=1  Fiesta=2  Formal=3 \n Ingrese un numero de las opciones, u otro numero para salir del programa."<<endl;
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
          break;
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
          atCasual.agregarInferior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atCasual.agregarZapatos(m3,c3);
          break;
        }
        default:{
          cout<<"Opcion no valida, intentalo de nuevo."<<endl;
          cin>>comp;
        }
    }
      atCasual.resumenAtuendo();
      break;
  }
    case 2:{
      cout<<"Cual es la tematica del atuendo o de fiesta? (O escribe ninguna si no hay) ";
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
          break;
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
          atFiesta.agregarInferior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFiesta.agregarZapatos(m3,c3);
          break;
        }
        default:{
          cout<<"Opcion no valida, intentalo de nuevo."<<endl;
          cin>>comp;
        }
      }
      atFiesta.resumenAtuendo();
      break;
    }
    case 3:{
      cout<<"Cual es el evento para el que usaras este atuendo en tu viaje? (O escribe ninguno si no es para un evento) ";
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
          break;
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
          atFormal.agregarInferior(m2,c2);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          atFormal.agregarZapatos(m3,c3);
          break;
        }
        default:{
          cout<<"Opcion no valida, intentalo de nuevo."<<endl;
          cin>>comp;
        }
      }
      atFormal.resumenAtuendo();
      break;
    }
    default:{
      cout<<"¡Adios! :)";
      break;
    }
  }
  return 0;
}
