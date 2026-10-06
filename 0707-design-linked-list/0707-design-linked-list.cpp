class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};


class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        if(head==nullptr || index<0){
            return -1;
        }

        Node* temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
            if(temp==nullptr){
                return -1;
            }
        }
        return temp->val;    
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);

        if(head==NULL){
            head=newNode;
            return;
        }

        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index<0){
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
            if(temp==nullptr){
                return;
            }else if(temp->next==nullptr){
                Node* newNode=new Node(val);
                temp->next=newNode;
                return;
            }
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(index<0||head==nullptr){
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
            if(temp==nullptr || temp->next==nullptr){
                return;
            }
        }
        Node* dlt=temp->next;
        if(temp->next!=nullptr){
            temp->next=temp->next->next;
        }
        delete dlt;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna