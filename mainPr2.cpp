
#include "prenda.h"
#include "atuendo.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
  int crear, dia, det;
  string m, c, m2, c2, m3, c3, man, l, cal;
  string act, ev, tem, rep;
  cout<<"Bienvenido, Viajero Vanguardista :)"<<endl;
  do {
    cout<<"Para que numero de dia de tu viaje vas a planear un atuendo?"<<endl;
    cin>>dia;
    cout<<"Ingresa '2' si para tu atuendo usaras una prenda de una pieza y tus zapatos o '3' si usaras una prenda superior, una inferior y tus zapatos."<<endl;
    cin>>det; //usando el número de prendas del usuario se determina el tamaño del arreglo dinámico del número de apuntadores a distintas prendas de la clase (objeto) Atuendo
    if(det!=2 && det!=3){
      cout<<"Opcion no valida. Intentalo otra vez: "<<endl;
      cin>>det;
    }switch(det){
      case 2:{ //solo son 2 prendas: completa de una pieza y los zapatos
        cout<<"Perfecto. Ingresa el material de tu prenda de una pieza: ";
        cin>>m;
        cout<<"Ingresa el color de tu prenda de una pieza: ";
        cin>>c;
        cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
        cin>>cal;
        cout<<"Ingresa el material de los zapatos que usaras: ";
        cin>>m3;
        cout<<"Ingresa el color de los zapatos que usaras: ";
        cin>>c3;
        cout<<"Que tipo de atuendo es este? \n Casual=1  Fiesta=2  Formal=3 \n Ingresa un numero de las opciones."<<endl;
        cin>>crear; //determina el tipo de atuendo (clase derivada) que se va a crear
        if(crear!=1 && crear!=2 && crear!=3){
          cout<<"Opcion no valida. Intentalo otra vez: ";
          cin>>crear;
        }switch(crear){
          case 1:{
            Casual atCasual(dia, det); //se crea por elección del usuario un Atuendo (de clase derivada) Casual, con el tamaño del arreglo dinámico (valor guardado como "det")
            atCasual.agregarCompleto(m,c); //se agrega (se crea dentro del objeto Atuendo --> composición) la prenda de tipo de una pieza
            atCasual.agregarZapatos(m3,c3, cal);
            atCasual.resumenAtuendo();
            break;
          }case 2:{
            cout<<"Cual es la tematica del atuendo o de fiesta? (O escribe ninguna si no hay) ";
            cin>>tem;
            Fiesta atFiesta(dia, tem, det);
            atFiesta.agregarCompleto(m,c);
            atFiesta.agregarZapatos(m3,c3, cal);
            atFiesta.resumenAtuendo();
            break;
          }case 3:{
            cout<<"Cual es el evento para el que usaras este atuendo en tu viaje? (O escribe ninguno si no es para un evento) ";
            cin>>ev;
            Formal atFormal(dia, ev, det);
            atFormal.agregarCompleto(m,c);
            atFormal.agregarZapatos(m3,c3, cal);
            atFormal.resumenAtuendo();
        break;}
      }
        break;
      }case 3:{ //son 3 prendas: superior, inferior y zapatos
        cout<<"Perfecto. Ingresa el material de tu prenda superior: ";
        cin>>m;
        cout<<"Ingresa el color de tu prenda superior: ";
        cin>>c;
        cout<<"Ingresa el tipo de mangas de tu prenda superior: ";
        cin>>man;
        cout<<"Ingresa el material de tu prenda inferior: ";
        cin>>m2;
        cout<<"Ingresa el color de tu prenda inferior: ";
        cin>>c2;
        cout<<"Ingresa el tipo de largo/diseno de tu prenda inferior (shorts, pantalones largos, falda corta, etc.): ";
        cin>>l;
        cout<<"Ingresa el tipo de calzado (tenis, huaraches, tacones, etc.): ";
        cin>>cal;
        cout<<"Ingresa el material de los zapatos que usaras: ";
        cin>>m3;
        cout<<"Ingresa el color de los zapatos que usaras: ";
        cin>>c3;
        cout<<"Que tipo de atuendo es este? \n Casual=1  Fiesta=2  Formal=3 \n Ingresa un numero de las opciones."<<endl;
        cin>>crear;
        if(crear!=1 && crear!=2 && crear!=3){
          cout<<"Opcion no valida. Intentalo otra vez: ";
          cin>>crear;
        }switch(crear){
          case 1:{
            Casual atCasual(dia, det);
            atCasual.agregarSuperior(m,c, man);
            atCasual.agregarInferior(m2,c2,l);
            atCasual.agregarZapatos(m3,c3, cal);
            atCasual.resumenAtuendo();
            break;
          }case 2:{
            cout<<"Cual es la tematica del atuendo o de fiesta? (O escribe ninguna si no hay) ";
            cin>>tem;
            Fiesta atFiesta(dia, tem, det);
            atFiesta.agregarSuperior(m,c, man);
            atFiesta.agregarInferior(m2,c2,l);
            atFiesta.agregarZapatos(m3,c3, cal);
            atFiesta.resumenAtuendo();
            break;
          }case 3:{
            cout<<"Cual es el evento para el que usaras este atuendo en tu viaje? (O escribe ninguno si no es para un evento) ";
            cin>>ev;
            Formal atFormal(dia, ev, det);
            atFormal.agregarSuperior(m,c, man);
            atFormal.agregarInferior(m2,c2,l);
            atFormal.agregarZapatos(m3,c3, cal);
            atFormal.resumenAtuendo();
          break;}
        }
      break;}
    }
    cout<<"Deseas planear otro atuendo? Ingresa 1 para si y cualquier otra tecla para salir del programa: ";
    cin>>rep;
    }while(rep=="1");
  cout<<"\nAdios! :)";
  return 0;
}
