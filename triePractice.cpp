#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Trie {

  class Node {

    public:
    Node* children[26];
    bool isWord;
    char c;

    Node(char c) {

      this->isWord = false;
      this->c = c;

      for (int i = 0; i < 26; i++) {
        this->children[i] = nullptr;
      }

    }

    int getLength() {

      int length = 0;

      for (int i = 0; i < 26; i++) {
        
        if (this->children[i] != nullptr) {
          length++;
        }

      }

      return length;
    }

    Node* biggestChild() {

      if (getLength() == 0) {
        return nullptr;
      }

      Node* biggest = nullptr;
      int length = 0;

      for (int i = 0; i < 26; i++) {

        if (this->children[i] == nullptr) {
          continue;
        }

        if (this->children[i]->getLength() > length) {
          length = this->children[i]->getLength();
          biggest = this->children[i];
        }

      }

      return biggest;
    }

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

  string longestPrefix() {

    Node* curr = root;
    string prefix = "";

    while (curr) {

      if (curr->getLength() == 0 || curr->getLength() > 1) {
        break;
      }

      Node* next = curr->biggestChild();
      prefix = prefix + curr->c;

      curr = next;
    }

    return prefix;
  }

};

int main() {

  Trie prefixTree;

  prefixTree.insert("flower");
  prefixTree.insert("flow");
  prefixTree.insert("flight");

  cout << prefixTree.longestPrefix();

}