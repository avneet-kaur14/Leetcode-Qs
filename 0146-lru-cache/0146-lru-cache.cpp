class LRUCache {
public:
    struct Node{
        int key,value;
        Node* prev;
        Node* next;

        Node(int k , int v){
        key=k;
        value=v;
        prev=next=nullptr;
    }
    };

    unordered_map<int,Node*> mp;
    Node* head;
    Node* tail;

    void removeNode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void insertFront(Node* node){
        node->prev=head;
        node->next=head->next;

        node->next->prev=node;
        head->next=node;
    }
    int c;
    LRUCache(int capacity) {
        c=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);

        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        Node* node=mp[key];
        removeNode(node);
        insertFront(node);
        return node->value;
    }
    
    void put(int k, int val) {
        if(mp.find(k)!=mp.end()){ //key already exists
            Node* node=mp[k];
            node->value=val;
            removeNode(node);
            insertFront(node);
            return;
        }

        if(mp.size()==c){ //capacity is full
            Node* lruNode=tail->prev;
            removeNode(lruNode);
            mp.erase(lruNode->key);
            delete lruNode;
        }
        Node* newNode=new Node(k,val);
        mp[k]=newNode;
        insertFront(newNode);
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna