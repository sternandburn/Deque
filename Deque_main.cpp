#include <iostream>
#include <fstream>
#include <deque>
#include <string>

using namespace std;
void readContacts(deque <string>& callLog);
void printContact(deque <string> callLog);
void addCall(deque <string>& callLog);
void printMenu();

int main()
{
  printMenu();
  return 0;
}

void readContacts(deque <string>& callLog)
{
  string input;
  fstream infile("Contacts.txt");
  while(infile >> input)
  {
    callLog.push_front(input);
  }
}

void printContact(deque <string> callLog)
{
  deque <string> :: iterator loop;

  for(loop = callLog.begin(); loop != callLog.end(); ++loop)
  {
      cout << *loop << endl;
  }

  cout << endl;
}

void addContact(deque <string>& callLog)
{
  string input;
  cout << "Input call as Name-Number >> ";
  cin >> input;
  callLog.push_front(input);
}

void delContact(deque <string>& callLog)
{
  callLog.pop_back();
}

void printMenu()
{
  deque <string> callLog;
  readContacts(callLog);
  int choice = 0;
  while(choice != 4)
  {
    cout << "Call Logs:" << endl;
    cout << "1: to print log" << endl;
    cout << "2: to add call to log" << endl;
    cout << "3: to delete first call from log" << endl;
    cout << "4: to exit" << endl;
    cin >> choice;
    switch(choice)
    {
      case 1:
        printContact(callLog);
        break;
      case 2:
        addContact(callLog);
        break;
      case 3:
        delContact(callLog);
        break;
      case 4:
        cout << "Exiting" << endl;
        break;
    }
  }
}
