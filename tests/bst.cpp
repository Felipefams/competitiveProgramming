#include <bits/stdc++.h>
using namespace std;
//vrum vrum
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);
//constants
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define exp 1e9
#define imax INT_MAX
#define imin INT_MIN
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
//types
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define null NULL
struct Node{
	int data;
	Node *left;
	Node *right;
};
typedef Node* ref_node;

class bst{
	public:
		ref_node root;
	private:
		void insert(int data){
			ref_node n; n->data = data;
			ref_node i = this->root;
			while(i != null){
				if(n->data <= i->data)i = i->left;
				else i = i->right;	
			}
			i = n;
		}
};

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	bst *b = new bst();
	ref_node n = new Node();
	n->data = 1;
	b->insert(n);
	return (0);
}


