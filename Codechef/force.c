#include<stdlib.h>
int max(int a,int b)
{
	int x;
	x=a>b?a:b;
	return x;
}
int main()
{
	int m1,m2,m3,m4,m5;
	int w1,w2,w3,w4,w5;
	int i,s1,s2,s3,s4,s5;
	int suc,un,final;
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if(m1<0||m1>119||m2<0||m2>119||m3<0||m3>119||m4<0||m4>119||m5<0||m5>119)
		exit(1);
		scanf("%d%d%d%d%d",&w1,&w2,&w3,&w4,&w5);
	if(w1<0||w1>10||w2<0||w2>10||w3<0||w3>10||w4<0||w4>10||w5<0||w5>10)
		exit(1);
		scanf("%d%d",&suc,&un);
		if(suc<0||suc>20||un<0||un>20)
		exit(1);
		s1=max(0.3*500,(250-m1)*500/250-50*w1);
		s2=max(0.3*1000,(250-m2)*1000/250-50*w2);
		s3=max(0.3*1500,(250-m3)*1500/250-50*w3);
		s4=max(0.3*2000,(250-m4)*2000/250-50*w4);
		s5=max(0.3*2500,(250-m5)*2500/250-50*w5);
		final=s1+s2+s3+s4+s5+suc*100-un*50;
		printf("%d\n",final);
    return 0;
}
