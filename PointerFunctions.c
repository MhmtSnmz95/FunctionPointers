#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int (*oper_t)(int,int);

int operation(oper_t p, int a, int b){
	return (*p)(a,b);
}
int add (int a, int b){
	return a+b;
}
int sub (int a, int b){
	return a-b;
}
int mul (int a, int b){
	return a*b;
}
int main(int argc, char *argv[]) {
	oper_t oper[] = {add,sub,mul};
	int cmd, a, b;
	a = 10;
	b = 15;
	cmd = 2;
	
	int res = operation(oper[cmd],a,b);
	printf("Result = %d\n", res);
	return 0;
}
