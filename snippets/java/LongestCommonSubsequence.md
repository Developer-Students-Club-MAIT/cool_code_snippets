# Longest Common Subsequence

## Description

`Scanner` is a java.util package class that is used to take input from console.

In the first part,length of the longest common subsequence for X[0..n-1] and Y[0..m-1] is stored in a table t[n+1][m+1] where t[i][j] stores the length of the longest common subsequence of X[0..i-1] and Y[0..j-1].In the first outer for loop, if either of the two strings X or Y is null then t[i][j]=0.In the second outer for loop, if the last character of both the strings matches then t[i][j]=1+t[i-1][j-1] else take the maximum of t[i][j-1] and t[i-1][j] and store it to t[i][j].

In the second part,longest common subsequence is formed and stored in a string s.

## Code
```Java
//Dynamic Programming implementation of Longest Common Subsequence problem in Java
import java.util.*;
public class Longest_Common_Subsequence 
{
    //Returns the longest common subsequence
    static String LCS(String X,String Y,int n,int m)
    {
        int t[][]=new int[n+1][m+1];
        int i,j;
        //Following steps builds the t[n+1][m+1] in bottom up fashion.
        //t[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1]
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                    t[i][j]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if (X.charAt(i - 1) == Y.charAt(j - 1))
                    t[i][j]= 1 + t[i-1][j-1];
                else
                    t[i][j]= Math.max(t[i][j-1], t[i-1][j]);
            }
        }
        //Following code forms the longest common subsequence which will be returned
        // s is the string to store the longest common subsequence
        String s="";
        //Start from the right-most-bottom-most corner and one by one store the characters in the string s
        i=n;
        j=m;
        while(i>0 && j>0)
        {
            // If current character in X and Y are same, then current character is a part of LCS 
            if(X.charAt(i-1)==Y.charAt(j-1))
            {
                s=X.charAt(i-1)+s;
                i--;
                j--;
            }
            //If not same, then find the larger of two and go in the direction of larger value 
            else
            {
                if(t[i-1][j]>t[i][j-1])
                    i--;
                else
                    j--;
            }
        }
        return s;
    }
    public static void  main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String 1 :");
        String X=sc.nextLine();
        System.out.println("Enter String 2 :");
        String Y=sc.nextLine();
        System.out.println("Longest Common Subsequence : "+LCS(X,Y,X.length(),Y.length()));
    }
}
```

## Input
```
Enter String 1 :
ABCDGH
Enter String 2 :
AEBDFHR
```

## Output
```
Longest Common Subsequence : ABDH
```

## Contributed By

| Name         | GitHub Username                                 | Institute                                              |
| -------------| ------------------------------------------------| -------------------------------------------------------|
| Bhaswati Saha| Bhaswati-Saha                                   | Future Institute of Engineering and Management,Kolkata |
