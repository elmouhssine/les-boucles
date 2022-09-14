#include <stdio.h>
#include <stdlib.h>
void somme(int a,int b ){
    int s;
    s=a+b;

    printf("le somme de %d est %d est %d\n",a,b,s);


    }
int main()

{int  a,b;
    printf("num a :");
    scanf("%d",&a);
     printf("num b :");
    scanf("%d",&b);

    somme(a,b);


    return 0;
}

