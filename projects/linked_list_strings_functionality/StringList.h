#ifndef LINKED_LIST_FUNCTIONALITY_PROJECT_H
#define LINKED_LIST_FUNCTIONALITY_PROJECT_H

#include "StringNode.h"
#include <vector>

class StringList {
private:
    StringNode* head;
public:
    StringList();
    StringList(const std::vector<std::string>& stringVector);

    void swap(StringList& other);
    StringList& operator=(StringList other);
    bool operator==(const StringList& other);

    void pushBack(std::string s);
    void popBack();
    std::string back();

    static void swapNodes(StringNode*& previousNext, StringNode* node1, StringNode* node2);
    void bubbleSort();

    // For you to implement
//    StringList(const StringList& other);
//    ~StringList();
//    std::string concatenate(const std::string& separator);
//    std::string toString();
//    void pushFront(std::string s);
//    void popFront();
//    std::string front();
//    StringList operator+(const StringList& other);
//    void reverse();
//    bool insert(std::string s, int position);
//    bool remove(int position);
};


#endif //LINKED_LIST_FUNCTIONALITY_PROJECT_H
