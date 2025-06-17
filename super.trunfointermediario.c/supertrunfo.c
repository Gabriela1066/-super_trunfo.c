#include <stdio.h>

int main(){
 float temperatura, umidade;
 unsigned int estoque, estoquemin = 100;
 
 printf("entre com a temperatura:\n");
 scanf("%f, &temperatura");
 printf("entre com a humidade: \n");
 scanf("%f, &umidade");
 printf("entre com o estoque: \n");
 scanf("%u, &estoque");

 if(temperatura > 30){
    printf("temperatura está alta \n");
 } else {
    printf("temperatura está dentro dos parâmetros \n");
 }

 if (umidade > 50){
    printf("umidade elevada \n");
 } else {
    printf("umidade está dentro dos parametros \n")
 }

 if (estoque < estoquemin){
    printf("estoque insuficiente \n");
 } else {
    printf("estoque está dentro do padrão \n");
 }
}