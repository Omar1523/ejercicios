#include <stdio.h>

 int main()
  {
    float pre, npr;
    printf("ingresa el precio del producto: ");
    scanf("%f", &pre);

    if(pre  >= 1500)
    {
      npr = pre * 1.11;
    printf("\nnuevo precio: %7.2f", npr);
return 0;
    }
else {
    printf("\nDebes ingresar un precio mayor o igual a 1500");
return 0;
}
    }