#include <iostream>
#include <deque>

using namespace std;

void display(deque <char> que);
void display2(deque<int> que2);

int main()
{
    deque <char> que;
    que.push_front('S');
    que.push_back('K');
    que.push_back('A');
    que.push_back('T');
    que.push_back('E');
    
    display(que);
    
    cout << "Size of que: " << que.size() << endl;
    cout << "Element at position 2: " << que.at(1) << endl;
    cout << "Front element: " << que.front() << endl;
    cout << "Back element: " << que.back() << endl;
    que.pop_back();
    cout << "Que after popping back element: ";
    display(que);
    que.pop_front();
    cout << "Que after popping front element: ";
    display(que);
    cout << "Front element: " << que.front() << endl;
    display(que);
    
    cout << "----------------------------" << endl;
    
    deque <int> que2;
    que2.push_front(30);
    que2.push_back(17);
    que2.push_back(45);
    que2.push_back(90);
    
    display2(que2);
    
    cout << "Size of que: " << que2.size() << endl;
    cout << "Element at position 2: " << que2.at(1) << endl;
    cout << "Front element: " << que2.front() << endl;
    cout << "Back element: " << que2.back() << endl;
    que2.pop_back();
    cout << "Que after popping back element: ";
    display2(que2);
    que2.pop_front();
    cout << "Que after popping front element: ";
    display2(que2);
    cout << "Front element: " << que2.front() << endl;
    display2(que2);
    
    
    cout << que2.front() + que2.back() << endl;
    
}

void display2(deque <int> que2)
{
    deque <int> :: iterator bloop;
    cout << "[";
    for(bloop = que2.begin(); bloop != que2.end(); ++bloop)
    { 
        cout << *bloop << " "; 
    }  
    
    cout << "]";
    cout << endl;
}

void display(deque <char> que)
{
    deque <char> :: iterator bloop;
    cout << "[";
    for(bloop = que.begin(); bloop != que.end(); ++bloop)
    { 
        cout << *bloop << " "; 
    }  
    
    cout << "]";
    cout << endl;
}
