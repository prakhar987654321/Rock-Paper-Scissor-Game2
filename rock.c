#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  //taking user choice as input;
  //rock--0;
  //paper--1;
  //seasor--2;
  int userChoice,computerChoice;
  printf("Enter your choice-->\n0 for rock\n1 for paper\n2 for scissors\n");
  scanf("Enter your userChoice no %d",&userChoice);
  srand(time(0));
  computerChoice=rand()%3;//default is rock

  printf("The computer choice picked is %d\n",computerChoice);

  //comparison/relation checking
  if(userChoice==0&&computerChoice==0){
    printf("It is a tie\n");
  }
  else if(userChoice==0&&computerChoice==1){                                                       
    printf("computer wins\n");
  }
  else if(userChoice==0&&computerChoice==2){
    printf("user will win\n");
  }
  else if(userChoice==1&&computerChoice==0){
    printf("user will win\n");
  }
  else if(userChoice==1&&computerChoice==1){
    printf("It is a tie\n");
  }
  else if(userChoice==1&&computerChoice==2){
    printf("computer will win\n");
  }
  else if(userChoice==2&&computerChoice==0){
    printf("computer will win\n");
  }
  else if(userChoice==2&&computerChoice==1){
    printf("user will win\n");
  }
  else if(userChoice==2&&computerChoice==2){
    printf("It is a tie\n");
  }
  else{
    printf("Invalid choice\n");
  }
  
  





}