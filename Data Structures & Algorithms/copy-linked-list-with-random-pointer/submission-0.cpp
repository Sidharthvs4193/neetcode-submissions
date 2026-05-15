/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       unordered_map<Node*,Node*> otc;
       otc[nullptr]=nullptr;
        Node* cur=head;
        while(cur){
            if(otc.find(cur)==otc.end()){
                otc[cur]=new Node(0);
            }
            otc[cur]->val=cur->val;
            if(otc.find(cur->next)==otc.end()){
                otc[cur->next]=new Node(0);
            }
            otc[cur]->next=otc[cur->next];
            if(otc.find(cur->random)==otc.end()){
                otc[cur->random]=new Node(0);
            }
            otc[cur]->random=otc[cur->random];
            cur=cur->next;
        }
        return otc[head];
    }
};
