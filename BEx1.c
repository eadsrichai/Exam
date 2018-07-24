#include<stdio.h>
#include<string.h>
#include"color.h"
void sort(char[]);
char msg1[100];
int main(){
	char msg[100];
	
	
	printf("Enter message : ");
	gets(msg);

	int len = strlen(msg);
	int i = 0;

	char msg2[100];
	int k = 0;
	int j = 0;
	int sum = 0;
	while(i<len){
		if ( (msg[i] >= 65 && msg[i] <= 90 ) || ( msg[i] >= 97 && msg[i] <= 122) ){
			msg1[k] = msg[i];
			k++;
		}else if(msg[i] >= '0' && msg[i] <= '9'){
			msg2[j] = msg[i];
			j++;
		}
		i++;
	}
	i = 0;
	while(msg2[i]!='\0'){
		sum = sum + (msg2[i] - '0');
		i++;
	}
	
	textcolor(COLOR_RED,COLOR_BLACK);
	puts(msg1);
	resetcolor();
	
	
	textcolor(COLOR_BLUE,COLOR_BLACK);
	printf("%d\n",sum);
	resetcolor();
	
	int len1 = strlen(msg1);

	i= 0;
	char temp;
	for(j=0; j<len1; j++){
		for(i=0; i<len1;i++){
			if(msg1[i] > msg1[i+1]){
				temp= msg1[i+1];
				msg1[i+1] = msg1[i];
				msg1[i] = temp;
			}
		//	printf("%c",msg1[i]);
		}//printf("%c\n",msg1[i]); 
		//msg1[i+1] = '\0';
		
	}
	puts(msg1);

	

   
	getch();	
	return 0;
}

