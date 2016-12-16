#include<iostream>
using namespace std;

class Animal{
    private:
        double weight;
        double height;
    public:
        Animal(double w, double h){
            weight = w;
            height = h;
        };
        friend void printWeight(Animal animal);
        friend class AnimalPrinter;

};


class AnimalPrinter
{
public:
    void print(const Animal& animal)
    {
        // Because of the `friend class AnimalPrinter;" declaration, we are
        // allowed to access private members here.
        std::cout << "Inside AnimalPrinter.print(): " << animal.weight << ", " << animal.height << std::endl;
    }
};

void printWeight(Animal animal)
{
    std::cout << animal.weight << "\n";
}


int main() {
    Animal animal(10,20);
    printWeight(animal);
    AnimalPrinter animalPrinter;
    animalPrinter.print(animal);
}