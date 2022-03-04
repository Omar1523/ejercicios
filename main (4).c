#include <stdio.h>

 int main()
  {
    float pre, npr;
    printf("ingresa el precio del producto: ");
    scanf("%f", &pre);

    if(pre  <= 1500)
    {
      npr = pre * 1.8;
    printf("\nnuevo precio: %8.2f", npr);
return 0;
    }
else {
    printf("\nDebes ingresar un precio menor o igual a 1500");
return 0;
}
    }