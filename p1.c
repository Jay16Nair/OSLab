#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>

int main(){
    fork();
    printf("Hi\n");
    return 0;
}