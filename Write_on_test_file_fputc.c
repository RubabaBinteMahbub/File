/*write mode এ open করলাম। তাই test
নামের ফাইলটা যদি already থেকে থাকে আর
তাতে যদি কিছু আগে থেকে লেখা থাকে, তাহলে
এখন নতুন করে কিছু লিখলে তা আগেরটার উপর
overwrite হবে। অর্থাৎ আগের লেখাটার জায়গায়
নতুন লেখা দেখাবে।*/
/*আর যদি আগে থেকে test নামে কোনো
ফাইল না থাকে তাহলে test নামের একটা ফাইল
crate করে সেটাতে write করতে সাহায্য করবে।*/
/*fputc() দিয়ে ১টা করে character ফাইলে
write করা যায়।*/
/*In file,write→print and read→scan*/
#include<stdio.h>
#include<string.h>
int main(){
  FILE *file;
  char name[20]="Rubaba Binte Mahbub";
  int len=strlen(name);
  
/*আমার target হলো এখন আমার নামটাকে
test নামের ফাইলটাতে লিখা বা প্রিন্ট করা অর্থাৎ
রিড করা। তবে একবারে না, একটা একটা করে
character। তাই ব্যবহার করব fput() ফাংশন।*/
 
  file=fopen("test.txt","w");
  
  if(file==NULL){
    printf("File doesn't exist.");
  }
  else{
    printf("The file is opened.\n");
    for(int i=0;i<len;i++){
      fputc(name[i],file);
      /*এই ফাংশনের সিনট্যাক্সের ১ম প্যারামিটার
      যা প্রিন্ট হবে তা। আর ২য় প্যারামিটার যেখানে
      প্রিন্ট করতে চাই সেটা(এখানে file পয়েন্টারে)।*/
    }
    printf("File is written successfully.\n");
    /*printf() এর লেখাগুলো দেখতে পাবো শুধু 
    compiler এ কোডটা রান করলে। তার fprintf(),
    fputc() এগুলোর লেখাগুলো দেখতে পাব শুধু test
    নামক ফাইলটার ভিতরে।*/
    fclose(file);
  }
  return 0;
}
