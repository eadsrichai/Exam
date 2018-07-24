#include<stdio.h>
#include<conio.h>
#include <windows.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)

#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)



void gotoxy(short x, short y) {

    COORD pos = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void menu();

int main(){
	int T[7] = {12,14,16,18,20,22};
	int D[6] = {12,14,16,18,20};
	int R[5] = {12,14,16,18};
	int M[4] = {12,14,16};
	int C[3] = {12,14};
	int P[2] = {12};
	int A[1] = {};
	
	char o;
	char d;
	char origins[10];
	char destination[10];
	
	menu();
	printf("\nInput Origin = ");
	scanf("%c",&o);
	getchar();
	printf("Input Desination = ");
	scanf("%c",&d);
	
	if(o == 'T'){
		origins jmj                                                                                                                                                                 = "Tewes";
	}else if(o == 'D'){
		origins = "Dusit";
	}
	printf("From %s To %s",origins,destination);
	
	getch();
	return 0;
}
void menu(){
	printf("\tT\n");
	printf("\t12\tD\n");
	printf("\t14\t12\tR\n");
	printf("\t16\t14\t12\tM\n");
	printf("\t18\t16\t14\t12\tC\n");
	printf("\t20\t18\t16\t14\t12\tP\n");
	printf("\t22\t20\t18\t16\t14\t12\tA");
}
