import java.util.*;
class Codechef
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String cipher=sc.next();
		int offset=sc.nextInt();
		int i, ascii;
		char ch;
		char ch1[]=new char[100];
		String dec;
		for(i=0;i<cipher.length();i++)
		{
			ch=cipher.charAt(i);
			ascii=(int)ch-offset;
			ch1[i]=(char)ascii;
		}
		dec=new String(ch1);
		System.out.print(dec);
	}
}
