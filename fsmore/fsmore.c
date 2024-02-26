/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */


#include<stdio.h>
#include<stdlib.h>

void fsmore(const char *file){
    FILE *open=fopen(file,"r");
    if(open==NULL){
        fprintf(stderr,"%s IS READ AS NULL\n", file);
        exit(1);
    }
    printf("\n");
    char temp;
    while((temp=fgetc(open))!=EOF){
        putchar(temp);
        if(temp=='\n'){
            printf("\n---------PRESS ANY KEY TO CONTINUE---------\n");
            getchar();
        }
    }
    fclose(open);
    printf("\n\n---------TASK COMPLETED---------\n");
}