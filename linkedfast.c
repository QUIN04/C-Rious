#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
int matricule;
float weight;	
char name[30];

float height;
struct student*next;}
*head;
void insert(int matricule,char*name,float weight,float height)
{

struct student*student=(struct student*)malloc(sizeof(struct student));	
student->matricule=matricule;
strcpy(student->name,name);
student->height=height;
student->next=NULL;	
	
if (head==NULL){
/*if head equals null,set student as new head*/
	head=student;
}
else{
//if list is not empty,insert student in the beginning of the head 
	student->next=head;
	head=student;
}
}

/*this function is used to display information*/

void display()
{

struct student*marie=head;
while(marie!=NULL){
printf("matricule number:%d\n",marie->matricule);
printf("name:%s\n",marie->name);

printf("height:%f\n",marie->height);
printf("weight:%f\n",marie->weight);
marie=marie->next;
}
}
int main(){
head=NULL;
int choice;
int matricule;
char name[40];
float height,weight;
printf("enter 1 to insert students information,2 to display information");
do{/*
	
	printf("enter choice");
	scanf("%d",&choice);*/
	switch(choice){
		case 1:
			printf("enter name:\n");
			scanf("%s",&name);
			
			printf("enter matricule:\n");
			scanf("%d",&matricule);		
			printf("enter height:\n");
			scanf("%f",&height);	
			printf("enter weight:\n");		
			scanf("%f",&weight);
			break;
		case 2:
			display();
			break;
		//default:
			//printf("please enter number bet");
}
}while (choice!=0);
return 0;
}


	
	
	
	
	
	
	
	





























