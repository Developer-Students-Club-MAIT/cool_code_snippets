# Count frequency of unique characters in a String

## Code
```Java
import java.util.Scanner;
import java.io.FileWriter;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(new InputStreamReader(System.in));
        
        //  string input
        System.out.println("Enter String : ");
        char[] str = scn.nextLine().toCharArray();
        
        //  Frequency map of string characters
        int[] chars = new int[127 - 32];      //  readble ASCII characters are from 32 to 126 number
        for (char c : str) {
            chars[c - ' ']++;       //  ASCII(32) = ' '
        }

        //  output to write in file
        StringBuilder res = new StringBuilder("Frequency of characters in input string is : \n\n");
        for (int i = 0, N = chars.length; i < N; i++) {
            if (chars[i] != 0) {    //  if frequency is not 0 then append in result string
                res.append("character '" + (char)(' ' + i) + "' occurred :" + chars[i] + " times\n");
            }
        }

        FileWriter file = new FileWriter("output.txt");
        file.write(res.toString());    //  writing file
        
        //  just flushing left out bytes
        file.flush();
        file.close();
        scn.close();
    }
}
```

## Description
`Scanner` is a java.util package class to take input from console.
`InputStreamReader` is a java.io package class to manage input stream of characters taken from console (used to increase Scanner performance).
`FileWriter` is a java.io class to append or writer character streams to system files.

## Input
```
Enter String : 
I am doing this contribution to github!! Yay!! :)
```

## Output
```
$ cat ./output.txt
Frequency of characters in input string is : 

character ' ' present :8 times
character '!' present :4 times
character ')' present :1 times
character ':' present :1 times
character 'I' present :1 times
character 'Y' present :1 times
character 'a' present :2 times
character 'b' present :2 times
character 'c' present :1 times
character 'd' present :1 times
character 'g' present :2 times
character 'h' present :2 times
character 'i' present :5 times
character 'm' present :1 times
character 'n' present :3 times
character 'o' present :4 times
character 'r' present :1 times
character 's' present :1 times
character 't' present :5 times
character 'u' present :2 times
character 'y' present :1 times
```

## Contributed By

| Name        | GitHub Username                               | Institute                                |
| ----------- | --------------------------------------------- | ---------------------------------------- |
| Yash Saxena | [YashSaxena9](https://github.com/YashSaxena9) | Maharaja Agrasen Institute of Technology |
