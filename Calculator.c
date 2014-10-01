#include <stdio.h>

void menu (){
	printf("***Calculator\n");
	printf("1 for Summation\n");
	printf("2 for Division\n");
	printf("3 for Subtraction");
	printf("4 for Multiplication\n");
	printf("0 for Exit\n");
}

double summation(int x, int y){
	return x+y;
}

double division (int x, int y){
	if (x==0){
		printf("Y cannot be 0!\n");
	}
	else return (double)x/y;
	
}

double subtraction(int x, int y){
	return x-y;
}

double multiplication(int x, int y){
	return x*y;
}

int main (int argc, const char*argv[]){
	
	double num1, num2;
	int choice;
		
	menu();
	printf("Enter your choice: \n");
	scanf("%d", &choice);
	
	while(choice !=0)	{
		
	if(choice==1){
		printf("Enter first value: \n");
		scanf("%lf", &num1);
		printf("Enter second value: \n");
		scanf("%lf", &num2);
		printf("The result is: %lf\n", summation(num1, num2));
	}
	else if(choice==2){
		printf("Enter first value: \n");
		scanf("%lf", &num1);
		printf("Enter second value: \n");
		scanf("%lf", &num2);
		printf("The result is: %lf\n", division(num1, num2));
	}
	else if(choice==3){
		printf("Enter first value: \n");
		scanf("%lf", &num1);
		printf("Enter second value: \n");
		scanf("%lf", &num2);
		printf("The result is: %lf\n", subtraction(num1, num2));
	}
	else if(choice==4){
		printf("Enter first value: \n");
		scanf("%lf", &num1);
		printf("Enter second value: \n");
		scanf("%lf", &num2);
		printf("The result is: %lf\n", multiplication(num1, num2));
	}
	else if (choice == 0) {
		printf("BYE!\n");
	}
 }
	return 0;
}
