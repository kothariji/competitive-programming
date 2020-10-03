#include<stdio.h>
#include<utility>
using namespace std;
typedef pair<int,int> pr;
#define fr first
#define se second
pr p[10][10];
char r(char c){
	return"XO"[c=='X'];
}
void work(){
	int i,x,y;
	char s[5];
	pr t;
	printf("CHAOS\n");
	fflush(stdout);
	for(i=0;i<18;i++){
		scanf("%d%d%s",&x,&y,s);
		t=p[x][y];
		printf("%d %d %c\n",t.fr,t.se,(x==1||x==6)&&(y==1||y==6)?s[0]:r(s[0]));
		fflush(stdout);
	}
}
int main(){
	#define gao(a,b,c,d) p[a][b]={c,d};p[c][d]={a,b};
	gao(1,1,6,6)
	gao(1,6,6,1)
	gao(1,3,1,4)
	gao(6,3,6,4)
	gao(3,1,4,1)
	gao(3,6,4,6)
	gao(2,2,2,3)
	gao(3,2,3,3)
	gao(4,4,4,5)
	gao(5,4,5,5)
	gao(4,2,5,2)
	gao(4,3,5,3)
	gao(2,4,3,4)
	gao(2,5,3,5)
	gao(1,2,5,6)
	gao(2,1,6,5)
	gao(5,1,1,5)
	gao(6,2,2,6)
	int T;
	scanf("%d",&T);
	while(T--)work();
}
