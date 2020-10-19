# Count frequency of unique characters in a string

## Code
```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int main(void)
{
    std::string str;

    // Input string
    std::cout << "Enter string: ";
    getline(std::cin, str);

    // Keeps count of frequency
    int freq[26] = {0};
    for (char c : str)
    {
        freq[tolower(c) - 'a'] += 1;
    }

    // Writes frequency to file
    std::ofstream fout("frequency.txt");
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i])
            fout << "Frequency of " << (char)(i + 'a') << " : " << freq[i] << "\n";
    }

    // Closing file
    fout.close();

    return 0;
}
```

## Input
```
Enter string: eezzfhhaaa
```

## Output
```
$ cat frequency.txt

Frequency of a : 3
Frequency of e : 2
Frequency of f : 1
Frequency of h : 2
Frequency of z : 2
```

## Contributed By 

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Shivam Porwal | ShivamPorwal02 | Maharaja Surajmal Institute of Technology |