#include<iostream>
using namespace std;

class Figura {

  public:
  float base;
  float altura;   
 void captura();
 virtual float perimetro()=0;
 virtual float area()=0;
};

class Rectangulo: public Figura { 
 public:
  void imprime();
  float perimetro(){return 2*(base+altura);}
  float area(){return base*altura;}
};

class Triangulo: public Figura {
 public:
  void muestra();
  float perimetro(){return 2*altura+base;}
  float area(){return (base*altura)/2;}
};

void Figura::captura()
{
 cout << "CALCULO DEL AREA Y PERIMETRO DE UN TRIANGULO ISÓSCELES Y UN RECTANGULO:" << endl;
 cout << "escribe la altura: ";
 cin >> altura;
 cout << "escribe la base: ";
 cin >> base;
 cout << "EL PERIMETRO ES: " << perimetro() << endl;
 cout << "EL AREA ES: " << area() << endl;
 cin.get();
}

int main()
{
    //Figura f;
    Rectangulo r;
    r.captura();
    
    Triangulo t;
    t.captura();
    return 0;
}