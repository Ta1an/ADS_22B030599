#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    string value;
    ListNode* next;
    ListNode* tail;
    ListNode(string x){
        this->value = x;
        this->next = NULL;
        this->tail = NULL;
    }
    ListNode(){
        this->value = "";
        this->next = NULL;
        this->tail = NULL;
    }
};
struct LinkedList{
    ListNode* head;
    ListNode* tail;
    int length;
    LinkedList(){
        head = NULL;
        tail = NULL;
    };
    void InsertNode(string value){
        ListNode* newOne = new ListNode(value);
        if(!head){
            head = tail = newOne;
        }else{
            tail->next = newOne;
            tail = tail->next;
        }
    }
    void changeNode(int m){
        ListNode *temp = head;
        ListNode *res = new ListNode();
        ListNode *ans = res;
        ListNode *res_1 = new ListNode();
        ListNode *ans_1 = res_1;
        int cnt = 0;
        while(temp){
            if(cnt!=m){
                ListNode* newOne = new ListNode(temp->value);
                res->next = newOne;
                res = res->next;
                cnt++;
            }else{
                ListNode* newOne = new ListNode(temp->value);
                res_1->next = newOne;
                res_1=res_1->next;
            }
            temp = temp->next;
        }
        res_1->next = ans->next;
        head = ans_1->next;
    }
    void printNode(){
        while(head){
            cout << head->value << " ";
            head = head->next;
        }
    }
};
int main(){
    LinkedList l;
    int n, m ;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        l.InsertNode(s);
    }
    l.changeNode(m);
    l.printNode();
}