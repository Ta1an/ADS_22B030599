//DoublyLinkedList
#include <bits/stdc++.h>
using namespace std;
struct Node {
    string bookName;
    Node* next;
    Node* prev;
    Node(const string& name) : bookName(name), next(nullptr), prev(nullptr){}
};
struct DoublyLinkedList {
    Node* front;
    Node* back;
    DoublyLinkedList() : front(nullptr), back(nullptr){}
    //Functions
    void addFront(const string& book){
        Node* newNode = new Node(book);
        if(!front){
            front = back = newNode;
        }else{
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        cout << "ok" << endl;
    }
    void addBack(const string& book){
        Node* newNode = new Node(book);
        if(!back){
            front = back = newNode;
        }else{
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
        cout << "ok" << endl;
    }
    void eraseFront(){
        if(front){
            Node* temp = front;
            front = front->next;
            if(front){
                front->prev = nullptr;
            }else{
                back = nullptr;
            }
            cout << temp->bookName << endl;
            delete temp;
        }else{
            cout << "error" << endl;
        }
    }
    void eraseBack(){
        if(back){
            Node* temp = back;
            back = back->prev;
            if(back){
                back->next = nullptr;
            }else{
                front = nullptr;
            }
            cout << temp->bookName << endl;
            delete temp;
        }else{
            cout << "error" << endl;
        }
    }
    void printFront(){
        if(front){
            cout << front->bookName << endl;
        }else{
            cout << "error" << endl;
        }
    }
    void printBack(){
        if(back){
            cout << back->bookName << endl;
        }else{
            cout << "error" << endl;
        }
    }
    void clear(){
        while(front){
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        back = nullptr;
        cout << "ok" << endl;
    }
    ~DoublyLinkedList(){
        clear();
    }
};
int main(){
    DoublyLinkedList bookList;
    string command;
    while(cin >> command){
        if(command == "add_front"){
            string bookName;
            cin >> bookName;
            bookList.addFront(bookName);
        }else if(command == "add_back"){
            string bookName;
            cin >> bookName;
            bookList.addBack(bookName);
        }else if(command == "erase_front"){
            bookList.eraseFront();
        }else if(command == "erase_back"){
            bookList.eraseBack();
        }else if(command == "front"){
            bookList.printFront();
        }else if(command == "back"){
            bookList.printBack();
        }else if(command == "clear"){
            bookList.clear();
        }else if(command == "exit"){
            cout << "goodbye" << endl;
            break;
        }
    }
    return 0;
}