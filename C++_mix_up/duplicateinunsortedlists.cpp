//Remove duplicate elements from unsorted LL
//Study Hashset in c++

Node * removeDuplicates( Node *head)
{
// your code goes here
if(head==NULL) return head;
set<int>s;
Node* temp = head;
Node* prev = NULL;
while(temp!=NULL){

if(s.find(temp->data)==s.end()){
s.insert(temp->data);
prev=temp;
temp=temp->next;
}
else{
prev->next=temp->next;
temp=temp->next;
}
}

return head;

}
