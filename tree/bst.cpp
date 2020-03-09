#include<bits/stdc++.h>
using namespace std;
int num,val;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(int n)
		{
			data=n;
			left=right=NULL;
		}
};

node *tree= NULL;
node *insertelement(node *,int); 
void preorder(node *);
void inorder(node *);
void postorder(node *);
void levelorder(node *);
int minv(node *);
int maxv(node *);
node *deletenode(node*, int);
int totalnodes(node *);
int totalextnodes(node *);
int totalintnodes(node *);
int height(node *);
node* mirror(node *);
node *deletetree(node *);
bool search(node *,int );
bool isbst(node *);
bool isbstutil(node *,int, int);

int main()
{
	
	
	int option,x;
	
	do{
		cout<<"***********MAIN MENU***********"<<endl;
	cout<<"1. insert a node "<<endl;
	cout<<"2. preorder traversal "<<endl;
	cout<<"3. inorder traversal"<<endl;
	cout<<"4. postorder traversal"<<endl;
	cout<<"5. find smallest element"<<endl;
	cout<<"6. find largest element"<<endl;
	cout<<"7. delete an element "<<endl;
	cout<<"8. count total no of nodes"<<endl;
	cout<<"9. count total external nodes"<<endl;
	cout<<"10. count total internal nodes"<<endl;
	cout<<"11. determine height"<<endl;
	cout<<"12. determine mirror image"<<endl;
	cout<<"13. delete tree"<<endl;
	cout<<"14. level order traversal "<<endl;
	cout<<"15. search a value "<<endl;
	cout<<"16. check bst or not"<<endl;
	
	cout<<"17. exit"<<endl;
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"value to be inserted is "<<endl;
				cin>>val;
				tree = insertelement(tree,val);
				break;
			case 2:
				cout<<"preorder traversal is "<<endl;
				preorder(tree);
				break;
			case 3:
				cout<<"inorder traversal is "<<endl;
				inorder(tree);
				break;
			case 4:
				cout<<"postorder traversal is "<<endl;
				postorder(tree);
			    break;
			    
			case 5:
				cout<<"minimum in tree is "<<endl;
				cout<<minv(tree)<<endl;
				break;
				
			case 6:
				cout<<"maximum in tree is "<<endl;
				cout<<maxv(tree)<<endl;
				break;
				
			case 7:
				cout<<"node to be deleted is "<<endl;
				cin>>x;
				tree = deletenode(tree,x);
				break;
				
			case 8:
				cout<<"total nodes is "<< totalnodes(tree)<<endl;
				break;
				
			case 9:
				cout<<"total external nodes is "<<totalextnodes(tree)<<endl;
			    break;
			
			case 10:
				cout<<"total internal nodes is "<<totalintnodes(tree)<<endl;
				break;
				
			case 11:
				cout<<"height of tree is "<<height(tree)<<endl;
				break;
				
			case 12:
				tree = mirror(tree);
				break;
				
			case 13:
				tree= deletetree(tree);
				cout<<"tree is deleted "<<endl;
				break;
				
			case 14:
				cout<<"levelorder traversal is "<<endl;
				levelorder(tree);
				break;
				
			case 15:
				cout<<"search value "<<endl;
				cin>>x;
				if(search(tree,x))
				cout<<"found "<<endl;
				else
				cout<<"not found "<<endl;
				break;
			
			case 16:
				if(isbst(tree))
				cout<<"yes "<<endl;
				else
				cout<<"no "<<endl;
				break;
		
		}
		cout<<endl;
	}while(option!=17);
	
	
	return 0;
}

node *insertelement(node *tree, int val)
{
	node *n= new node(val);
//	node *nodeptr, *parentptr;
	if(tree==NULL)
	{
		tree= n;
	}
	if(val< tree->data)
	tree->left= insertelement(tree->left,val);
	else if(val>tree->data)
	tree->right= insertelement(tree->right, val);
	/*else{
		parentptr= NULL;
		nodeptr = tree;
	while(nodeptr!=NULL)
	{
		parentptr= nodeptr;
		if(val<nodeptr->data)
		   nodeptr=nodeptr->left;
		else
		nodeptr= nodeptr->right;
	}
	if(val<parentptr->data)
	 parentptr=parentptr->left;
	 else
	 parentptr=parentptr->right;

}*/
    return tree;
}

