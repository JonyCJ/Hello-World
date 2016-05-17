#include <stdio.h>

void ord (int *num1, int *num2);



main()

{

  int numeros[10];

  int i,j,n;



  printf("Establecer el rango del array: \n");

  scanf("%d", &n);

  for (i=0;i<n;i++){

                    printf("Escriba un número");

                    scanf("%d",&numeros[i]);



      }

      ord(&numeros[0], &n);



}



void ord (int *num1, int *num2){

int i, j, aux;

for(i=0;i<*num2-1;i++)

  {

   for(j=i+1;j<*num2;j++)

   {

       if(*(num1+i)<*(num1+j))

       {

           aux=*(num1+i);

           *(num1+i)=*(num1+j);

           *(num1+j)=aux;

       }

   }

  }

  for (i=*num2-1;i>=0;i--){

  	  aux = *(num1+i);

      printf("%d\n",aux);

  }

}
