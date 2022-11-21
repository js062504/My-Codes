#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node* reverseNode(struct Node * h){
    Node *prev=NULL;
    Node *next=NULL;
    Node *curr=h;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
    
}

int main(){

    struct Node *head=new struct Node();
    head->data=1;
    struct Node *head1=new struct Node();
    head1->data=2;
    struct Node *head2=new struct Node();
    head2->data=3;
    struct Node *head3=new struct Node();
    head3->data=4;

    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=NULL;

    struct Node *ans=head;
    while(ans->next!=NULL){
        printf("%d->",ans->data);
        ans=ans->next;
    }
    printf("%d\n",ans->data);

    struct Node *ptr=reverseNode(head);
    while(ptr->next!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);

    

    return 0;
}