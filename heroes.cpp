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
        posx = 0;
        posy = 0;
        ki = 0;
        ganador = false;
    };
    Persona( int vida, int ki, int posx, int posy )
    {
        this->vida = vida;
        this->ki = ki;
        this->posx = posx;
        this->posy = posy;
    };


    void posi() {
        int x = 1 + rand() % 13;
        int y = 1 + rand() % 13;
        posx = x;
        posy = y;
    };

    void quitarVida(int danyo)
    {
        vida -= danyo;
    };   

    int getVida()
    {
        return vida;
    };

    int getposx() {
        return posx;
    };

    int getposy() {
        return posy;
    };

private:
    int posx;
    int posy;
    int vida;
    int ki;
    bool ganador;
};



class Villano : public Persona {
public:
    Villano():Persona(40, 0, 13, 14) {};

    bool go(Persona& enemigo) {
        int dados = (1 + rand() % 2);
        if (dados == 1) {
            enemigo.quitarVida(9);
            cout << "Villano da golpe" << endl;
            cout << "Vida: " << enemigo.getVida() << endl;
        }
        if (dados == 2) {
            enemigo.quitarVida(4);
            cout << "Villano da medio golpe" << endl;
            cout << "Vida: " << enemigo.getVida() << endl;
        }

    }
};



class Heroe : public Persona{
public:
    Heroe(): Persona( 40, 30, 1, 1) { };

    bool go(Persona& enemigo) {
        int dados = (1 + rand() % 2);
        if (dados == 1) {
            cout << "Heroe da golpe" << endl;
            enemigo.quitarVida(9);
            cout << "Vida: " << enemigo.getVida() << endl;

        }
        if (dados == 2) {
            cout << "Heroe da medio golpe" << endl;
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
