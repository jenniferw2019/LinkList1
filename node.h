#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node
{
 public:
  Node();
  Node(Student* newStudent);
  Node* getNext();
  Student* getStudent();
  void setNext(Node* newNode);
  ~Node();

 private:
  Node* next;
  Student* student;
  
};

#endif
