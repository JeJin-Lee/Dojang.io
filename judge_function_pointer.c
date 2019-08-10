#include <stdio.h>
#include <string.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int sub(int *a, int *b)
{
    return *a - *b;
} 

int mul(int *a, int *b)
{
    return *a * *b;
} 

int div(int *a, int *b)
{
    return *a / *b;
}

int main()
{
    char funcName[10];
    int num1, num2;

    scanf("%s %d %d", funcName, &num1, &num2);

int (*fp)(int *, int *);
  if(strcmp(funcName,"add")==0)
    fp = add;

  else if(strcmp(funcName,"sub")==0)
    fp = sub;

  else if(strcmp(funcName,"mul")==0)
    fp = mul;

  else
    fp = div;
    
 printf("%d\n", fp(&num1, &num2));

    return 0;
}
