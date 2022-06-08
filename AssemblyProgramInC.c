/**
 * @file AssemblyProgramInC.c
 * @author Md. Yousuf Ali (you@domain.com)
 * @brief WAP to add two numbers using assembly code
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// mot works here
#include<stdio.h>  
void main() {  
   int a = 10, b = 20, c;  
   
   asm {  
      mov ax,a  
      mov bx,b  
      add ax,bx  
      mov c,ax  
   }  
   
   printf("c= %d",c);  
} 
