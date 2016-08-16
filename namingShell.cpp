#include <iostream>
#include <string.h> //strcpy
#include <algorithm>
using namespace std;


  
int main (int argc, char* argv[]) {
    char linea[1000] = "";
    char nombre[100] = "";
    string orden = argv[2];
    string argumento = argv[3];
   
   int i = 0;
   while(argv[1][i] != '.'){
        nombre[i] =  argv[1][i];
        i++;
   }
   
    size_t fOrden = orden.find("-");
    cout << " fOrden: " << fOrden << endl ;
    if (fOrden<8) orden.replace(fOrden, string("-").length(), "neg");

    size_t fArgumento = argumento.find(" 12");    
    if (fArgumento<100) argumento.replace(fArgumento, string(" 12").length(), " 05");

cout << "\nORIGEN_PATH=`pwd`\n\
EJECUTABLE=\"" << nombre << "\"\n\
LOG_PATH=\"$ORIGEN_PATH\"\n\
ARCHIVO_LOG=\"$LOG_PATH/$EJECUTABLE.log\"\n\
echo \"===========================================================\" > $ARCHIVO_LOG\n\
echo \"INICIO Proceso $EJECUTABLE.exe :\"`date \"+%d-%m-%Y at %H:%M\":%S` >> $ARCHIVO_LOG\n\
echo \">>>> Ejecutando Proceso \" $EJECUTABLE\".exe\" >> $ARCHIVO_LOG\n\
/home/batch/exp/expesval/obj/$EJECUTABLE.exe " << argumento << " >> $ARCHIVO_LOG\n\
echo \"FIN Proceso $EJECUTABLE.exe :\"`date \"+%d-%m-%Y at %H:%M\":%S` >> $ARCHIVO_LOG\n\
echo \"===========================================================\" >> $ARCHIVO_LOG\n\
echo \"\" >> $ARCHIVO_LOG\n\n" << endl ;

cout << " Shell a crear:" << endl << " vi proceso" << orden << "_" << nombre << ".sh\n" << endl ;
   return 0;
}