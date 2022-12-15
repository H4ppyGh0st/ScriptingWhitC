#include <stdio.h>
#include <string.h>
#include "Lab2Functions.h"

int main(int argc, char *argv[])

{


    if (argc != 2 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-help") == 0)
    {
        printf("./[nombre (Nombre que le hayas asigando a el ejecutable)] [PID]" ); 
        return 0; 
    }
    
    
    
    
    char root[30]; 
    
    char* parameter = argv[1]; 
   
    strcat(root,"/proc/"); 
    
    strcat(root,parameter);
    
    strcat(root, "/status");
      
    extractMemorySize(root);
  
   

    
    
      
   

    return 0;
    
}
