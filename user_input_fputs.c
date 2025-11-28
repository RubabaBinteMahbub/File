#include<stdio.h>
#include<string.h>
int main(){
  FILE *file;
  char name[20];
  file=fopen("test.txt","w");
  if(file==NULL){
    printf("File doesn't exist.\n");
  }
  else{
    printf("The file is opened.\n");
    printf("Enter your full name : \n");
    fgets(name,20,stdin);
    name[strcspn(name,"\n")]='\0';
    
    fputs(name,file);
    
    fclose(file);
  }
  
  return 0;
}
