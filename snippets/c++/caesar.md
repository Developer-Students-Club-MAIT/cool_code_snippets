# Caesar cipher

## Code
```cpp
#include <iostream>
#include <cctype>
#include <string>

//Converts plain text into cipher text
std::string encode(std::string &plain_text, int key)
{
    if (key < 0)
        key = 26 + key;

    std::string cipher_text = "";
    for (char c : plain_text)
    {
        if (isalpha(c))
        {
            if (isupper(c))
                c = ((c - 'A' + key) % 26 + 'A');
            else
                c = ((c - 'a' + key) % 26 + 'a');
        }
        cipher_text += c;
    }

    return cipher_text;
}

//Converts cipher text into plain text
std::string decode(std::string &cipher_text, int key)
{
    if (key > 0)
        key = 26 - key;
    else if (key < 0)
        key = -1 * key;

    std::string plain_text = "";
    for (char c : cipher_text)
    {
        if (isalpha(c))
        {
            if (isupper(c))
                c = ((c - 'A' + key) % 26 + 'A');
            else
                c = ((c - 'a' + key) % 26 + 'a');
        }
        plain_text += c;
    }

    return plain_text;
}

int main(int argc, char *argv[])
{
    //Rejects if user don't provide key
    {
        std::cout << "Usage ./caesar <key>" << std::endl;
        return -1;
    }

    int key = atoi(argv[1]);

    std::string plain_text;

    //Prompts user to input plain text
    std::cout << "Enter plain text: ";
    getline(std::cin, plain_text);

    std::string cipher_text = encode(plain_text, key);

    std::cout << "ciphertext: " << cipher_text << std::endl;

    std::string decoded_text = decode(cipher_text, key);

    std::cout << "decoded text: " << decoded_text << std::endl;
}

```

## Demo
```
$ ./caesar -8
Enter plain text: porwaal
ciphertext: hgjossd
decoded text: porwaal
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Shivam Porwal | ShivamPorwal02 | Maharaja Surajmal Institute of Technology |
