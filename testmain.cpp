#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main()
{
  char tempFirst[100];
  char tempLast[100];
  int tempID;
  float tempGPA;

  cout << "Type info for student 1"<< endl;
  Student* student1 = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  cout << "enter id" << endl;
  cin >> tempID;
  cin.get();
  cout << "enter gpa" << endl;
  cin >> tempGPA;
  cin.get();
  student1->setFirstName(tempFirst);
  student1->setLastName(tempLast);
  student1->setID(tempID);
  student1->setGPA(tempGPA);
  Node* studentNode1;
  studentNode1 = new Node(student1);
  

  cout << "Type info for student 2" << endl;
  Student* student2 = new Student();
  cout << "enter first name" << endl;
  cin.get(tempFirst,100);
  cin.get();
  cout << "enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  cout << "enter id" << endl;
  cin >> tempID;
  cin.get();
  cout << "enter gpa" << endl;
  cin >> tempGPA;
  cin.get();
  student2->setFirstName(tempFirst);
  student2->setLastName(tempLast);
  student2->setID(tempID);
  student2->setGPA(tempGPA);
  Node* studentNode2 = new Node(student2);  

  
  cout << "Type info for student h"<< endl;
  Student* studenth = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  cout << "enter id" << endl;
  cin >> tempID;
  cin.get();
  cout << "enter gpa" << endl;
  cin >> tempGPA;
  cin.get();
  Node* studentNodeh = new Node(studenth);
  studenth->setFirstName(tempFirst);
  studenth->setLastName(tempLast);
  studenth->setID(tempID);
  studenth->setGPA(tempGPA);

  
  cout << "Type info for student n"<< endl;
  Student* studentn = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  cout << "enter id" << endl;
  cin >> tempID;
  cin.get();
  cout << "enter gpa" << endl;
  cin >> tempGPA;
  cin.get();
  studentn->setFirstName(tempFirst);
  studentn->setLastName(tempLast);
  studentn->setID(tempID);
  studentn->setGPA(tempGPA);
  Node* studentNoden;
  studentNoden = new Node(studentn);

  studentNodeh->setNext(studentNode1);
  studentNode1->setNext(studentNoden);
  studentNoden->setNext(studentNode2);

  /*
  cout << student1->getFirstName() << " ";
  cout << student1->getLastName() << " ";
  cout << student1->getID() << " ";
  cout << student1->getGPA() << " ";
    
  cout << student2->getFirstName() << " ";
  cout << student2->getLastName() << " ";
  cout << student2->getID() << " ";
  cout << student2->getGPA() << endl;
  */
  
  cout << "following from node" << endl;

  
  Student* tempStudenth;
  tempStudenth = studentNodeh->getStudent();

  cout << tempStudenth->getFirstName() << " ";
  cout << tempStudenth->getLastName() << " ";
  cout << tempStudenth->getID() << " ";
  cout << tempStudenth->getGPA() << endl;

  Node* tempNode1;
  Student* tempStudent1;
  tempNode1 = studentNodeh->getNext();
  tempStudent1 = tempNode1->getStudent();
  
  cout << tempStudent1->getFirstName() << " ";
  cout << tempStudent1->getLastName() << " ";
  cout << tempStudent1->getID() << " ";
  cout << tempStudent1->getGPA() << endl;

  
  Node* tempNoden;
  Student* tempStudentn;
  tempNoden = studentNode1->getNext();
  tempStudentn = tempNoden->getStudent();
  
  cout << tempStudentn->getFirstName() << " ";
  cout << tempStudentn->getLastName() << " ";
  cout << tempStudentn->getID() << " ";
  cout << tempStudentn->getGPA() << endl;

  
  Node* tempNode2;
  Student* tempStudent2;
  tempNode2 = studentNoden->getNext();
  tempStudent2 = tempNode2->getStudent();
  
  cout << tempStudent2->getFirstName() << " ";
  cout << tempStudent2->getLastName() << " ";
  cout << tempStudent2->getID() << " ";
  cout << tempStudent2->getGPA() << endl;
  
  
  return 0;
}
