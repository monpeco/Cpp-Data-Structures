#include <stdio.h>
#include <stdlib.h>

int cantFetch, lFecIni, lFecFin, iCont;
;
long    LeeClientes;

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

FetchCursorPrincipal()
{
    LeeClientes= 0;
    strSel01[0].cod_empresa = 1;
    strSel01[0].nro_suministro = 234;
    
    strSel01[1].cod_empresa = 1;
    strSel01[1].nro_suministro = 678;
    
    strSel01[2].cod_empresa = 1;
    strSel01[2].nro_suministro = 999;
    
    if(LeeClientes>0) return(1);
    return(0);
}

main(argc,argv)
int argc;
char **argv;
{
    cantFetch=100;
    strSel01=(struct SALSSB0001*)malloc(sizeof(struct SALSSB0001) * cantFetch);
    lFecIni = 1;
    lFecFin = 5;
    while (lFecIni<=lFecFin)
    {
        while(FetchCursorPrincipal())
        {
            for(iCont=0;iCont<LeeClientes;iCont++)
            {
                
            }
        }
        lFecIni++;
    }
        
    printf("cod_empresa:\t[%d]\n", strSel01[0].cod_empresa);
    printf("nro_suministro: [%ld]\n", strSel01[0].nro_suministro);
    printf("cod_empresa:\t[%d]\n", strSel01[1].cod_empresa);
    printf("nro_suministro: [%ld]\n", strSel01[1].nro_suministro);
    printf("cod_empresa:\t[%d]\n", strSel01[2].cod_empresa);
    printf("nro_suministro: [%ld]\n", strSel01[2].nro_suministro);    
    printf("OK\n");
}