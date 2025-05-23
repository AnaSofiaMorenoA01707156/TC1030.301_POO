
#ifndef PRENDA_H
#define PRENDA_H

#include <string>
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
public:
  Superior():Prenda("Superior"){}; //Constructor default a partir del de Prenda (solo con atributo característico/invariable de la clase hija)
  Superior(string mat, string col):Prenda(mat, col, "Superior"){}; //Constructor completo definido (sobrecarga)
};
//Clase hija Inferior. Herencia pública de clase Prenda
class Inferior: public Prenda{
public:
  Inferior():Prenda("Inferior"){};
  Inferior(string mat, string col):Prenda(mat, col, "Inferior"){};
};
//Clase hija Completo. Herencia pública  de clase Prenda
class Completo: public Prenda{
public:
  Completo():Prenda("Una pieza"){};
  Completo(string mat, string col):Prenda(mat, col, "Una pieza"){};
};
//Clase hija Zapatos. Herencia pública  de clase Prenda
class Zapatos: public Prenda{
public:
  Zapatos():Prenda("Zapatos"){};
  Zapatos(string mat, string col):Prenda(mat, col, "Zapatos"){};
};

#endif
