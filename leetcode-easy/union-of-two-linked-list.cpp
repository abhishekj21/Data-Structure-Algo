class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        map<int, Node*> map;
        Node* curr = head1;
        while(curr){
            map[curr->data] = curr;
            curr = curr->next;
        }
        curr = head2;
        while(curr){
            map[curr->data] = curr;
            curr = curr->next;
        }
        Node* UL = NULL;
        curr = 0;
        for(auto it = map.begin(); it != map.end(); it++){
            if(!UL){
                UL = it->second;
                curr = UL;
            } 
            else{
                curr->next = it->second;
                curr = curr->next;
            }
        }
        curr->next = 0;
        return UL;
    }
};