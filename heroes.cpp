#include<stdlib.h>
#include<iostream>

using std::cout;
using std::endl;


class Persona
{
public:
    Persona()
    {
        vida = 0;
        ganador = false;
    };
    Persona( int vida)
    {
        this->vida = vida;
    };


    void quitarVida(int danyo)
    {
        vida -= danyo;
    };   

    int getVida()
    {
        return vida;
    };


private:
    int vida;
    bool ganador;
};



class Villano : public Persona {
public:
    Villano():Persona(40) {};

    bool go(Persona& enemigo) {
        int dados = (1 + rand() % 2);
        if (dados == 1) {
            enemigo.quitarVida(9);
            cout << "Villano full punch" << endl;
            cout << "Vida: " << enemigo.getVida() << endl;
        }
        if (dados == 2) {
            enemigo.quitarVida(4);
            cout << "Villano punch" << endl;
            cout << "Vida: " << enemigo.getVida() << endl;
        }

    }
};



class Heroe : public Persona{
public:
    Heroe(): Persona( 40) { };

    bool go(Persona& enemigo) {
        int dados = (1 + rand() % 2);
        if (dados == 1) {
            cout << "Heroe full punch" << endl;
            enemigo.quitarVida(9);
            cout << "Vida: " << enemigo.getVida() << endl;

        }
        if (dados == 2) {
            cout << "Heroe punch" << endl;
            enemigo.quitarVida(4);
            cout << "Vida: " << enemigo.getVida() << endl;
        }
    }

};

int main() {
    Heroe bueno;
    Villano malo;

    bueno.go( malo );
    malo.go( bueno );

    return 0;
}
