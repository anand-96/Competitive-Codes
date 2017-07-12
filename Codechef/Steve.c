void main()
{
	int a[1000000],k=0,i,p;
for(i=2;i<100000;i++){
	for(p=i;i*p<100000;p++){
			a[i*p]=i*p;
	}
		if(a[i]==0)
				printf("%d ",i);
}

	k=0;
	for(i=2;i<=10000;i++)
	if(i<a[k++])
	printf("%d ",i);
}
