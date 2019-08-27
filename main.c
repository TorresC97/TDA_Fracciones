#include<stdio.h>
int main(){
    int a;
    printf("ingrese numero \n");
    scanf("%d",&a);
    /*int res;
    res = a /2;
    printf("resul : %d",res);*/
    if(a % 2== 0){
        printf("simplificado %d \n \n",a/2);
    }
    while (a % 2 != 1)
    {
                printf("\n simplificado %d",a/2);
            a++;
        /* code */
    }
    
}