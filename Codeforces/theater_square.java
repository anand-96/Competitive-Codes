import java.util.Scanner;

public class TqSqr {
    public static void main(String[] args) {
        double n,m,a;
        long b,c;
    Scanner sc=new Scanner(System.in);
    n=sc.nextDouble();
    m=sc.nextDouble();
    a=sc.nextDouble();
    if(n>m && a>m)
    {
        System.out.println((long)Math.ceil(n/a));
    }
    else if(m>n && a>n){
        System.out.println((long)Math.ceil(m/a));
    }
    else
    {
        b=(long) Math.ceil(m/a);
        c=(long) Math.ceil(n/a);
        System.out.println(c*b);
    }
    return;
}
}
