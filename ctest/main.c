#include <stdio.h>
#include <stdlib.h>
void print(){
    unsigned int _ebp;
    __asm{
        mov _ebp,ebp;
    }
    int *p =(*int)(*(int*)_ebp-4-4-4-6*4);
    for(int i=0;i<6;i++){
        printf("%d\t",p[i]);
    }
}

int main()
{
    int a;
    int b;
    char ch;
    int[] arr={11,13,34,13,144,4343};
    print();
    printf("Hello world!\n");
    return 0;
}
