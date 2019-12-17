#include <stdio.h>
/*Macros del pograma*/
#define NUM_BITS (int)0x8 
/*Enumeraciones del programa*/
enum e_Textos{

	e_Texto1 = 1,
	e_Texto2 = 2,
	e_Texto3 = 3,
	e_Texto4 = 4,
	e_Texto5 = 5
};
typedef enum e_Textos t_Textos;
/*Prototipos del programa*/
void Textos(t_Textos Value);
void Convierte(int *pValue);
int pow_two(int Value);
/*main*/
int main(void)
{
	int byte_value[8] = {};
	int count = 0;
   
    while(NUM_BITS!=count)
    {
        Textos(e_Texto1);
        scanf("%d",&byte_value[count]);
        if((0 == byte_value[count]) ||(1 ==byte_value[count]))
        {
            count++;
        }
        else
        {
            Textos(e_Texto2);
        }
    }
    Textos(e_Texto3);
    for(int i=0; i<NUM_BITS; i++)
        printf("%d",byte_value[i]);
    Textos(e_Texto5);
    Convierte(byte_value);
 return 0;
}
/*Funciones*/
/*Funcion Textos*/
void Textos(t_Textos Value)
{
	switch(Value)
	{
		case e_Texto1:
			printf("Introduce tu valor en Binario  8bits: ");
		break;
		case e_Texto2:
			printf("Valor incorrecto vuelve a introducir.\n");
		break;
		case e_Texto3:
			printf("Los valores en Little endian son los siguientes: ");
		break;
		case e_Texto4:
			printf("El valor en decimal es el siguiente: ");
		break;
		case e_Texto5:
			printf("\n\n");
		break;
		defaut:
			printf("Opcion erronea");
		break;
	}
}
/*Funcion Convierte*/
void Convierte(int *pValue)
{
    int *plocal = pValue;
    int suma = 0;
    for(int i=0; i<NUM_BITS; i++)
    {
        suma = (suma + ((*plocal)*(pow_two(i))));
        plocal++;
    }
    Textos(e_Texto4);
    printf("%d",suma);
}
/*Funcion pow_two*/
int pow_two(int Value)
{
    int acumulador = 1;
    if (1!=Value)
    {
        for(int i = 0; i < Value; i++)
        {
        acumulador = acumulador*2;
        }
    }
     return acumulador;   
}

/*AUTOR OCELOTE 16-DIC-2019*/
