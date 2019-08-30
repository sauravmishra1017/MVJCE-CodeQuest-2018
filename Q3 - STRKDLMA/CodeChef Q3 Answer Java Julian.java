import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		BufferedReader da = new BufferedReader(new InputStreamReader(System.in));
		int offset=Integer.parseInt(da.readLine());
		String cipher=da.readLine();    
        int i, ascii;
        char ch;
        char ch1[]=new char[100];
        String dec;
        System.out.println(cipher.length());
        for(i=0;i<cipher.length();i++)
        {
            ch=cipher.charAt(i);
            ascii=(int)ch-offset;
            ch1[i]=(char)ascii;
        }
        dec=new String(ch1);
        System.out.println(dec);
	}
}