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
bool prime(ll a) { if (a==1) return 0; for (int i=2;i*i<=a;++i) if (a%i==0) return 0; return 1; }
template<typename T>
std::ostream & operator << (std::ostream &os ,std::vector<T> &v){
	for(auto& x : v) os << x << " ";	
	os << endl;
	return os;
}

struct ListNode{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#define null NULL

ListNode* revList(ListNode* head){
	ListNode* prev, *current, *next;
	prev = null;
	current = next = head;

	while(current){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}
void solve(){
	//list created
	ListNode* head = new ListNode(1);
	ListNode* tmp = head;
	for(int i = 2; i <= 5; ++i){ 
		tmp->next = new ListNode(i);
		tmp = tmp->next;
	}
	//print list
	for(ListNode* i = head; i != null; i = i->next){
		cout << i->val << " ";
	}
	cout << endl;

	head = revList(head);
	//print list
	for(ListNode* i = head; i != null; i = i->next){
		cout << i->val << " ";
	}
	cout << endl;
}

// cout << "Case #" << t << ": ";
int main(){
	fast_io;
	solve();
	return (0);
}
