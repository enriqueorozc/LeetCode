#include <string>

class Solution {

  class Trie {

    class Node {
      Node* children[26];
      bool isWord;
      char c;

      Node(char c) {

        this->isWord = false;
        this->c = c;

        for (int i = 0; i < 26; i++) {
          this->children[i] = nullptr;
        }

      };

    };

    Node* root;

    public:

    Trie() {
      root = new Node('\0');
    }

    void insert(string word) {

      Node* curr = root;

      for (char c : word) {

        // Create Node for Char:
        if (curr->children[c - 'a'] == nullptr) {
          Node* newNode = new Node(c);
          curr->children[c - 'a'] = newNode;
        }

        // Move Pointer:
        curr = curr->children[c - 'a'];
      }

      curr->isWord = true;
    }

    bool startsWith(string prefix) {

      Node* curr = root;

      for (char c : prefix) {

        // Does Not Exist:
        if (curr->children[c - 'a'] == nullptr) {
          return false;
        }

        curr = curr->children[c - 'a'];
      }

      return true;
    }

  };


  public:
    string longestCommonPrefix(vector<string>& strs) {
        
      


    }

};