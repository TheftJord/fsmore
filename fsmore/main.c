/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on February 25, 2024, 7:44 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fsmore.h"

/*
 * 
 */
int main(int argc, char** argv) {
    for(int i=0;i<argc-1;i++){
        fsmore(argv[i+1]);
    }
    if(argc==1){
        fprintf(stderr,"AN ERROR HAS OCCURRED");
        return 1;
    }
}

