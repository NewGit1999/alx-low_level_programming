#include <stdio.h>                                                                                                          

/**                                                                                                                         
 *
 *  * main - list of natural numbers                                                                                           
 *
 *   * Return: Always 0.                                                                                                        
 *
 *    */                                                                                                                         

int main(void)                                                                                                              

{                                                                                                                           

	        int b, add = 0;                                                                                                     

		                                                                                                                            

		        for (b = 0; b < 1024; b++)                                                                                          

				        {                                                                                                                   

						                if ((b % 3) == 0 && (b % 5) == 0)                                                                           

									                        add+= b;                                                                                            

								        }                                                                                                                   

			        printf("%d\n", add);                                                                                                

				        return (0);
