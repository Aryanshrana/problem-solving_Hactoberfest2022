#include <iostream>
using namespace std;

struct Linked_list{
    int value;
    struct Linked_list *next;
};

typedef struct Linked_list *node;

void add_value_node();
void traverse();
void ldelete();
void search();
node start, dum;
int main(){
    cout<<"1.Add value \n2.Traverse\n3. Delete \n4. Search\n";
    int choice;
    start = NULL;
    dum= NULL;
    while(true){
        cout<<"enter: \n";
           cin>>choice;
    switch(choice){
        case 1: {
            add_value_node(); break;
        }
        case 2:{
            traverse();break;
        }
        case 3:{
            ldelete();break;
        }
        case 4:{
            search();break;
        }

    }

    }}



void add_value_node(){
    int num;
    cout<<"Enter number: \n";
    cin>>num;
    node temp;
    temp = (node)malloc(sizeof(struct Linked_list));
    temp->value = num;
    temp->next = NULL;
    if(start==NULL){
        start = (node)malloc(sizeof(struct Linked_list));
        dum = (node)malloc(sizeof(struct Linked_list));
        start = temp;}
    else{
        dum = start;
        while(dum->next !=NULL){
            dum = dum->next;
        }
    dum->next = temp;
    }
}

void traverse(){
    dum = start;
    if(start== NULL)
        cout<<"List is empty";
    else{
        while(dum != NULL){
            cout<<dum->value<<" \n";
            dum = dum->next;
        }
    }
}
void search(){
    int val;
    cout<<"Enter the value to search: \n";
    cin>>val;
    dum = start;
    if(start==NULL)
        cout<<"List is empty\n";
    else{
        while(dum!=NULL){
            if(dum->value == val){
                cout<<"value found at "<<dum<<"\n";break;}
            else{
                dum = dum->next;
            }}
    }
}

void ldelete(){
    int val;
    cout<<"Enter the value to delete\n";
    cin>>val;
    int flag=0;
    dum = start;
    if(start == NULL)
        cout<<"List is empty.\n";
    else if(start->value == val){
        flag=1;
        cout<<"Deleted.\n";
        start=start->next;
    }
    else{
        while((dum->next)!=NULL){
            if(((dum->next)->value)==val){
                dum->next = (dum->next)->next;
                cout<<"Deleted\n";
                flag = 1;
                break;
            }
            else
                dum=dum->next;
        }}
        if(flag==0)
            cout<<"No such data found.\n";

}
