import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s="";
		for(int i=2;i<n;i++) {
			s+="A";
		}
//		System.out.println("s1.hash = " + (s+"Ha").hashCode());
//		System.out.println("s2.hash = " + (s+"IB").hashCode());
		System.out.printf("%sHa\n%sIB",s,s);
    }
}
