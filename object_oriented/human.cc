#include <iostream>
using namespace std;

class Human{
	protected:
		int age;
		int height;
		
	public:
		Human(int height, int age){
			this->height = height;
			this->age = age;
		}

		int getAge(){
			return age;		
		}

		int getHeight(){
			return height;
		}
};

class Boy: public Human{
	public:
		Boy(int height, int age): Human(height, age) {}
		int getHeight(){
			return height+5;
		}
};

class Girl: public Human{
	public:
		Girl(int height, int age): Human(height, age) {}
		int getAge(){
			return age-2;
		}
};

int main(){

	Boy b(93,34);
	Girl g(93, 34);
	Human h(93, 34);
	
	cout << b.getAge() +
		  b.getHeight() +
		  g.getAge() +
		  g.getHeight() + 
		  h.getAge() +
		  h.getHeight();
	
	return 0;
}