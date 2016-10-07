#include<stdio.h>

void f(int n, char s, char d, char t){
	if(n==1){
		printf("%d : %c -> %c\n",n, s, d);
		return;
	}
	f(n-1,s,t,d);
	printf("%d : %c -> %c\n", n, s, d);
	f(n-1,t,d,s);		
}

int main(){
	int n;
	char s, d, t;
	scanf("%d %c %c %c",&n, &s, &d, &t);
	//scanf("%c %c %c",&s, &d, &t);
	f(n,s,d,t);	
}
