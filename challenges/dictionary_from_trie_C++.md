# Dictionary using Trie

## Trie
Trie is an efficient data retrieval structure which builds upon the properties of tree structure. Word seaarch complexitites
can be brought to an optimal limit which depends on key length.

## Traversing the trie
Main application of the trie is storing words in the structure. This trie can be traversed by first approaching the root node then traversing along the path on which our 
letter and the letter within the node's branch matches. You can learn more about inserting and searching, and tries in general [here](https://www.geeksforgeeks.org/trie-insert-and-search/).

## C++ Code
TrieNode definition, Recursive functions for searching, inserting and a few helper functions are given in the following code snippet.
```cpp
struct TrieNode
{
	unordered_map<char, TrieNode*> branches;
	bool isEnd;
	string meaning;
};


TrieNode* createNode(void) 
{
  // helper function which creates new node and initialises isEnd to false
	TrieNode* node = new TrieNode;
	node->isEnd = false;

	return node;
}				

void insert(TrieNode*& node, const string &str, const string &meaning, int index = 0) 
{
	// inserts a character node to existing trie structure

	if (node == NULL)  // creates a new root if there is none
	{
		node = createNode();
		cout<<"Creating ROOT"<<endl;
	}

	TrieNode* temp = node;

	if (index >= str.length())	// check if we have reached end of the word
	{
		temp->isEnd = true;
		temp->meaning = meaning;

		return;
	}
	
	// assigns letter on i'th position of string to key
	char key = str[index];
	if (temp->branches.find(key) == temp->branches.end())
	{
		temp->branches[key] = createNode();
	}

	// recursive definition to insert into trie
	return insert(temp->branches[key], str, meaning, index+1);
}

string search(TrieNode* root, const string &str, int index = 0) 
{
	// function which returns meaning of word if found else error message

	if (root == NULL) // return not found if no words added
	{
		return "Word not found.";
	}

	TrieNode* temp = root;

	if (index >= str.length()) // return word meaning if end of word encountered
	{
		return temp->meaning;
	}

	char key = str[index];
	// recursive definition to iterate through trie
	return search(temp->branches[key], str, index+1);
}

```

## Driver Code
The following driver code can be used to test the given functions.
```cpp
int main() 
{ 
    TrieNode* root = NULL; 

    // Build the dictionary 
    insert(root, "apple", "a fruit"); 
    insert(root, "ball", "a round object that you hit, kick, throw, etc. in games and sports");
    insert(root, "cat", "an animal"); 
    insert(root, "book", "a written or printed work");  
    insert(root, "draw", "to do a picture or diagram of something "); 
  
  	// search for "book" in our trie
    string str = "book"; 
    cout << search(root, str); 
  
    return 0; 
}
```
