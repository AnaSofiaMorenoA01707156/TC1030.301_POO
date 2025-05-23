
#ifndef ATUENDO_H
#define ATUENDO_H

#include "prenda.h"
#include <string>
#include<iostream>
using namespace std;  //HACER MÉTODOS AGREGA Y RESUMEN

//Clase madre Atuendo, que hereda a las clases de atuendos:

class Atuendo{
protected:
  string tipo; //Atributos que hereda a clases hijas
  int dia;
  Prenda *prendas[3]; //Se guardan los apuntadores de los objetos de *cualquier* clase derivada de Prenda, para guardarse
  //en un solo arreglo del tipo de la clase madre
  int i=0;
public: //Métodos que hereda a clases hijas
  Atuendo(string t):tipo(t), dia(0){}; //Constructor default
  Atuendo(string t, int d):tipo(t), dia(d){}; //Constructor definido
  //Ambos constructores (mismo nombre y diferentes métodos), representan un ejemplo de sobrecarga.
  string get_tipo();
  int get_dia(); //Getters
  void set_dia(int); //Setter
  void agregarSuperior(string, string); //Métodos para agregar objetos de las clases derivadas de Prenda usando su constructor (composición)
  //y guardarlos en el arreglo de prendas
  void agregarInferior(string, string);
  void agregarCompleto(string, string);
  void agregarZapatos(string, string);
  void resumenAtuendo(); //Método similar a un to_string para imprimir atributos de objeto Atuendo
  //en cada clase hija se modifica por lo que ejemplifica la sobreescritura de métodos heredados
};

string Atuendo::get_tipo(){
  return tipo;
}

int  Atuendo::get_dia(){
  return dia;
}

void  Atuendo::set_dia(int di){
  dia=di;
}

void Atuendo::agregarSuperior(string mat, string col){
  prendas[i]=new Superior(mat, col); //Se crea el objeto dinamico en el heap para poder obtener y guardar su apuntador
  i++;
}

void Atuendo::agregarInferior(string mat, string col){
  prendas[i]=new Inferior(mat, col);
  i++;
}

void Atuendo::agregarCompleto(string mat, string col){
  prendas[i]=new Completo(mat, col);
  i++;
}
void Atuendo::agregarZapatos(string mat, string col){
  prendas[i]=new Zapatos(mat, col);
  i++;
}

//Clase hija Casual. Herencia pública de clase Atuendo
class Casual: public Atuendo{
public:
  Casual():Atuendo("Casual"){}; //Constructor default a partir del de Atuendo (solo con atributo característico/invariable de la clase hija)
  Casual(int dI):Atuendo("Casual", dI){}; //Constructor completo definido (sobrecarga)
  void resumenAtuendo();
};
void Casual::resumenAtuendo(){
  cout<<"Un atuendo casual, para uso cotidiano durante tu viaje, que has planteado usar en el dia "<<dia<<" de tu viaje."<<endl;
  cout<<"Este esta compuesto por..."<<endl;
  for (int j=0;j<3;j++){
    cout<<"-una prenda tipo "<<prendas[j]->get_tipo()<<" de "<<prendas[j]->get_material()<<" y de color "<<prendas[j]->get_color()<<endl;
  }
}

//Clase hija Formal. Herencia pública de clase Atuendo
class Formal: public Atuendo{
private:
  string evento;
public:
  Formal():Atuendo("Formal"){};
  Formal(int dI, string ev):Atuendo("Formal", dI), evento(ev){};
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
  for (int j=0;j<3;j++){
    cout<<"-una prenda tipo "<<prendas[j]->get_tipo()<<" de "<<prendas[j]->get_material()<<" y de color "<<prendas[j]->get_color()<<endl;
  }
}

//Clase hija Fiesta. Herencia pública de clase Atuendo
class Fiesta: public Atuendo{
private:
  string tematica;
public:
  Fiesta():Atuendo("Fiesta"){};
  Fiesta(int dI, string tem):Atuendo("Fiesta", dI), tematica(tem){};
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
  for (int j=0;j<3;j++){
    cout<<"-una prenda tipo "<<prendas[j]->get_tipo()<<" de "<<prendas[j]->get_material()<<" y de color "<<prendas[j]->get_color()<<endl;
  }
}

#endif
