# Ceaser Cipher

## Description
This script uses the [Ceaser Cipher](https://en.wikipedia.org/wiki/Caesar_cipher) for encrypting messages in plain text.


## Options: 
    -e: encrypts plain text
    -d: decodes encrypted text
    -k, --key: key 


## Code:
```python
import sys


def encrypt(msg=None,s_pattern=None):
    """
    encrypts a message in plain text using the 'ceaser cipher'
    :param msg: plain text string
    :param s_patter: shift pattern
    """
    if msg is None:
        raise ValueError("'msg' cannot be None")
    if isinstance(msg, str) is False:
        raise TypeError("'msg' must be type 'str'")
    if s_pattern is None:
        raise ValueError("'s_pattern' must be specified")
    if isinstance(s_pattern, int) is False:
        raise TypeError("'s_pattern' must be type 'int'")
    
    result = ""

    for idx in range(len(msg)):
        char = msg[idx]
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + s_pattern - 65) % 26 + 65)
            else:
                result += chr((ord(char) + s_pattern - 97) % 26 + 97)
        else:
            result += msg[idx]
    
    return result


def decode(msg=None, s_pattern=None):
    """
    decodes a message in plain text using the 'ceaser cipher'
    :param msg: plain text string
    :param s_patter: shift pattern
    """
    if msg is None:
        raise ValueError("'msg' cannot be None")
    if isinstance(msg, str) is False:
        raise TypeError("'msg' must be type 'str'")
    if s_pattern is None:
        raise ValueError("'s_pattern' must be specified")
    if isinstance(s_pattern, int) is False:
        raise TypeError("'s_pattern' must be type 'int'")

    result = ""

    for idx in range(len(msg)):
        char = msg[idx]
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - s_pattern - 65) % 26 + 65)
            else:
                result += chr((ord(char) - s_pattern - 97) % 26 + 97)
        else:
            result += msg[idx]
    
    return result


if __name__ == "__main__":
    options = ''' 
    usage: 

    -e: encrypts plain text
    -d: decodes encrypted text
    -k, --key: key 
    '''
    if "-e" in sys.argv and "-d" in sys.argv:
        print(f"error: only one option can be specified at a time\n\n{options}")
        sys.exit(1)
    if "-k" not in sys.argv:
        print(f"error: must specify a key\n\n{options}")
        sys.exit(1)
    if sys.argv[1] == "-e":
        msg = sys.argv[sys.argv.index("-e") + 1]
        key = int(sys.argv[sys.argv.index("-k") + 1])
        e_msg = encrypt(msg, key)
        print(f"encrypted: {e_msg}")
        sys.exit(0)
    elif sys.argv[1] == "-d":
        msg = sys.argv[sys.argv.index("-d") + 1]
        key = int(sys.argv[sys.argv.index("-k") + 1])
        d_msg = decode(msg, key)
        print(f"decoded message: {d_msg}")
        sys.exit(0)
    else:
        print(f"error: you must specify one option\n\n:{options}")
        sys.exit(1)
```


## Output:

    $ python ceaser_cipher.py -e "Hi, How are you?" -k -17
    encrypted: Qr, Qxf jan hxd?
    
    $ python ceaser_cipher.py -d "Qr, Qxf jan hxd?" -k -17
    decoded message: Hi, How are you?


## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Alejandro Olaria | aolaria | Universidad Rafael Belloso Chacín |