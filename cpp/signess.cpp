#include <stdio.h> 
  
int main() 
{ 
  
  int chr = 97; 
  unsigned char i = chr; 
  printf("unsigned char: %c\n", i); 
  
  unsigned char age;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	printf("Input age is: %d\n",age);
  
  int chr = -1; 
  unsigned char i = chr; 
  printf("unsigned char: %c\n", i); 
    
  return 0; 
} 
