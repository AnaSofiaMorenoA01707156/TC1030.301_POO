
#ifndef ATUENDO_H
#define ATUENDO_H

#include "prenda.h"
#include <string>
#include <iostream>
using namespace std;  //HACER MÉTODOS AGREGA Y RESUMEN

//Clase madre Atuendo, que hereda a las clases de atuendos:

class Atuendo{
protected:
  string tipo; //Atributos que hereda a clases hijas
  int dia;
  Prenda** prendas; //Se guardan los apuntadores de los objetos de *cualquier* clase derivada de Prenda, para guardarse en un solo arreglo del
  //tipo de la clase base Prenda, el tamaño del arreglo depende del número de prendas que el usuario use en su atuendo (arreglo dinámico de apuntadores)
  int cont;
  int determ;
public: //Métodos que hereda a clases hijas
  Atuendo(string t):tipo(t), dia(0), cont(0){}; //Constructor default
  Atuendo(string t, int d, int det):tipo(t), dia(d), cont(0), determ(det) {prendas= new Prenda*[det];}; //Constructor definido. Se inicializa el arreglo dinámico
  //Ambos constructores (mismo nombre y diferentes métodos), representan un ejemplo de sobrecarga.
  string get_tipo();
  int get_dia(); //Getters
  void set_dia(int); //Setter
  void agregarSuperior(string, string, string); //Métodos para agregar objetos de las clases derivadas de Prenda usando su constructor (composición)
  //y guardarlos en el arreglo de prendas
  void agregarInferior(string, string, string);
  void agregarCompleto(string, string);
  void agregarZapatos(string, string, string);
  void resumenAtuendo(); //Método similar a un to_string para imprimir atributos de objeto Atuendo
  //en cada clase hija se modifica --> se  sobreescribe el métodos heredado
};

string Atuendo::get_tipo(){
  return tipo;
}

int Atuendo::get_dia(){
  return dia;
}

void Atuendo::set_dia(int di){
  dia=di;
}

void Atuendo::agregarSuperior(string mat, string col, string m){
  prendas[cont]=new Superior(mat, col, m); //Se crea el objeto dinamico en el heap para poder obtener y guardar su apuntador
  cont++;
}

void Atuendo::agregarInferior(string mat, string col, string l){
  prendas[cont]=new Inferior(mat, col, l);
  cont++;
}

void Atuendo::agregarCompleto(string mat, string col){
  prendas[cont]=new Completo(mat, col);
  cont++;
}
void Atuendo::agregarZapatos(string mat, string col, string c){
  prendas[cont]=new Zapatos(mat, col, c);
  cont++;
}

//Clase hija Casual. Herencia pública de clase Atuendo
class Casual: public Atuendo{
public:
  Casual():Atuendo("Casual"){}; //Constructor default a partir del de Atuendo (solo con atributo característico/invariable de la clase hija)
  Casual(int dI, int det):Atuendo("Casual", dI, det){}; //Constructor completo definido (sobrecarga)
  void resumenAtuendo();
};
void Casual::resumenAtuendo(){ //método heredado sobreescrito (en cada clase derivada)
  cout<<"Un atuendo casual, para uso cotidiano durante tu viaje, que has planteado usar en el dia "<<dia<<" de tu viaje."<<endl;
  cout<<"Este esta compuesto por..."<<endl;
  for (int j=0;j<determ;j++){
    cout<<"Prenda "<<prendas[j]->get_tipo()<<endl;
    prendas[j]->infoPrenda(); //aquí el método de infoPrenda actuará distinto para las prendas gracias al uso de polimorfismo en sus clases
  }
}

//Clase hija Formal. Herencia pública de clase Atuendo
class Formal: public Atuendo{
private:
  string evento;
public:
  Formal():Atuendo("Formal"){};
  Formal(int dI, string ev, int det):Atuendo("Formal", dI, det), evento(ev){};
  string get_evento();
  void set_evento(string);
  void resumenAtuendo(); //Sobreescritura del método (con respecto a clase Atuendo)
};
string Formal::get_evento(){
  return evento;
}
void Formal::set_evento(string e){
  evento=e;
}
void Formal::resumenAtuendo(){
  cout<<"Un atuendo formal, que has planteado usar en el dia "<<dia<<" de tu viaje, porque quizas tengas un evento: "<<evento<<endl;
  cout<<"Este esta compuesto por..."<<endl;
  for (int j=0;j<determ;j++){
    cout<<"Prenda "<<prendas[j]->get_tipo()<<endl;
    prendas[j]->infoPrenda();
  }
}

//Clase hija Fiesta. Herencia pública de clase Atuendo
class Fiesta: public Atuendo{
private:
  string tematica;
public:
  Fiesta():Atuendo("Fiesta"){};
  Fiesta(int dI, string tem, int det):Atuendo("Fiesta", dI, det), tematica(tem){};
  string get_tematica();
  void set_tematica(string);
  void resumenAtuendo();
};
string Fiesta::get_tematica(){
  return tematica;
}
void Fiesta::set_tematica(string t){
  tematica=t;
}
void Fiesta::resumenAtuendo(){
  cout<<"Un atuendo para fiesta con tematica "<<tematica<<", que has planteado usar en el dia "<<dia<<" de tu viaje."<<endl;
  cout<<"Este esta compuesto por..."<<endl;
  for (int j=0;j<determ;j++){
    cout<<"Prenda "<<prendas[j]->get_tipo()<<endl;
    prendas[j]->infoPrenda();
  }
}

#endif
