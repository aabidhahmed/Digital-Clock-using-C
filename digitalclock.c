#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
	int h,m,s;
	int d=1000;
	
	printf("Set time (12 hour format)\n");//taking input from the user
	printf("Enter the hour hand :\n");
	scanf("%d",&h);
	printf("Enter the minute hand :\n");
	scanf("%d",&m);
	printf("Enter the second hand :\n");
	scanf("%d",&s);
	
	if(h>12 || m>60 || s>60){  //checking if user input is valid
		printf("Invalid  inputs \n Please Enter in 12 hr format\n");
		exit(0);
	}
	printf("Digital Clock \n");
	while(1){ //infinite loop
		s++;
		if(s>59){
			m++;
			s=0;
			
		} 
		if(m>59){
			h++;
			m=0;
		}
		if(h>12){
			h=1;
			
		}
		printf(" %d : %d : %d\n",h,m,s);
		Sleep(d); //delays the output by 1000 ms
	}
}
