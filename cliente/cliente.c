/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "InterfaceClienteServidorPedidos.h"


void
autorizar_usuarios_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	nodo_hamburguesa  objHamburguesa;

#ifndef	DEBUG
	clnt = clnt_create (host, autorizar_usuarios, autorizar_usuarios_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	 /*DEBUG */

	printf("\n Digite el nombre de la hamburguesa: ");
	scanf("%s", objHamburguesa.nombreHamburguesa);
	printf("\n Digite el tipo de hamburghesa \n 1.Pequeña \n 2.Medio \n 3.Grande: \n ");
	scanf("%d", &objHamburguesa.tipoHamburguesa);
	printf("Digite la cantidad de ingrendientes extra: ");
	scanf("%d", &objHamburguesa.cantidadIngredientesExtra);

	result_1 = generarturno_1(&objHamburguesa, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("\n Cantidad de usuarios en la fila virual %d", (*result_1));
		printf("\n");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	int option; 

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	do{
		printf("=======MENU======== \n");
		printf(" 1. Enviar pedido \n");
		printf(" 2. Salir \n");
		printf("===============\n ");
		scanf("%d", &option);
		if(option == 1){
			autorizar_usuarios_1 (host);
		}else if(option == 2){
			exit(0);
		} 
		
		
	}while(1);

	
exit (0);
}
