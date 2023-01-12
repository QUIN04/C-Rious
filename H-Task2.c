 #include<stdio.h>
 int main (){
 // Program To Print The Sum Of Consecutive Odd numbers
 /* Algorithm:
 Firstly, I am going to enable the user input the value
 Then Print out the sequence of numbers
 Lastly, sum up the numbers */
 int i,n,sumOfOdd;
 printf("Enter a value: %d",n);// To get value of n from the user
 scanf("&d",n);
 for(i=1;i<=n;i+2)// This loop is used to generate the sequence of odd numbers before n
 {
     printf("%d\t",i);// Displays the odd numbers
     scanf("&d",i);
 }
 sumOfOdd = (n*(n+1))/2; //Formula to obtain sum
 printf("%d",n);
 return 0;

 }
