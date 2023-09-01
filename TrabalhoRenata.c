#include<stdio.h>
#include<locale.h>

struct nums{
int maior, menor;
float media;
};

struct nums funcao(int p_num1, int p_num2){

struct nums calcula;


if (p_num1>p_num2){

calcula.maior=p_num1;
calcula.menor=p_num2;

}else{

calcula.maior=p_num2;
calcula.menor=p_num1;
}
calcula.media= (float) (p_num1+p_num2)/2;
 
return calcula;
}



main(){
setlocale(LC_ALL,"Portuguese");

int num1, num2;
struct nums resultado;

printf("Digite o primeiro número : ");
scanf("%d",&num1);
printf("Digite o segundo número : ");
scanf("%d",&num2);
resultado = funcao(num1, num2);

printf("O maior número é : %d\n",resultado.maior);
printf("O menor número é : %d\n",resultado.menor);
printf("A média é : %.1f",resultado.media);

}