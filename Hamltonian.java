package Hamaltonian;


		import java.util.Scanner;
		import java.util.*;
		public class Hamltonian
		{
		public static void main(String[] args) {


		int n;

		int c=0;
		System.out.println("enter the number of student");

		Scanner s=new Scanner(System.in);

		n=s.nextInt();
		int a[]=new int[n];
		System.out.println("enter the student marks");
		for(int i=0;i<n;i++)
		a[i]=s.nextInt();
		System.out.println();
		for(int i=0;i<n-1;i++)
		{
		c = n-1-i;
		for(int j=i+1;j<n;j++)
		{
		if(a[i]>=a[j]) 
		c=c - 1;
		else break;
		}
		if(c == 0)

		System.out.print(a[i]+",");
		}

		System.out.print(a[n-1]);
		}

		


	}


