    import java.util.Scanner;
     
    class TestClass {
        public static void main(String args[] ) throws Exception {
            Scanner sc=new Scanner(System.in);
            int N = sc.nextInt();
            while(N>=0){
            String str=sc.nextLine();
            String s[]=str.split(" ");
            for (int i = s.length-1; i >=0; i--) {
                System.out.print(s[i]+" ");
            }
            System.out.println();
            N--;
        }
    }
    }
