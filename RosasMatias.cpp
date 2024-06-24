//RosasMatias.cpp
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  #include <unistd.h>
  #define RED     "\033[1;31m"
  #define BLUE    "\033[1;34m"
  #define RESET   "\033[0m"
void verificacion(){

}

void operarios(int operario, int tipo, int cantidad){
    int matriz[6] = {1, 2, 3, 4, 5, 6};
    while(1){
     printf(RED"De que operario quiere saber los datos\n"RESET);
     printf(BLUE"Los operarios solo pueden ser 1, 2, 3, 4, 5 o 6\n"RESET);
     scanf("%d", &operario);
     if(operario >= 1 || operario <=6){
     printf(BLUE"Ingrese el tipo de alfajor trabaja el operario\n"RESET);
     printf(RED"Sabiendo que 0 es chocolate, 1 es dulce de leche, 2 es fruta y 3 es mixto\n"RESET);
     scanf("%d", &tipo);
     if(tipo == 0){
        printf(BLUE"Ingrese la cantidad de alfajores que elaboro\n"RESET);
         scanf("%d", &cantidad);
         printf(RED"El operario %d, elabora alfajores de chocolate, cantidad elaborada: %d\n"RESET, operario, cantidad);
     }
     else if(tipo == 1){
        printf(BLUE"Ingrese la cantidad de alfajores que elaboro\n"RESET);
         scanf("%d", &cantidad);
         printf(RED"El operario %d, elabora alfajores de dulce de leche, cantidad elaborada: %d\n"RESET, operario, cantidad);
     }
     else if(tipo == 2){
        printf(BLUE"Ingrese la cantidad de alfajores que elaboro\n"RESET);
         scanf("%d", &cantidad);
         printf(RED"El operario %d, elabora alfajores de fruta, cantidad elaborada: %d\n"RESET, operario, cantidad);
     }
     else if(tipo == 3){
        printf(BLUE"Ingrese la cantidad de alfajores que elaboro\n"RESET);
         scanf("%d", &cantidad);
         printf(RED"El operario %d, elabora alfajores mixtos, cantidad elaborada: %d\n"RESET, operario, cantidad);
     }
     else{
         printf(RED"Ese tipo de alfajor no existe\n"RESET);
     }
     }
     else{
         printf(RED"Ese operario no existe\n"RESET);
     }
}
}

int main() {
    int alfajor;
    int operario;
    int tipo;
    int cantidad;
    operarios(operario, tipo, cantidad)
}
