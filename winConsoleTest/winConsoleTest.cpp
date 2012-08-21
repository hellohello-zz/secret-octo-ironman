// winConsoleTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
/***
refer to <href="http://book.51cto.com/art/201208/353867.htm"/>
 */
void print();

int main(int argc, char* argv[])
{
	int a = 1;
    int b = 4;
    char ch ='2';
    int arr[]={11,13,34,13,144,4343};
    print();
    //printf("Hello world!\n");
    return 0;
}

void print(){
    unsigned int _ebp;
    __asm{
        mov _ebp,ebp;
    }
    //int* p =(int*)(_ebp-4-4-4-6*4);
	int *p=(int *)(*(int *)_ebp-4-4-4-6*4); 
    for(int i=0;i<6;i++){
        printf("%d\t",p[i]);
    }
}
