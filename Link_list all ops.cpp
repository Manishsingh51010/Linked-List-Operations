#include<iostream>
#include<stdlib.h>
using namespace std;
//insertion - beginning and end
struct node {
int data;
struct node *next;
}*head;

/*
void insertion(int data){
 struct node *newNode,*temp;
 newNode = new node;
 newNode->data = data;
 newNode->next = NULL;
 if(head==NULL)
    head=newNode;
 else{
 temp=head;
 while(temp->next!=NULL){
    temp=temp->next;
 }
 temp->next=newNode;
 }
}

void insertatbegining(int val){
 struct node *newNode;
 newNode= new node;
 newNode->data=val;
 newNode->next=head;
 head=newNode;
}

void display(){
 struct node *temp;
 if(head==NULL)
    cout<<"List is empty";
 else{
    temp=head;
    cout<<"List:\n";
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
 }
}

int main(){
    int n,data,val;
cout<<"enter size of linked list\n";
cin>>n;
cout<<"Enter elements\n";
for(int i=0;i<n;i++){
    cin>>data;
    insertion(data);
 }
 display();
 cout<<"Enter data to insert at begining of the list:\n";
 cin>>val;
 insertatbegining(val);
 display();
}
*/

//2.
//insertion before specific node of given data
/*
void create(int data){
node* newnode,*temp;
newnode = new node;
newnode->data = data;
newnode->next = NULL;
if(head==NULL)
    head=newnode;
else{
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
 }
}

void insertionbw(int val){
    int a=0,count=0,data1;
node* newnode,*temp,*prev;
newnode=new node;
if(newnode==NULL)
    cout<<"Empty list\n";
else{
cout<<"Enter data to be inserted\n";
cin>>data1;
temp=head;
while(temp->data!=val){
    temp=temp->next;
    count++;
 }
prev=head;
while(a!=count-1){
    prev=prev->next;
    a++;
 }
newnode->data=data1;
newnode->next=temp;
prev->next=newnode;
 }
}

void display(){
node* temp;
if(head==NULL)
    cout<<"empty list";
else{
  temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"\n";
      temp=temp->next;
  }
 }
}

int main(){
int n,data,val;
cout<<"Enter size of list\n";
cin>>n;
cout<<"enter elements\n";
for(int i=0;i<n;i++){
    cin>>data;
    create(data);
}
cout<<"List before insertion:\n";
display();
cout<<"Enter element you want to insert before\n";
cin>>val;
insertionbw(val);
cout<<"List after insertion\n";
display();
}
*/


//3.
//insertion after a specific node
/*void create(int data){
node *newnode,*temp;
newnode = new node;
newnode->data = data;
newnode->next = NULL;
if(head==NULL)
    head=newnode;
else{
  temp=head;
  while(temp->next!=NULL)
        temp=temp->next;
  }
  temp->next=newnode;
 }

void insertafter(int val){
    int data1;
node *newnode,*temp;
newnode = new node;
if(newnode==NULL)
    cout<<"Empty list\n";
else{
  cout<<"Enter value to be inserted\n";
cin>>data1;
 temp=head;
 while(temp->data!=val){
      temp=temp->next;
  }
  newnode->data=data1;
  newnode->next=temp->next;
  temp->next=newnode;
 }
}

void display(){
node *temp;
temp=head;
while(temp!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->next;
 }
}

int main(){
int n,data,val;
cout<<"Enter size of list\n";
cin>>n;
cout<<"enter elements\n";
for(int i=0;i<n;i++){
    cin>>data;
    create(data);
}
cout<<"List before insertion:\n";
display();
cout<<"Enter element you want to insert after\n";
cin>>val;
insertafter(val);
cout<<"List after insertion\n";
display();
}
*/


//4.
//delete a specific node
/*
void create(int data){
node *newnode,*temp;
newnode=new node;
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
    head=newnode;
else{
  temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
temp->next=newnode;
 }
}

void deletenode(int val){
 int a=1,count=1;
 node* temp,*prev;
 temp=head;
 while(temp->data!=val){
    temp=temp->next;
    count++;
 }
 prev=head;
 while(a!=count-1){
    prev=prev->next;
    a++;
 }
 prev->next=temp->next;
}

void display(){
node *temp;
temp=head;
while(temp!=NULL){
 cout<<temp->data<<"\n";
 temp=temp->next;
 }
}

int main(){
int n,data,val;
cout<<"Enter size of list\n";
cin>>n;
cout<<"Enter elements\n";
for(int i=0;i<n;i++){
    cin>>data;
    create(data);
}
cout<<"list before\n";
display();
cout<<"Enter element you want to delete\n";
cin>>val;
deletenode(val);
cout<<"after deletion\n";
display();
}
*/


//5.
//remove beginning and end node
/*void create(int data){
node *newnode,*temp;
newnode=new node;
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
    head=newnode;
else{
  temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
temp->next=newnode;
 }
}

void removebegining(){
if(head==NULL)
    cout<<"list is empty\n";
else{
  struct node *temp=head;
  if(head->next==NULL){
    head=NULL;
    free(temp);
  }
  else{
    head=temp->next;
    free(temp);
  }
 }
}

void removeend(){
if(head==NULL)
    cout<<"empty list";
else{
  struct node* temp1=head,*temp2;
  if(head->next==NULL)
        head=NULL;
  else{
     while(temp1->next!=NULL){
    temp2=temp1;
    temp1=temp1->next;
  }
  temp2->next=NULL;
 }
 free(temp1);
}
}
void display(){
node *temp;
temp=head;
while(temp!=NULL){
 cout<<temp->data<<"\n";
 temp=temp->next;
 }
}

int main(){
int n,data,val;
cout<<"Enter size of list\n";
cin>>n;
cout<<"Enter elements\n";
for(int i=0;i<n;i++){
    cin>>data;
    create(data);
}
cout<<"list before\n";
display();
//removebegining();
removeend();
cout<<"after deletion\n";
display();
}*/



