#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
//functions
#define sqr(a) (a)*(a)
#define sz(x) ((int)x.size())
#define watch(x) cout << (#x) << " is " << (x) << endl
//utils
#define umap unordered_map
#define uset unordered_set
#define pb push_back
#define mk make_pair
#define fi first
#define sc second
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }

class node{
public:
	int val;
	node *left;
	node *right;
	node(int x){
		this->val = x;
		left = NULL;
		right = NULL;
	}
};

class bst{
public:
	node *root;
	bst(){
		root = NULL;
	}
	void insert(int val){
		node *temp = new node(val);
		if(root == NULL){
			root = temp;
			return;
		}
		node *curr = root;
		while(curr != NULL){
			if(val < curr->val){
				if(curr->left == NULL){
					curr->left = temp;
					return;
				}
				curr = curr->left;
			}
			else{
				if(curr->right == NULL){
					curr->right = temp;
					return;
				}
				curr = curr->right;
			}
		}
	}
	void inorder(node *curr){
		if(curr == NULL) return;
		inorder(curr->left);
		cout << curr->val << " ";
		inorder(curr->right);
	}
	void preorder(node *curr){
		if(curr == NULL) return;
		cout << curr->val << " ";
		preorder(curr->left);
		preorder(curr->right);
	}
	void postorder(node *curr){
		if(curr == NULL) return;
		postorder(curr->left);
		postorder(curr->right);
		cout << curr->val << " ";
	}
	void levelorder(node *curr){
		queue<node*> q;
		q.push(curr);
		while(!q.empty()){
			node *temp = q.front();
			q.pop();
			cout << temp->val << " ";
			if(temp->left != NULL) q.push(temp->left);
			if(temp->right != NULL) q.push(temp->right);
		}
	}
	void print(){
		cout << "Inorder: ";
		inorder(root);
		cout << endl;
		cout << "Preorder: ";
		preorder(root);
		cout << endl;
		cout << "Postorder: ";
		postorder(root);
		cout << endl;
		cout << "Levelorder: ";
		levelorder(root);
		cout << endl;
	}	
};

/*
void solve(){
	vector<int> v(4);
	for(int i = 0; i < 4; ++i) cin >> v[i];
	sort(v.begin(), v.end());
	int ans = (v[0] + v[3]) - (v[1] + v[2]);
	cout << ans << endl;
}*/

// cout << "Case #" << t << ": ";
int main(){
//	fast_io;
	bst b;	
	b.insert(5);
	b.insert(3);
	b.insert(7);
	b.insert(2);
	b.insert(4);
	b.insert(6);
	b.insert(8);
	b.print();

	return (0);
}
