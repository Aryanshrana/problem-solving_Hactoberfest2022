#include <iostream>
#include <string>
#define ARR_SIZE 10
using namespace std;


template<class T>
class circular_queue{
private:
    T queue_arr[ARR_SIZE];int rear=-1;int front =-1;
public:
    void insert(){
    if(rear==(ARR_SIZE-1)){
        cout<<"Queue Overflow\n";exit(0);}
    else{
        T input;
        cin>>input;
     queue_arr[++rear] = input;
    }
        sort();
    }
    void remove(){
        if((front < 0) || (front==(rear+1))){
            cout<<"Queue empty\n";exit(0);
        }
        cout<<queue_arr[front];
        front++;
    }
    void sort(){
        while(true){
            int sort_check = 0;
        for(int i=front;i<rear;i++){
            if(queue_arr[i]>=queue_arr[i+1]){
                int temp = queue_arr[i];
                queue_arr[i] = queue_arr[i+1];
                queue_arr[i+1] = temp;
                sort_check = 1;
            }}
            if(sort_check==1)
                continue;
            else
                break;
        }
    }};
int main(){
    cout<<"Commands used: \n1. insert: to write to queue\nremove: to read from queue\n";
    circular_queue<int> queue_object;
    string ask;
    while(true){
    string input;
    cout<<"Command: ";
    cin>>input;         //input command
    if(input=="insert")
        queue_object.insert();
    else if(input=="remove")
        queue_object.remove();
    else{
        cout<<"command not recognized\n";
        continue;}
    cout<<"\nDo you want to continue operation?(y/n) ";     // asking user if they want to give more commands
    int indicator=0;
    while(true){
    cin>>ask;
    if (ask=="y"){
       break;}
    else if(ask == "n"){
        indicator=1;break;}
    else{cout<<"wrong input. Try again.\n";continue;}
    }
    if(indicator==1){break;}
    }
}




