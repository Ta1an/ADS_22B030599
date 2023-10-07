#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
    ListNode(int val) : data(val), next(NULL) {}
};

void insert(ListNode*&head , int val) {
    ListNode* newNode = new ListNode(val);
    if(head == NULL){
        head = newNode;
    }else{
        ListNode* current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newNode;
    }
}
void deleteSecondElements(ListNode*& head){
    if(head == NULL || head->next == NULL){
        return;
    }
    ListNode* current = head;
    while(current != NULL && current->next != NULL){
        ListNode* temp = current->next;
        current->next = temp->next;
        delete temp;
        current = current->next;
    }
}
void printList(ListNode* head){
    ListNode* current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    ListNode* head = NULL;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        insert(head, val);
    }
    deleteSecondElements(head);
    printList(head);
    while(head != NULL){
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
