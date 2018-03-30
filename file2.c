#include <stdio.h>
#define alturaMaxima 225

typedef struct{
    int peso; //Peso em kg
    int altura; //Altura em Cm
} PesoAltura;


int main()
{
    printf("Hello, World!\n");
    typedef int CHAVE;
    
    
    PesoAltura pessoa1;
    pessoa1.peso = 20;
    pessoa1.altura = 30;
    
    printf("Peso: %i, Altura %i. ", pessoa1.peso, pessoa1.altura);
    
    if(pessoa1.altura > alturaMaxima) printf("Altura Acima da maxima \n");
    else printf("Altura abaixo da maxima \n");
    return 0;
}