# Proyecto: Viajero Vanguardista
Proyecto de la materia Programación Orientada a Objetos (TC1030.301) en lenguaje C++.

El proyecto se llama "Viajero Vanguardista" y está destinado a ayudar a las personas a llevar y planear de manera correcta y completa los atuendos que necesitan para un viaje (de trabajo o personal).
El usuario crea un atuendo de tipo casual, formal o para fiesta (dependiendo de lo que requiera), y después puede añadir las prendas (de la parte superior e inferior, de una pieza o zapatos) que lo componen. Al crear tanto el atuendo como las prendas el usuario puede añadir información sobre las mismas (ej: materiales, colores, etc.), para que al final el programa pueda darle un resumen completo de su atuendo compuesto, para poder revisarlo.

# Funcionamiento y clases
El programa funciona pidiéndole al usuario el tipo de atuendo que le gustaría crear, pidiéndole un poco de información general sobre el mismo dependiendo del tipo que haya seleccionado. Luego, el usuario elige el número de prendas que tiene su atuendo, y con esto se procede a pedir al usuario las características (atributos) de cada prenda, para así crear sus objetos, que sea crean como parte del atuendo ya creado para componerlo. Al final, el programa recopila toda la información dada por el usuario para poder darle un resumen del atuendo que planeó, con sus características generales, las prendas que lo componen y las características de las mismas. 
El funcionamiento interno del código para que esto susceda se describe mejor con el UML y con una explicación de las clases que forman parte del programa:
## Atuendo
La clase Atuendo es una clase base, **abstracta**, para las clases de los tipos de atuendo. Esta les hereda sus atributos y métodos básicos. Entre estos se incluye un arreglo dinámico donde se guardan las prendas de cualquier objeto de una clase derivada de Atuendo, así como los métodos necesarios para crear y añadir al arreglo los objetos Prenda. Ya que dentro de estos métodos se están creando los objetos de Prenda, esto hace que exista una relación de composición (los objetos Prenda componen al objeto Atuendo). Además, hace que sus clases derivadas tengan un método para dar un resumen de sus atributos, incluyendo las prendas en su arreglo y los atributos de las mismas. Este es definido de forma diferente por cada clase derivada. Sus clases derivadas que sí pueden instanciarse incluyen las siguientes:
+ **Casual**
+ **Formal**
+ **Fiesta**
## Prenda
La clase Prenda es una clase base, **abstracta**, para las clases de los tipos de prendas (les hereda sus atributos y métodos básicos). Entre estos se incluyen las características básicas compartidas, y también un método para dar un resumen de estos atributos y características. Debido a que cada prenda cuenta además con otras características (atributos), el método que da este resumen se define o sobreescribe distinto para cada clase derivada de prenda. Sin embargo, debido a la relación de composición directamente a la clase Atuendo en un mismo arreglo Prenda, se busca que en general se pueda guardar y tratar a los objetos de cualquier clase (derivada) de Prenda como su tipo base, por lo que el programa usa polimorfismo, apuntadores y la memoria dinámica con los objetos de las clases derivadas de Prenda. Estas son las siguientes:
+ **Inferior**
+ **Completo**
+ **Superior**
+ **Zapatos**

# Casos de fallo
Como ya se mencionó, tanto la clase base Atuendo, como la clase base Prenda son clases abstractas, por lo que querer instanciarlas dentro del código generaría un error al compilar el programa.
Además, tratándose de una relación de composición directa en un mismo arreglo, si no se usara polimorfismo con los objetos de las clases derivadas de Prenda, el programa podría no tratar a estos objetos con sus características o métodos de acuerdo a su clase derivada, sino únicamente con lo que incluye su clase base, y esto causaría un error de funcionamiento.

# Versiones y correcciones

# Documentación

# Consideraciones para compilación:
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos.

--> Compilar con: "g++ mainPr2.cpp"

Correr en Windows PowerShell: ".\a.exe"

Correr en Windows: "a.exe"

Correr en Linux: "a.out" ó "./a.out"
