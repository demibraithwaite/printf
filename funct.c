#include "main.h"                                   
                                                    
/**                                                 
* funct - the function is a menu.                   
* @args: variadic argument.                         
* @symbol: inputs character.                        
*                                                   
* Return: a string that will contact to the buffer. 
*/                                                  
                                                    
char *funct(const char symbol, va_list args)        
{                                                   
        char *tmp_str;                              
        sir select[] = {                            
                {'c', print_str_char},              
                {'i', print_str_integer},           
                {'d', print_str_integer},           
                {'l', print_str_integer},           
                {'%', print_str_percent},           
                {'s', print_str_string},            
                {00, NULL}                          
        };                                          
                                                    
        int i;                                      
                                                    
        i = 0;                                      
        while (select[i].flag != symbol && i < 7)   
        {                                           
                i++;                                
        }                                           
        tmp_str = select[i].fn(args);               
        return (tmp_str);                           
}
