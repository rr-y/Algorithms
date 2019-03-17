#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node* left;
		node* right;

		node(int d)
		{
			data = d;
			node* left = NULL;
			node* right = NULL;

		}
};

int totalNode(node *root)
{
	if(root == NULL)
		return 0;
	else
	{
		return (1+totalNode(root->left)+totalNode(root->right));
	}

}



node* buildTree()
{
	int d;
	cin>>d;
	node * root;

	if(d == -1)
		return NULL;

	else
	{
		root = new node(d);
		root->left = buildTree();
		root->right = buildTree();
	}

	return root;
}

int path(node * root)
{
	if(root == NULL)
		return 0;
	else
	{
		return 1 + max(path(root->left),path(root->right));
	}
}

int diameter(node * root)
{
	int l = path(root->left);
	int r = path(root->right);
	return l+r;

}


int main()
{
	node *root = buildTree();
	cout<<"Total "<<totalNode(root)<<endl;

	cout<<"Diameter "<<diameter(root)<<endl;
	return 0;


}











