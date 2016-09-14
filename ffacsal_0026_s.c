#include <stdio.h>
#include <stdlib.h>

int     cantFetch;

struct SALSSB0001
{
    int     cod_empresa;
    long    nro_suministro;
    char    recorr1[7];
    char    id_servicio[21];
    double  monto;
    double  saldo;
    int     corr_evento;
    char    tip_evento[3];
    char    tip_evento_modif[4];
    char    fec_evento[20];
    char    categoria[5];
    char    est_suministro[5];
    char    cen_operativo1[5];
    char    tarifa[51];
    int     antiguedad_saldo;
    char    fec_modif[20];
    char    referencia[20];
};
struct SALSSB0001 *strSel01;

main(argc,argv)
int argc;
char **argv;
{
    cantFetch=100;
    strSel01=(struct SALSSB0001*)malloc(sizeof(struct SALSSB0001) * cantFetch);
    
    
    printf("OK\n");
}