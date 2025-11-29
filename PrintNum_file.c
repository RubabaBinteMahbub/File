#include<stdio.h>
int main(){
  FILE *file;
 
  file=fopen("Number.txt","w");
  
  if(file==NULL){
    printf("File doesn't exist.\n");
  }
  else{
    printf("The file is opened.\n");
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
      fprintf(file," %d",i);
    }
    fputs("\n",file);
    printf("File is written successfully.\n");
    fclose(file);
  }
  return 0;
}
