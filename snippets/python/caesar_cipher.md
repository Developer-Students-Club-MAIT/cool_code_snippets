# Encrypt a text using Caesar Cipher

## Code
```python
# Encrypts a plaintext with shift value
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

# Decrypts a ciphertext with key
def decrypt(text, key):

    # It is important to note here that to the cyclic property
    # of modulo, we can reuse the cipher() function to decipher
    # a ciphertext by using shift = 26 - shift
    return encrypt(text, 26 - key)

if (__name__ == "__main__"):

    text = input("Enter text: ")
    key = int(input("Enter key value: "))
    ch = input("\nDo you want to encrypt or decrypt (e/d): ")

    if (ch.lower() == "e"):

        print(f"\nPlaintext: {text}")
        print(f"Key value: {key}")

        cipher = encrypt(text, key)

        print(f"\nCiphertext: {cipher}")

    else:

        print(f"\nCiphertext: {text}")
        print(f"Key value: {key}")

        plain = decrypt(text, key)

        print(f"\nPlaintext: {plain}")
```

## Description
[Caesar Cipher](https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/) is one of the oldest [encryption](https://medium.com/searchencrypt/what-is-encryption-how-does-it-work-e8f20e340537#:~:text=Encryption%20is%20a%20process%20that,%2C%20or%20decrypt%2C%20the%20information.) techniques. It is a basic cryptography cipher method used to cipher a plaintext by merely shifting the characters based on the shift value (or key) provided.

## Input
```
Enter text: I love H@ckt0berfest!
Enter key value: 3

Do you want to encrypt or decrypt (e/d): e
```

## Output
```
Plaintext: I love H@ckt0berfest!
Key value: 3

Ciphertext: L oryh K@fnw0ehuihvw!
```

## Input
```
Enter text: ODN XLTE!
Enter key value: 11

Do you want to encrypt or decrypt (e/d): d
```

## Output
```
Ciphertext: ODN XLTE!
Key value: 11

Plaintext: DSC MAIT!
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Hardik Sharma | [MPL0Y](https://github.com/MPL0Y) | Maharaja Agrasen Institute of Technology |
