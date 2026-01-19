#include <stdio.h>

int main() {
  
  // vairable 
  char name[30];
  int score;
  
  // input 
  printf("Enter student name: "); // show message nov terminal 
  scanf("%29s", name); // input name var 
  // ban dara name
  printf("Enter Socre:"); 
  scanf("%d", &score);

  // ban score 85
  // out put 

  // jea messge 
  printf("/n--- Student Info ---\n");
  printf("Name = %s\n" , name);
  printf("Score = %d\n" ,score);
  
  return 0;

}