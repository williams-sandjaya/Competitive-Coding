//MRECAMAN
import java.util.Scanner;
 
public class Main
{
    public static void main(String args[])
	{
        int ar[]=new int[500001];
        ar[0]=0;
        boolean flag[] =new boolean[3500000];
        Scanner sc=new Scanner(System.in);
        int n=0;
       for(int i=1;i<=500000;i++)
	   {
			if(ar[i-1]-i>0&&flag[ar[i-1]-i]==false)
			{
				ar[i] = ar[i-1]-i;
				flag[ar[i-1]-i] = true;
			}
			else
			{
				ar[i] = ar[i-1]+i;
				flag[ar[i-1]+i] = true;
			}
		}
      while((n=sc.nextInt())!=-1){
         System.out.println(ar[n]);
         
      }
	}
} 
