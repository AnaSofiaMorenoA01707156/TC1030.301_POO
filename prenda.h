
#ifndef PRENDA_H
#define PRENDA_H

#include <string>
#include <iostream>
using namespace std;

//Clase madre Prenda, que hereda a las clases de ropa: superior, inferior, completo y zapatos
class Prenda{
protected:
  string material; //Atributos que hereda a clases hijas
  string color;
  string tipo;
public: //Métodos que hereda a clases hijas
  Prenda(string t):material(""), color(""), tipo(t){}; //Constructor default
  Prenda(string m, string c, string t):material(m), color(c), tipo(t){}; //Constructor definido
  //Ambos constructores (mismo nombre y diferentes métodos), representan un ejemplo de sobrecarga.
  string get_material();
  string get_color();
  string get_tipo();//Getters
  void set_material(string);
  void set_color(string);//Setters
  virtual void infoPrenda()=0; //Función pure virtual, hace que la clase prenda sea abstracta y permite polimorfimo en este
  //método obligatorio entre las clases derivadas de Prenda, cuyos objetos se crean usando la memoria Heap
};

string Prenda::get_material(){
  return material;
}

string Prenda::get_color(){
  return color;
}

string Prenda::get_tipo(){
  return tipo;
}

void Prenda::set_material(string ma){
  material=ma;
}

void Prenda::set_color(string co){
  color=co;
}

//Clase hija Superior. Herencia pública de clase Prenda
class Superior: public Prenda{
private:
  string mangas;
public:
  Superior():Prenda("Superior"){}; //Constructor default a partir del de Prenda (solo con atributo característico/invariable de la clase hija)
  Superior(string mat, string col, string m):Prenda(mat, col, "Superior"), mangas(m){}; //Constructor completo definido (sobrecarga)
  void infoPrenda();
};
void Superior::infoPrenda(){ //Función de su "interfaz" Prenda sobreescrita (diferente en cada clase derivada), pero usando polimorfismo para el método
  cout<<"Material: "<<material<<"\nColor: "<<color<<"\nMangas: "<<mangas<<endl;
}

//Clase hija Inferior. Herencia pública de clase Prenda
class Inferior: public Prenda{
  string largo;
public:
  Inferior():Prenda("Inferior"){};
  Inferior(string mat, string col, string l):Prenda(mat, col, "Inferior"), largo(l){};
  void infoPrenda();
};
void Inferior::infoPrenda(){
  cout<<"Material: "<<material<<"\nColor: "<<color<<"\nTipo de largo/diseno: "<<largo<<endl;
}

//Clase hija Completo. Herencia pública  de clase Prenda
class Completo: public Prenda{
public:
  Completo():Prenda("de una pieza"){};
  Completo(string mat, string col):Prenda(mat, col, "de una pieza"){};
  void infoPrenda();
};
void Completo::infoPrenda(){
  cout<<"Material: "<<material<<"\nColor: "<<color<<endl;
}

//Clase hija Zapatos. Herencia pública  de clase Prenda
class Zapatos: public Prenda{
private:
  string calzadoTipo;
public:
  Zapatos():Prenda("Zapatos"){};
  Zapatos(string mat, string col, string c):Prenda(mat, col, "Zapatos"), calzadoTipo(c){};
  void infoPrenda();
};
void Zapatos::infoPrenda(){
  cout<<"Material: "<<material<<"\nColor: "<<color<<"\nTipo de calzado: "<<calzadoTipo<<endl;
}

#endif
