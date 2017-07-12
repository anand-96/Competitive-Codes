void main()
{
    int x;
    char a,b,c,d,e;
    int week[8];
    week[1]=52;
    week[2]=52;
    week[3]=52;
    week[4]=52;
    week[5]=53;
    week[6]=53;
    week[7]=52;
    scanf("%d%c%c%c%c%c",&x,&a,&b,&c,&d,&e);
    if(e=='w')
    printf("%d\n",week[x]);
    if(e=='m')
    {
        if(x>=1&&x<=29)
            printf("%d\n",12);
        else if(x==30)
            printf("%d\n",11);
        else
            printf("%d\n",7);
    }

}
