#include <iostream>
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor
      Line(double len,  double lev);  // This is the Constructor using Initialization Lists
      double getLevel( void );

   private:
      double length;
      double level;
};
 
// Member functions definitions including constructor
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}

//Constructor using Initialization Lists to Initialize Fields
Line::Line( double len, double lev): length(len), level(lev) {
   cout << "Object is being created, length = " << len << endl;
}
 
void Line::setLength( double len ) {
   length = len;
}
 
double Line::getLength( void ) {
   return length;
}

double Line::getLevel( void ) {
   return level;
}

// Main function for the program
int main( ) {
   Line line(10.0);
   Line line2(12.0, 1.0);
 
   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;
   cout << "Length of line2 : " << line2.getLength() <<endl;
	
   // set line length again
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;

   cout << "Level of line2 : " << line2.getLevel() <<endl;
 
 
   return 0;
}