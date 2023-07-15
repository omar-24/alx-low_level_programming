#!/bin/bash
/**
 * main - entry point
 *
 * return: Always 0 (success)
 */

int main(void){
        printif("size of a char %d byte(s) \n", sizeof(char));
	 printif("size of an int %d byte(s) \n", sizeof(int));
	 printif("size of a long int %d byte(s) \n", sizeof(long int));
	 printif("size of a long long int %d byte(s) \n", sizeof(long long int));
	 printif("size of a float %d byte(s) \n", sizeof(float));
	 return (0);
}
