#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char nombre [20];
  char cedula[14];
  char ciudad [10];
  char telefono [10];

  int opcion;

  printf("Nombre: ");
  gets(nombre);
  printf("Numero de Cedula: ");
  scanf("%s", cedula);
  printf("Direccion: ");
  scanf("%s", ciudad);
  printf("Numero de telefono: ");
  scanf("%s", telefono);
  printf("DETALLE\n");

  int c_llantas = 0;
  int p_llantas = 150;
  char det_llantas [10] = "Llantas";

  int c_freno = 0;
  int p_freno = 55;
  char det_freno [30] = "freno";

  int c_embrague = 0;
  int p_embrague = 180;
  char det_embrague [20] = "embrague";

  int c_faro = 0;
  int p_faro = 70;
  char det_faro [10] = "Faro";

  int c_radiador = 0;
  int p_radiador = 120;
  char det_radiador [10] = "Radiador";

  do{

    int llantas = 0;
    int frenos = 0;
    int embrague = 0;
    int faros = 0;
    int radiadores = 0;

    printf("Seleccione el producto que desea comprar\n");
    printf("1. Llantas\n");
    printf("2. Pastillas de freno\n");
    printf("3. embrague\n");
    printf("4. Faro\n");
    printf("5. Radiador\n");
    printf("6. Salir y Generar Factura\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
      case 1:

        printf("Cantidad que desea comprar: ");
        scanf("%d", &llantas);
        c_llantas+=llantas;
        break;

      case 2:

        printf("Cantidad que desea comprar: ");
        scanf("%d", &frenos);
        c_freno+=frenos;
        break;

      case 3:

        printf("Cantidad  que desea comprar: ");
        scanf("%d", &embrague);
        c_embrague+=embrague;
        break;

      case 4:

        printf("Cantidad  que desea comprar: ");
        scanf("%d", &faros);
        c_faro+=faros;
        break;

      case 5:

        printf("Cantidad  que desea comprar: ");
        scanf("%d", &radiadores);
        c_radiador+=radiadores;
        break;

      case 6:
        printf("Gracias por usar\n");
        break;

      default:
        printf("Incorrecto, vuelva a ingresar.");
        break;
    }
  }while(opcion!=6);

  int t_llantas = c_llantas*p_llantas;
  int t_freno = c_freno*p_freno;
  int t_embrague = c_embrague*p_embrague;
  int t_faro = c_faro*p_faro;
  int t_radiador = c_radiador*p_radiador;

  int subtotal = t_llantas + t_freno + t_embrague + t_faro + t_radiador;


  printf("___________________FACTURA__________________\n");
  printf("Nombre y Apellido: %s\n", nombre);
  printf("C.I.: %s\n", cedula);
  printf("Direccion: %s\n", ciudad);
  printf("Telf.: %s\n", telefono);
  printf("DETALLE\n");
  printf("Cant.\t Cod.\t Detalle\t\t p/u\t p/t\n");

  if(c_llantas>=1){
    printf("%d\t\t LLNT\t %s\t\t $%d\t $%d\n", c_llantas, det_llantas, p_llantas, t_llantas);
  }
  if(c_freno>=1){
    printf("%d\t\t KFRN\t %s\t\t $%d\t $%d\n", c_freno, det_freno, p_freno, t_freno);
  }
  if(c_embrague>=1){
    printf("%d\t\t KEMB\t %s\t $%d\t $%d\n", c_embrague, det_embrague, p_embrague, t_embrague);
  }
  if(c_faro>=1){
    printf("%d\t\t FARO\t %s\t\t\t $%d\t $%d\n", c_faro, det_faro, p_faro, t_faro);
  }
  if(c_radiador>=1){
    printf("%d\t\t RDDR\t %s\t\t $%d\t $%d\n", c_radiador, det_radiador, p_radiador, t_radiador);
  }
  printf("Subtotal:\t\t\t\t $%d\n", subtotal);
  int descuento;
  if(subtotal < 501){
    if(subtotal < 101){
      descuento=0;
      printf("Descuento 0%:\t\t\t -$%d\n", descuento);
    }else{
      descuento = subtotal*0.05;
      printf("Descuento 5%:\t\t\t -$%d\n", descuento);
    }
  }else{
    if(subtotal < 1000){
      descuento = subtotal*0.07;
      printf("Descuento 7%:\t\t\t -$%d\n", descuento);
    }else{
      descuento = subtotal*0.1;
      printf("Descuento 10%:\t\t\t -$%d\n", descuento);
    }
  }
  int des_total = subtotal - descuento;
  printf("Subtotal con descuento:\t $%d\n", des_total);
  int iva = subtotal*0.12;
  printf("Total iva 12%:\t\t\t +$%d\n", iva);
  int total = subtotal - descuento + iva;
  printf("Total: \t\t\t\t\t $%d\n", total);
  printf("_____________________________________________");
  return 0;
}