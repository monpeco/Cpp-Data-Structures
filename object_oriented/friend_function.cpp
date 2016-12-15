#include<iostream>
using namespace std;

class Animal{
    private:
        double weight;
        double height;
    public:
        Animal(double w, double h);
        friend void printWeight(Animal animal);

};

Animal::Animal(double w, double h){
    weight = w;
    height = h;
}

void printWeight(Animal animal)
{
    std::cout << animal.weight << "\n";
}


int main() {
    Animal animal(10,20);
    printWeight(animal);

}