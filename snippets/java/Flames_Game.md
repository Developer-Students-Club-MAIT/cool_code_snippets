# Flames Game

## Description

`Scanner` is a java.util package class that is used to take input from console. 

FLAMES is a popular game named after the acronym: Friends, Love, Affection, Marriage, Enemies, Siblings.

int cancel(String name1,String name2) removes the common characters with their respective common occurrences from the two strings and returns the total count of the characters that are left.In the main(),characters are removed from the string f which contains the word "FLAMES" using the total count we got until there is one character left in f.The character which last the process is the result.

## Code
```Java
import java.util.Scanner;
public class Flames_Game
{
    //function to remove the common characters with their respective common occurrences from the two strings and returns the total count of the characters that are left
    static int cancel(String name1,String name2)
    {
        int total=name1.length()+name2.length();
        int canc=0;
        for(int i=0;i<name1.length();i++)
        {
            for(int j=0;j<name2.length();j++)
            {
                if(name1.charAt(i)==name2.charAt(j))
                {
                    ++canc;
                    name2=name2.substring(0,j)+name2.substring(j+1,name2.length());
                    break;
                }
            }
        }
        //tocut stores the total count after removing the common characters
        int tocut=total-(canc*2);
        return tocut;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a name:");
        String name1=sc.nextLine();
        System.out.println("Enter the partner name");
        String name2=sc.nextLine();
        int tocut=cancel(name1,name2);
        String f="FLAMES";
        //Removing the chracters from the string f using the total count until there is one character left in f
        while(f.length()!=1)
        {
            int cut=0;
            for(int k=1;k<=tocut;k++)
            {
                if(cut>=f.length())
                    cut=0;
                ++cut;
            }
            f=f.substring(cut)+f.substring(0,cut-1);
            f=f.trim();
        }
        //Print the result
        System.out.print("Relationship:");
        switch(f){
            case "F":
                System.out.println("Friends");
                break;
            case "L":
                System.out.println("Love");
                break;
            case "A":
                System.out.println("Affection");
                break;
            case "M":
                System.out.println("Marriage");
                break;
            case "E":
                System.out.println("Enemies");
                break;
            case "S":
                System.out.println("Siblings");
                break;
        }
    }
}
```

## Input
```
Enter a name:
ALIA
Enter the partner name
RANBIR
```

## Output
```
Relationship:Marriage
```

## Contributed By

| Name         | GitHub Username                                 | Institute                                              |
| -------------| ------------------------------------------------| -------------------------------------------------------|
| Bhaswati Saha| Bhaswati-Saha                                   | Future Institute of Engineering and Management,Kolkata |
