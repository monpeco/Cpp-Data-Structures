#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void muestra_parametrizacion()
{
    printf("Error Parametros.\n");
    printf("Version :SEP/2016\n");
    printf("Uso:\n");
    printf("manda_emailx.exe\n");
    printf("<from_mail><from_name><rcpt_mail><rcpt_name><subject_m><tipo_mail><<html_file>|<text_file> [<attach_1><attach_2>...<attach_n>]>\n");
    printf("Donde :\n");
    printf("<from_mail>    : e-mail Enviante\n");
    printf("<from_name>    : Nombre Enviante\n");
    printf("<rcpt_mail>    : e-mail Destinatario\n");
    printf("<rcpt_name>    : Nombre Destinatario\n");
    printf("<subject_m>    : Texto del Asunto\n");
    printf("<tipo_mail>    : HTML o TEXT\n");
    printf("                 HTML  <html_file>   : Nombre del Fichero que contiene codigo HTML\n");
    printf("                 TEXT  <text_file>   : Nombre del Fichero que contiene texto para el contenido del mail\n");
    printf("                       <attach_1>    : Archivo Adjunto 1\n");
    printf("                       <attach_2>    : Archivo Adjunto 2\n");
    printf("                       .........\n");
    printf("                       <attach_n>    : Archivo Adjunto n\n");
    printf("\n\n");
}

void envio_mail(int argc, char *argv[]){
	char command[5000];
	char command_aux[5000];

	memset(command, '\0', sizeof(command));
	memset(command_aux, '\0', sizeof(command_aux));

	sprintf(command, "cat %s | mailx -S smtp=smtp-mi.risorse.enel -r 'centro_virtual@empresa.com' -s 'Informe de Detalle de Facturacion'", argv[7]);
	
	if (argv[8] != NULL){
		sprintf(command_aux, " -a %s", argv[8]);
		strcat(command, command_aux);
		memset(command_aux, '\0', sizeof(command_aux));
	} 
	
	sprintf(command_aux, " -v '%s (%s)' >/dev/null 2>&1 ", argv[3], argv[4]);
	strcat(command, command_aux);

	system(command);
	
}
int main(int argc, char *argv[])
{
    if (argc < 8)
    {
       muestra_parametrizacion();
       exit(1);
    }

	envio_mail(argc, argv);

    exit(0);
}

