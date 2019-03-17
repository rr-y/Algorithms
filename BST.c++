#include<iostream>
#include<vector>
using namespace std;

class node
{
	public:
		int data;
		node * left;
		node * right;

		node(int d)
		{
			data = d;
			left = NULL;
			right = NULL;
		}

};



void preorder(node* root)
{
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node *root,int k1,int k2)
{
	if(root == NULL)
		return;

	inorder(root->left,k1,k2);
	if(root->data >= k1 && root->data <= k2)
		cout<<root->data<<" ";
	inorder(root->right,k1,k2);

}


// node* balancedBST(vector <int> &v,int start,int end)
// {
// 	if(start > end)
// 		return NULL;
// 	int mid = (start+end)/2;
// 	node *root = new node(v[mid]);
// 	root->left = balancedBST(v,start,mid-1);
// 	root->right = balancedBST(v,mid+1,end);
// 	return root;

// }


node* buildtheBST(node *root,int k)
{
	if(root == NULL)
		return new node(k);

	if(root->data <= k)
		root->right = buildtheBST(root->right,k);
	else
		root->left = buildtheBST(root->left,k);

	return root;
}


node * buildBST(vector<int> &v)
{
	node *root = NULL;

	for(int i=0;i<v.size();i++)
		root = buildtheBST(root,v[i]);
	return root;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp,k1,k2;
		cin>>n;

		vector <int> v;
		v.reserve(n);

		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);
		}
		cin>>k1>>k2;
		node *root =  buildBST(v);
		cout<<"# Preorder : ";
		preorder(root);
		cout<<endl;
		cout<<"# Nodes within range are : ";
		inorder(root,k1,k2);
		cout<<endl;
		v.clear();
	}
}