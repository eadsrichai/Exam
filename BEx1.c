#include<stdio.h>
#include<string.h>
void sort(char[],int);
int main(){
	char msg[100];
	char ch, input[100], output[100];
	int no[26] = {0}, n, c, t, x;
	
	printf("Enter message : ");
	gets(msg);
	puts(msg);
	int len = strlen(msg);
	int i = 0;
	char msg1[100];
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
	
	puts(msg2);
	printf("%d",sum);

for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         output[t] = ch;
         t++;
      }
   }
   output[t] = '\0';
 
   printf("%s\n", output);
   
   
   
	
	return 0;
}
void sort(char number[],int n){
	int j,k;
	int i = 0;
	int temp = 0;
	for(j = 0; j< n; j++){
		for(k = 0; k < n-j; k++){
			if(number[k] > number[k+1]){
			temp = number[k];
			number[k] = number[k+1];
			number[k+1] = temp;
			}
		}
	}
}
