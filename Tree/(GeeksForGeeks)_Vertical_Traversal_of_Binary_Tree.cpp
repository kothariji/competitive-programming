#include<bits/stdc++.h>
using namespace std;
#define ln "\n";
#define TC() int t; cin >> t; while(t--)
#define IO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;

struct node{
	int val;
	node *left = nullptr, *right = nullptr;
};

void preOrder(node* root){
	if(root == nullptr) return;
	cout << root->val << " ";
	preOrder(root->left);
	preOrder(root->right);
}

vector<int> verticalOrder(node *root){
	map<int,vector<int>> m;
	queue<pair<node*,int>> q;
	q.push({root,0});

	while(!q.empty()){
	   node* n = q.front().first;
	   int x = q.front().second;
	   m[x].push_back(n->val);
	   q.pop();
	   if(n->left != nullptr) q.push({n->left,x-1});
	   if(n->right != nullptr) q.push({n->right,x+1});
	}
	vector<int> ans;
	for(auto i : m){
	   for(auto j : i.second) ans.push_back(j);
	}
	return ans;
}

int main(){
	IO();
	// TC() solve();
	
	node *root = new node;
	node *node1 = new node;
	node *node2 = new node;
	node *node3 = new node;
	node *node4 = new node;
	node *node5 = new node;
	node *node6 = new node;

	node *node7 = new node;
	node *node8 = new node;

	root->val = 1;

	node1->val = 2;
	node2->val = 3;
	root->left = node1;
	root->right = node2;

	node3->val = 4;
	node4->val = 5;
	node1->left = node3;
	node1->right = node4;

	node5->val = 6;
	node6->val = 7;
	node2->left = node5;
	node2->right = node6;

	node7->val = 8;
	node8->val = 9;
	node5->right = node7;
	node6->right = node8;

	// preOrder(root);
	vector<int> v = verticalOrder(root);
	for(auto i : v) cout << i <<" ";

	return 0;
}
