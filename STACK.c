#include <stdio.h>
#include <stdlib.h>
int stack[200], choice ,n, top, x, i;
//placing functions to perform various operations
void pop(void);
void push(void);
void display(void);

int main(){
 top=-1;
 printf("Enter the size of your stack(max=300)\n");
 scanf("%d",&n);
 printf("Below are stack operations by using arrays\n");
 printf("\n\t");
 printf("1.Push \n\t 2.Pop \n\t 3.display \n\t 4.Exit\n");

  //Using do while loop to execute the following code
  do{
        printf("Enter a choice: ");
        scanf("%d",&choice);
    //Using switch statements to examine the operations individually
           switch(choice){
           case 1:{
              push();
              break;
           }
           case 2:{
            pop();
            break;
           }
           case 3:{
             display();
             break;
           }
           case 4:{
            printf("You have just exited this program\n");
            break;
           }
           default:{
            printf("Please enter a value between 1 and 3\n");
           }
     }

  }
   while(choice!=4);
   return 0;
   //The main function of this code is over
}
//describing the above functions we have

//Describing the push operation
   void push(){
   if (top>=n-1){
    printf("Stack is full\n");
   }
   else{
    printf("Enter value to be added to stack\n");
    scanf("%d",&x);
    top++;
    stack[top]=x;
   }

   }

   //Describing pop operation
   void pop(){
   if(top <-1){
        printf("The stack has an under flow of elements\n");
       }else{
   printf("The element to be removed is %d\n",stack[top]);
    top--;
             }
    }

    //Describing displaying output
     void display(){
         if (top>=0){
            printf("The modified sttack is\n");
        //Using a for loop to iterate the stack
        for(i=top;i>=0;i--){
            printf("\n%d\n",stack[i]);
        }
         }
         else{
            printf("\nThe stack is empty");
         }
         printf("Enter next operations\n");
     }
