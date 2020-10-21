# Dictionary using Trie

## Description

## Trie
Trie is an efficient data retrieval structure which builds upon the properties of tree structure. Word search complexitites
can be brought to an optimal limit which depends on key length.

## Traversing the trie
Main application of the trie is storing words in the structure. This trie can be traversed by first approaching the root node then traversing along the path on which our 
letter and the letter within the node's branch matches. You can learn more about inserting and searching, and tries in general [here](https://www.geeksforgeeks.org/trie-insert-and-search/)

## Code
```python

class TrieNode:

    # Trie node class
    def __init__(self):
        self.children = [None] * 26

        # isEndOfWord is True if node represent the end of the word
        self.isEndOfWord = False
        self.meaning=""


class Trie:

    # Trie data structure class
    def __init__(self):
        self.root = self.getNode()

    def getNode(self):

        # Returns new trie node (initialized to NULLs)
        return TrieNode()

    def _charToIndex(self, ch):

        # Converts key current character into index
        # use only 'a' through 'z'

        return ord(ch) - ord('a')

    def insert(self, key,meaning):

        # If not present, inserts key into trie
        # If the key is prefix of trie node,
        # just marks leaf node
        pCrawl = self.root
        length = len(key)
        for level in range(length):
            index = self._charToIndex(key[level])

            # if current character is not present
            if not pCrawl.children[index]:
                pCrawl.children[index] = self.getNode()
            pCrawl = pCrawl.children[index]

        # mark last node as leaf
        pCrawl.isEndOfWord = True
        pCrawl.meaning=meaning

    def search(self, key):

        # Search key in the trie
        # Returns meaning if key presents
        # in trie, else word not found
        pCrawl = self.root
        length = len(key)
        for level in range(length):
            index = self._charToIndex(key[level])
            if not pCrawl.children[index]:
                return "Word not found."
            pCrawl = pCrawl.children[index]

        return pCrawl.meaning


# Input keys (use only 'a' through 'z')
keys = {"hacktoberfest":"a month long virtual festival event to celebrate open source contributions", "git":"a distributed version-control system for tracking changes in source code during software development",
        "opensource":"denoting software for which the original source code is made freely available and may be redistributed and modified",
        "issue":"an important topic or problem for debate or discussion","contribution":"a gift or payment to a common fund or collection"}

# Trie object
t = Trie()

# Construct trie
for k,v in keys.items():
    t.insert(k,v)
#Here is the option
while(True):
    print("Press 1 to search a word.")
    print("Press 2 to a new word and its definition")
    print("Press 3 to exit.")
    n=int(input("Enter your choice: "))
    if(n==1):
        #covert the input into lowercase
        search_word=input("Enter the word: ").lower()
        # Search for different keys
        print("{} ---- {}".format(search_word, t.search(search_word)))
    elif(n==2):
        new_word=input("Enter the new word: ").lower()
        #check the word exist or not
        if new_word not in keys.keys():
            new_mean=input("Enter its meaning: ").lower()
            keys[new_word]=new_mean
            t.insert(new_word, new_mean)
        else:
            print("The Word already exist in the dictionary.")
    elif(n==3):
        exit(0)
    else:
        print("Wrong Choice")
    print()

```
## Output

```
Press 1 to search a word.
Press 2 to a new word and its definition
Press 3 to exit.
Enter your choice: 1
Enter the word: bus
bus ---- Word not found.

Press 1 to search a word.
Press 2 to a new word and its definition
Press 3 to exit.
Enter your choice: 2
Enter the new word: Bus
Enter its meaning: a large motor vehicle carrying passengers by road

Press 1 to search a word.
Press 2 to a new word and its definition
Press 3 to exit.
Enter your choice: 1
Enter the word: bus
bus ---- a large motor vehicle carrying passengers by road

Press 1 to search a word.
Press 2 to a new word and its definition
Press 3 to exit.
Enter your choice: 3
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Arnab Bhakta | arnab031 | Future Institute of Engineering and Management, Kolkata |