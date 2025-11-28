#include<stdio.h>
#include<string.h>
int main(){
  FILE *file;
  char name[ ]="Rubaba Binte Mahbub";
  int len=strlen(name);
 
  file=fopen("test.txt","w");
  
  if(file==NULL){
    printf("File doesn't exist.");
  }
  else{
  printf("The file is opened.\n");
  for(int i=0;i<len;i++){
    fputc(name[i],file);
  }
  fputs("\n",file);//যা print করতে হবে সেটা সামনে। পরে যেখানে print হবে। 
	fputs(name,file);
  fputs("\n",file);
	fprintf(file,"%s",name);
  fputs("\n",file);
	fwrite(name,sizeof(char),strlen(name),file);

  printf("File is written successfully \n");
  fclose(file);
  }
  return 0;
}
// fputc()→Needs loop. Prints 1 
character at for 1 index.
// fputs()→Doesn't need loop. Prints 
full string in one take. Simplest. 
// fprintf()→For formatted writing. 
// fwrite()→Fastest method. Binary
safe writing. Good for binary files 
or large data blocks.
