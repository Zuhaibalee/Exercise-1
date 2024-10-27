#include<stdio.h>
int main(){
	int Maths;
	int Programming;
	int English;
	
	printf("Enter Marks of Maths: ");
	scanf("%d",&Maths);
	
	printf("Enter Marks of Programming: ");
	scanf("%d",&Programming);
	
	printf("Enter Marks of English: ");
	scanf("%d",&English);
	
	int total_marks = Maths + Programming + English;
	
	int average = total_marks / 2;
	
	if (average >= 90){
		printf("A Grade");
	}
	else if (average >= 80 && average < 90){
		printf("B Grade");
	}
	else if (average >= 70 && average < 80){
		printf("C Grade");
	}
	else if (average >= 60 && average < 70){
		printf("D Grade");
	}
	else if (average < 60){
		printf("You're Fail");
	}
	else{
		printf("Wrong Input");
	}
}
