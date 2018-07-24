#include <stdio.h>
#include "color.h"
void input();
void output();
void sort(int[],int);
int number[10];

int main() {

	input();
	sort(number,10);
	output();
	
	getch();
	return 0;
}
void input(){
	int i = 0;

	while(i<10){
	 printf("Enter number:%d ",i);
	 textcolor(COLOR_BLUE,COLOR_BLACK);	 
	 scanf("%d",&number[i]);
	 resetcolor();
	 i++;
	}
}
void output(){
	textcolor(COLOR_RED,COLOR_BLACK);
	printf("\n%d",number[8]);
	resetcolor();
}
void sort(int number[],int n){
	int j,k;
	int i = 0;
	int temp = 0;
	for(j = 0; j< 9; j++){
		for(k = 0; k < 9-j; k++){
			if(number[k] > number[k+1]){
			temp = number[k];
			number[k] = number[k+1];
			number[k+1] = temp;
			}
		}
	}
}
