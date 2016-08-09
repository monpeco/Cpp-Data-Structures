#include <iostream>
#include <string.h> //strcpy
using namespace std;


  
int main (int argc, char* argv[]) {
   char linea[1000] = "";
   char nombre[100] = "";
   int i = 0;
   cout << "argv[1]: " << argv[1] << endl;
   
   while(argv[1][i] != '.'){
        nombre[i] =  argv[1][i];
        i++;
   }
   cout << "nombre: " << nombre << endl;
   
   
cout << "ORIGEN_PATH=`pwd`\n\
EJECUTABLE=\"" << argv[1] << "\"\n\
LOG_PATH=\"$ORIGEN_PATH\"\n\
ARCHIVO_LOG=\"$LOG_PATH/$EJECUTABLE.log\"\n\
echo \"===========================================================\" > $ARCHIVO_LOG\n\
echo \"INICIO Proceso $EJECUTABLE.exe :\"`date \"+%d-%m-%Y at %H:%M\":%S` >> $ARCHIVO_LOG\n\
echo \">>>> Ejecutando Proceso \" $EJECUTABLE\".exe\" >> $ARCHIVO_LOG\n\
/home/batch/exp/expesval/obj/$EJECUTABLE.exe " << argv[2] << " >> $ARCHIVO_LOG\n\
echo \"FIN Proceso $EJECUTABLE.exe :\"`date \"+%d-%m-%Y at %H:%M\":%S` >> $ARCHIVO_LOG\n\
echo \"===========================================================\" >> $ARCHIVO_LOG\n\
echo \"\" >> $ARCHIVO_LOG\n\n" << endl ;
   return 0;
}