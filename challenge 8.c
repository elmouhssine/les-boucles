#include <stdio.h>

    void enchonge(int A,int B){
        int x ;
        x=B;
        B=A;
        A=x;
        printf("\n A:%d",A);
        printf("\n B:%d",B);
    }

int main()
{int A,B;

    printf("entre num A");
    scanf("%d",&A);
    printf("entre num B");
    scanf("%d",&B);

enchonge(A,B);

    return 0;
}
