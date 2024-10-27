#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if (age<18){
		printf("You're not eligible for voting");
	}
	else{
		printf("You're eligible for voting");
	}
}
