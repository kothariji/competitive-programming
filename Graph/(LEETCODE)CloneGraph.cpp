/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<Node*,Node*>mp;   //taking the copies of nodes
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        Node* clone = new Node(node->val,{});
        mp[node]=clone;
       queue<Node*>copy;
        copy.push(node);
        while(!copy.empty()){
            Node* curr=copy.front();
            copy.pop();
            for(Node* neighbor:curr->neighbors){
                if(mp.find(neighbor)==mp.end()){
                    mp[neighbor]=new Node(neighbor->val,{});    //clone of the neighbor in map
                copy.push(neighbor);
                }
            mp[curr]->neighbors.push_back(mp[neighbor]);
            }
        }
        return clone;
    }
};
