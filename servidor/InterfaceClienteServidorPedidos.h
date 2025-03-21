#ifndef _INTERFACECLIENTESERVIDORPEDIDOS_H_RPCGEN
#define _INTERFACECLIENTESERVIDORPEDIDOS_H_RPCGEN

#include <rpc/rpc.h>
#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXIDENTIFICACION 20

struct nodo_hamburguesa {
    int cantidadIngredientesExtra;
    int tipoHamburguesa;
    char nombreHamburguesa[MAXIDENTIFICACION];
};
typedef struct nodo_hamburguesa nodo_hamburguesa;

struct cocinero {
    int noCocinero;
    bool ocupado;
    nodo_hamburguesa objHamburguesaAPreparar;
}; 
typedef struct cocinero cocinero;

extern cocinero vectorCocineros[3];

#define autorizar_usuarios 0x20000001
#define autorizar_usuarios_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define generarTurno 1
extern  int * generarturno_1(nodo_hamburguesa *, CLIENT *);
extern  int * generarturno_1_svc(nodo_hamburguesa *, struct svc_req *);
extern int autorizar_usuarios_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define generarTurno 1
extern  int * generarturno_1();
extern  int * generarturno_1_svc();
extern int autorizar_usuarios_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nodo_hamburguesa (XDR *, nodo_hamburguesa*);

#else /* K&R C */
extern bool_t xdr_nodo_hamburguesa ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTERFACECLIENTESERVIDORPEDIDOS_H_RPCGEN */