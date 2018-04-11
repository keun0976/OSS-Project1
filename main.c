#include <stdio.h>
int mul(int a, int b);
int div(int a, int b);
int add(int a, int b);
int sub(int a, int b);

int mul(int a, int b){
 return a * b;
}
int div(int a, int b){
 return a / b;
}
int add(int a, int b){
 return a + b;
}
int sub(int a, int b){
 return a - b;
}

int main(){
int a,b;
char c;
 
for(int i =0; i <5; i++){
  scanf("%d %c %d",&a,c,&b);
 if(c == '+'){
  printf("%d + %d = %d\n",a,b,add(a,b));
 }
  else if(c == '-'){
  printf("%d - %d = %d\n",a,b,sub(a,b));
 }
  else if(c == '*'){
  printf("%d * %d = %d\n",a,b,mul(a,b));
 }
 else if(c == '/'){
  printf("%d / %d = %d\n",a,b,div(a,b));
 }
 
}
 
}
