/*Declaracion de datos a transferir entre el cliente y el servidor*/

/*Definicion de las operaciones que se pueden realizar*/
program autorizar_cocineros{
    version autorizar_cocineros_version{
        int seleccionarIdCocinero(int idCocinero)=1;
        int terminarPedido(int idCocinero)=2;
    }=1;
}=0x20000003;