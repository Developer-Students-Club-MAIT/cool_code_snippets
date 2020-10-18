# Longest Common Subsequence

## Code
```Java
import java.util.*;
public class LCS3 {
    //Returns length of LCS for X[0..n-1], Y[0..m-1]
    static String LCS(String X,String Y,int n,int m)
    {
        int t[][]=new int[n+1][m+1];
        int i,j;
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
        String s="";
        i=n;
        j=m;

        while(i>0 && j>0)
        {
            if(X.charAt(i-1)==Y.charAt(j-1))
            {
                s=X.charAt(i-1)+s;
                i--;
                j--;

            }
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

## Description
`Scanner` is a java.util package class that is used to take input from console. 


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
-----------------------------------------------------------------------------------------------------------------
| Name         | GitHub Username                                 | Institute                                    |
| -----------  | ---------------------------------------------   | ----------------------------------------     |
| Bhaswati Saha| Bhaswati-Saha                                   | Future Institute of Engineering & Management |
-----------------------------------------------------------------------------------------------------------------