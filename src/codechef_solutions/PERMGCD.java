// Problem link: https://www.codechef.com/submit/PERMGCD

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        // your code goes here
		Scanner in = new Scanner(System.in);
		int T = in.nextInt();
		for (int t = 0; t < T; t++) {
		    int N = in.nextInt();
		    int X = in.nextInt();
		    if (X < N) {
		        System.out.println("-1");
		        continue;
		    }
		    
		    X -= (N - 1);
		    System.out.print(X + " ");
		    for (int i = 1; i <= N; i++) {
		        if (i == X) {
		            continue;
		        }
		        System.out.print(i + " ");
		    }
		    System.out.println();
		}
	}
}
