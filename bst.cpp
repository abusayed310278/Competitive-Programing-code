#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left,*right;
	
}*root=NULL;
void insertBst()
{
	int data;
	cout<<"Enter node data: ";
	cin>>data;
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->data=data;
	temp->right=NULL;
	
	if(root==NULL)
		root=temp;
	else{
		p=root;
		if(root->data >data)
		{
			while(p->left!=NULL)
				p=p->left;
			p->left=temp;
		}else{
			while(p->right!=NULL)
				p=p->right;
			p->right=temp;
		}
		
	}
	
}
void preorder(struct node* root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);

	}
	
}
void inorder(struct node* root)
{
	if(root)
	{
		
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);

	}
	
}
void postorder(struct node* root)
{
	if(root)
	{
		
		
		cout<<root->data<<" ";
		postorder(root->right);
		postorder(root->left);
	}
	
}
struct node* find(struct node* root,int data)
{
	if(root==NULL)
		cout<<"searched item not found.";
	else if(root->data >data){
		find(root->left,data);
	}else{
		find(root->right,data);	
	}
	
	return root;		
	
}
int max(struct node* root)
{
	if(root->right==NULL)
		return root->data;
	else
		return max(root->right);
		
}
int min(struct node* root)
{
		if(root->left==NULL)
			return root->data;
		else
			return min(root->left);
	
}

int height(struct node* root)
{
	if(root==NULL)
		return -1;
	else
		return max(height(root->left),height(root->right))+1;
	
}
//level order traversal (myschoolcode)
void lot(struct node* root)
{
	queue<node*>q;
	struct node* temp;
	
	if(root==NULL)return;
	q.push(root);
	
	
	while(!q.empty())
	{
		temp=q.front();
		cout<<temp->data<<" ";
			
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
		q.pop();
	}
	
	
}

struct node* insertR(struct node* p,int data)
{
	struct node* temp;
	if(p==NULL)
	{	
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->left=temp->right=NULL;
		return temp;
	}
	if(p->data >data)
		p->left=insertR(p->left,data);
	else if(p->data <data)
		p->right=insertR(p->right,data);
	
	return p;
		
}
struct node* inpre(struct node* p)
{
	while(p && p->right!=NULL)
		p=p->right;
	return p;
	
}
struct node* insucc(struct node* p)
{
	while(p && p->left!=NULL)
		p=p->left;
	
	return p;
	
}

struct node* Delete(struct node* p,int key)
{
	struct node* q;
	if(p==NULL)return NULL;
	if(p->left==NULL && p->right==NULL)
	{
		if(p==root)
			root=NULL;
		free(p);
		return NULL;
		
	}	
	
	if(key < p->data)
		p->left=Delete(p->left,key);
	else if(key >p->data)
		p->right=Delete(p->right,key);
	else{
		
		if(height(p->left)>height(p->right)){
			q=inpre(p->left);
			p->data=q->data;
			p->left=Delete(p->left,q->data);
				
		}else{
			q=insucc(p->right);
			p->data=q->data;
			p->right=Delete(p->right,q->data);
				
			
			
		}
	}
	
	
}

int menu()
{
	
	int n;
    cout<<endl<<"1.for insert node at binary search Tree.";
    cout<<endl<<"2.for Pre-Order at binary search Tree.";
    cout<<endl<<"3.for Post-Order at binary search Tree.";
    cout<<endl<<"4.for In-Order at binary search Tree.";
    cout<<endl<<"5.for find element at binary search Tree.";
    cout<<endl<<"6.for level order traversing at binary search Tree.";
    cout<<endl<<"7.for max element find at binary search Tree.";
    cout<<endl<<"8.for min element at binary search Tree.";
    cout<<endl<<"9.for find height at binary search Tree.";
    cout<<endl<<"10.for insert element using recursion at binary search Tree.";
    cout<<endl<<"0.for exit.";
    cout<<endl<<"Enter your choice."<<endl;
    cin>>n;
    return n;
}

int main()
{
	
	while(1)
    {
        switch(menu())
        {
            case 1:insertBST();break;
            case 2:preorder(root);break;
            case 3:postorder(root);break;
            case 4:inorder(root);break;
            case 5: {
						int data;
						cout<<"Enter searched node:"<<endl;
						cin>>data;
						struct node* s=find(root,data);
						cout<<s->data;
						break;
					}
			case 6:lot(root);break;
				
            case 7:	{
					int m=max(root);
					cout<<"max="<<m<<endl;
					break;
					}
            case 8: {
					int m=min(root);
					cout<<"min="<<m<<endl;
					break;
					}
            case 9:cout<<"height="<<height(root);break;
            case 10:{
					root=inserR(root,30);
					insertR(root,20);
					}
            case 0:exit(0);break;
            default:cout<<"invalid input"<<endl;break;
        }
    }
	return 0;
}