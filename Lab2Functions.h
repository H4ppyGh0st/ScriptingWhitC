
#define MAX_LINE_LENGTH 1000
#define BUFFSIZE 256
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


char* extractWord(char* word , char* tipe, int presition, char* root)

{

    

      FILE *Fd;

      char fitxizen[30],palabra[30],texto[80];

      int i,tmp1,tmp2;
      
      bool go = true; 
      
      char buffer[BUFFSIZE+1];
      

      Fd=fopen(root,"r");

      if (Fd==NULL){

         printf("Error abriendo el fichero");
      }


      while (feof(Fd)==0 && go == true)

      {
            fgets(texto,80,Fd);

            for(i=0;i<strlen(texto);i++)

            {

               if (word[0]==texto[i])

               {

                  tmp1=0;

                  tmp2=i;

                  while ((word[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(word)))

                  {
                        tmp1++;

                        tmp2++;

                        if (tmp1==strlen(word)){
                        
                           printf("%s\n", tipe); 
                           
                           printf("%s",texto + (sizeof(word) + presition));
                           
        
                           fclose(Fd);
                           
                           return "";
                           
                           go = false; 
                           
                           break;
                           
                           }
                  }
               }
            }
      }

}


void extractMemorySize(char* miRoot){

    
    extractWord("VmRSS:", "-Rss: ", 0 , miRoot);
    extractWord("VmSize:", "-VSZ: ", 0 , miRoot);
    
    
}