void preorder(node *tree)
{
	if(tree!= NULL)
    {
    	cout<<tree->data<<" ";
    	preorder(tree->left);
    	preorder(tree->right);
	}

	
}

void inorder(node *tree)
{
	if(tree!=NULL)
	{
		inorder(tree->left);
		cout<<tree->data<<" ";
		inorder(tree->right);
	}

	
}

void postorder(node *tree)
{
	if(tree!=NULL)
	{
		postorder(tree->left);
		postorder(tree->right);
		cout<<tree->data<<" ";
	}
	
}

void levelorder(node *root)
{
	if(root)
	{
		queue<node *> q;
		q.push(root);
		while(!q.empty())
		{
			node *x= q.front();
			cout<<x->data<<" ";
			q.pop();
			if(x->left)
			q.push(x->left);
			if(x->right)
			q.push(x->right);
		}
	}
}

int maxv(node *root)
{
	node *t= root;
	while(t->right!=NULL)
	{
		t=t->right;
	}
	return t->data;
}

int minv(node *root)
{
	node *t=root;
	while(t->left!=NULL)
	{
		t=t->left;
	}
	return t->data;
}

node *minvalnode(node *tree)
{
  node *t= tree;
  while(t&&t->left!=NULL)
  t=t->left;
  
  return t;	
}

node *deletenode(node *tree,int x)
{
	if(tree==NULL) return tree;
    if(x< tree->data)
    tree->left= deletenode(tree->left, x);
    else if(x>tree->data)
    tree->right= deletenode(tree->right, x);
    else      // node with one child or  no child
    {
    	if(tree->left==NULL)
    	{
    		node *t= tree->right;
    		free(tree);
    		return t;
		}
		else if(tree->right==NULL)
		{
			node *t= tree->left;
			free(tree);
			return t;
		}
		
		//node with two children
		node *t= minvalnode(tree->right);
		
		//copy inorder successor data
		tree->data= t->data;
		
		// delete inorder successor
		tree->right= deletenode(tree->right,t->data);
	}
    return tree;
}

node* mirror(node *tree)
{
	if(tree)
	{
		mirror(tree->left);
		mirror(tree->right);
		node *t= tree->left;
		tree->left= tree->right;
		tree->right= t;
	}
	return tree;
}

int totalnodes(node *root)
{
	if(root)
	{
		return (totalnodes(root->left)+totalnodes(root->right)+1);
	}
}

int totalextnodes(node *root)
{
	if(root)
	{
		if (root->left==NULL && root->right==NULL)
		return 1;
		else
		return (totalextnodes(root->left)+totalextnodes(root->right));
	}
	return 0;
}

int totalintnodes(node *root)
{
	if(root==NULL||(root->left==NULL&&root->right==NULL))
	return 0;
	else
	return (totalintnodes(root->left) + totalintnodes(root->right)+1);
}

int height(node *root)
{
	if(root)
	{
		int lh= height(root->left);
		int rh= height(root->right);
		if(lh>rh)
		return lh+1;
		else
		return rh+1;
	}
}

node *deletetree(node *root)
{
	if(root)
	{
		deletetree(root->left);
		deletetree(root->right);
		free(root);
	}
}

bool search(node *root,int x)
{
	if(root)
	{
		if(root->data==x)
		return true;
		if(x<root->data)
		search(root->left,x);
		if(x>root->data)
		search(root->right,x);
	}
	return false;
	
}

bool isbst(node *root)
{
	return(isbstutil(root,INT_MIN,INT_MAX));
}

bool isbstutil(node *node,int min,int max)
{
	if(node==NULL)
	return true;
	
	if(node->data<min||node->data>max)
	return false;
	
	return isbstutil(node->left,min,node->data-1) && isbstutil(node->right,node->data+1,max);
}
