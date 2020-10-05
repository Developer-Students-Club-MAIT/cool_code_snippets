# Encrypt a text using Caesar Cipher

## Code
```python
def encrypt(text, shift):

    result = ""
    n = len(text)

    # Traverse the plaintext
    for i in range(n):

        char = text[i]

        # Skip spaces and non-alphabets
        if (char.isalpha() == False):
            result += char

        # Encrypt uppercase characters in plain text
        # according to the shift value
        elif (char.isupper()):
            result += chr((ord(char) + shift - 65) % 26 + 65)

        # Encrypt lowercase characters in plain text
        # according to the shift value
        else:
            result += chr((ord(char) + shift - 97) % 26 + 97)

    return result

if (__name__ == "__main__"):

    plaintext = input("Enter plaintext: ")
    shift = int(input("Enter shift value: "))

    print(f"Plaintext: {plaintext}")
    print(f"Shift value: {shift}")

    cipher = encrypt(plaintext, shift)

    print(f"Cipher text: {cipher}")
```

## Description
[Caesar Cipher](https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/) is one of the oldest [encryption](https://medium.com/searchencrypt/what-is-encryption-how-does-it-work-e8f20e340537#:~:text=Encryption%20is%20a%20process%20that,%2C%20or%20decrypt%2C%20the%20information.) techniques. It is a basic cryptography cipher method used to cipher a plaintext by merely shifting the characters based on the shift value (or key) provided.

## Input
```
Enter plaintext: I love H@ckt0berfest!       
Enter shift value: 3
```

## Output
```
Plaintext: I love H@ckt0berfest!
Shift value: 3
Cipher text: L oryh K@fnw0ehuihvw!
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Hardik Sharma | [MPL0Y](https://github.com/MPL0Y) | Maharaja Agrasen Institute of Technology |
