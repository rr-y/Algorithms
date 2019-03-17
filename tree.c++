#include<iostream>
#include<queue>
using namespace std;

// input format -- preorder -- 1 2 -1 -1 3 -1 -1


class node
{
	public:
		int data;
		node *left;
		node *right;

		node(int d)
		{
			data = d;
			left = NULL;
			right = NULL;
		}

};


void BFS(node* root)
{
	queue <node *> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		if(q.front() != NULL )
		{

			node *ans = q.front();
			q.pop();
			cout<<ans->data<<" ";
			if(ans->left != NULL)
			{
				q.push(ans->left);
			}

			if(ans->right != NULL)
			{
				q.push(ans->right);
			}

			
		}

		else
		{
			q.pop();
			cout<<"\n";
			if(!q.empty())
				q.push(NULL);
		}


	}
}





node* buildTree()
{
	int d;
	cin>>d;

	if(d == -1)
		return NULL;

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();

	return root;
}

void printTree(node * root)
{
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}





int main()
{
	node* root = buildTree();
	//printTree(root);
	cout<<"\n";
	BFS(root);
	return 0;
}