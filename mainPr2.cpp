
#include "prenda.h"
#include "atuendo.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  int crear, dia, comp, det;
  string m, c, m2, c2, m3, c3, man, l, cal;
  string act, ev, tem;
  cout<<"Bienvenido, Viajero Vanguardista :)"<<endl;
  cout<<"Que tipo de atuendo le gustaria planear? \n Casual=1  Fiesta=2  Formal=3 \n Ingrese un numero de las opciones, u otro numero para salir del programa."<<endl;
  cin>>crear; //determina el tipo de atuendo (clase derivada) que se va a crear
  cout<<"Que dia de tu viaje vas a usar este atuendo?"<<endl;
  cin>>dia;
  cout<<"Para tu atuendo usaras una (1) prenda de una pieza o 2 (una parte superior y una inferior)?"<<endl;
  cin>>comp;
  if(comp==1){ //usando el número de prendas del usuario se determina el tamaño del arreglo dinámico del número de apuntadores a
  //distintas prendas de la clase (objeto) Atuendo (valor guardado como "det")
    det=3;
  }
  else if(comp==2){
    det=4;
  }
  else{
    cout<<"Opción no válida."<<endl;
  }
  switch(crear){
    case 1:{
      Casual atCasual(dia, det); //se crea por elección del usuario un Atuendo (de clase derivada) Casual
      switch(comp){
        case 1:{ //solo son 2 prendas: completa de una pieza y los zapatos
          cout<<"Perfecto. Ingresa el material de tu prenda de una pieza: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda de una pieza: ";
          cin>>c;
          atCasual.agregarCompleto(m,c); //se agrega (dentro del objeto Atuendo --> composición) la prenda de tipo de una pieza
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atCasual.agregarZapatos(m3,c3, cal);
          break;
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          cout<<"Ingresa el tipo de mangas de tu prenda superior: ";
          cin>>man;
          atCasual.agregarSuperior(m,c, man);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          cout<<"Ingresa el tipo de largo/diseno de tu prenda inferior (shorts, pantalones largos, falda corta, etc.): ";
          cin>>l;
          atCasual.agregarInferior(m2,c2,l);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atCasual.agregarZapatos(m3,c3, cal);
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
      Fiesta atFiesta(dia, tem, det);
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
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atFiesta.agregarZapatos(m3,c3, cal);
          break;
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          cout<<"Ingresa el tipo de mangas de tu prenda superior: ";
          cin>>man;
          atFiesta.agregarSuperior(m,c, man);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          cout<<"Ingresa el tipo de largo/diseno de tu prenda inferior (shorts, pantalones largos, falda corta, etc.): ";
          cin>>l;
          atFiesta.agregarInferior(m2,c2,l);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atFiesta.agregarZapatos(m3,c3, cal);
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
      Formal atFormal(dia, ev, det);
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
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atFormal.agregarZapatos(m3,c3, cal);
          break;
        }
        case 2:{
          cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
          cin>>m;
          cout<<"Ingresa el color de tu prenda superior: ";
          cin>>c;
          cout<<"Ingresa el tipo de mangas de tu prenda superior: ";
          cin>>man;
          atFormal.agregarSuperior(m,c, man);
          cout<<"Ingresa el material de tu prenda inferior: ";
          cin>>m2;
          cout<<"Ingresa el color de tu prenda inferior: ";
          cin>>c2;
          cout<<"Ingresa el tipo de largo/diseno de tu prenda inferior (shorts, pantalones largos, falda corta, etc.): ";
          cin>>l;
          atFormal.agregarInferior(m2,c2,l);
          cout<<"Ingresa el material de los zapatos que usaras: ";
          cin>>m3;
          cout<<"Ingresa el color de los zapatos que usaras: ";
          cin>>c3;
          cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
          cin>>cal;
          atFormal.agregarZapatos(m3,c3, cal);
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
