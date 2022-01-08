/*This program is used to test the node class. Students are added, then printed out using recursion.
 *There are four nodes added and their order are set to be studentNodeh, studentNode1, studentNoden and studentNode2.  
Author: Jennifer Wang
1/7/22
 */
#include <iostream>
#include <cstring>
#include <iomanip>
#include "node.h"
#include "student.h"

using namespace std;

//declare function
void print(Node* head, Node* next);


int main()
{
  //variabels
  char tempFirst[100];
  char tempLast[100];
  int tempID;
  float tempGPA;

  //enter and set info for student 1
  cout << "Type info for student 1"<< endl;
  Student* student1 = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  tempID = 3;
  tempGPA = 4.0;
  student1->setFirstName(tempFirst);
  student1->setLastName(tempLast);
  student1->setID(tempID);
  student1->setGPA(tempGPA);
  Node* studentNode1;
  studentNode1 = new Node(student1);
  
  //enter and set info for student 2
  cout << "Type info for student 2" << endl;
  Student* student2 = new Student();
  cout << "enter first name" << endl;
  cin.get(tempFirst,100);
  cin.get();
  cout << "enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  tempID = 2;
  tempGPA = 3.0;
  student2->setFirstName(tempFirst);
  student2->setLastName(tempLast);
  student2->setID(tempID);
  student2->setGPA(tempGPA);
  Node* studentNode2 = new Node(student2);  

  //enter and set info for head student
  cout << "Type info for student h"<< endl;
  Student* studenth = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  tempID = 5;
  tempGPA = 3.5;
  Node* studentNodeh = new Node(studenth);
  studenth->setFirstName(tempFirst);
  studenth->setLastName(tempLast);
  studenth->setID(tempID);
  studenth->setGPA(tempGPA);

  //enter and set info for student n
  cout << "Type info for student n"<< endl;
  Student* studentn = new Student();
  cout << "Enter first name" << endl;
  cin.get(tempFirst, 100);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(tempLast, 100);
  cin.get();
  tempID = 2;
  tempGPA = 2.0;
  studentn->setFirstName(tempFirst);
  studentn->setLastName(tempLast);
  studentn->setID(tempID);
  studentn->setGPA(tempGPA);
  Node* studentNoden;
  studentNoden = new Node(studentn);

  //set node order
  studentNodeh->setNext(studentNode1);
  studentNode1->setNext(studentNoden);
  studentNoden->setNext(studentNode2);
  
  
  cout << "printing out nodes" << endl;

  //print out head student 
  Student* tempStudenth;
  tempStudenth = studentNodeh->getStudent();
  
  cout << tempStudenth->getFirstName() << " ";
  cout << tempStudenth->getLastName() << " ";
  cout << tempStudenth->getID() << " ";
  cout << fixed<<setprecision(2)<<tempStudenth->getGPA() << endl;
  
  //print out student 1
  Node* tempNode1;
  Student* tempStudent1;
  tempNode1 = studentNodeh->getNext();
  tempStudent1 = tempNode1->getStudent();
  
  cout << tempStudent1->getFirstName() << " ";
  cout << tempStudent1->getLastName() << " ";
  cout << tempStudent1->getID() << " ";
  cout << fixed<<setprecision(2)<<tempStudent1->getGPA() << endl;
  
  //print out student n
  Node* tempNoden;
  Student* tempStudentn;
  tempNoden = studentNode1->getNext();
  tempStudentn = tempNoden->getStudent();
  
  cout << tempStudentn->getFirstName() << " ";
  cout << tempStudentn->getLastName() << " ";
  cout << tempStudentn->getID() << " ";
  cout << fixed<<setprecision(2)<<tempStudentn->getGPA() << endl;
  
  //print out student 2
  Node* tempNode2;
  Student* tempStudent2;
  tempNode2 = studentNoden->getNext();
  tempStudent2 = tempNode2->getStudent();
  
  cout << tempStudent2->getFirstName() << " ";
  cout << tempStudent2->getLastName() << " ";
  cout << tempStudent2->getID() << " ";
  cout << fixed<<setprecision(2)<<tempStudent2->getGPA() << endl;

  //print nodes by calling recursive function
  cout << "printing out using recursion" << endl;
  print(studentNodeh, studentNodeh);
  
  return 0;
}

//print function using recursion
void print(Node* head, Node* next)
{
  //if next equals head, print out "list: "
  if (next == head)
    {
      cout << "list: " << endl;
    }
  // if next doesn't equal NULL, print out student info
  if (next != NULL)
    {
      Student* tempstu = next->getStudent();
      
      cout << tempstu->getFirstName() << " ";
      cout << tempstu->getLastName() << " ";
      cout << tempstu->getID() << " ";
      cout << fixed<<setprecision(2)<<tempstu->getGPA() << endl;

      /*
      cout << (next->getStudent())->getFirstName() << " ";
      cout << (next->getStudent())->getLastName() << " ";
      cout << (next->getStudent())->getID() << " ";
      cout << (next->getStudent())->getGPA() << endl;
      */

      //call function again
      print(head, next->getNext());
    }
}
