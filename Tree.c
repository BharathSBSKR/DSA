#include<stdio.h>
#include<stdlib.h>
struct node
{
	int root;
	struct node *left;
	struct node *right;
};
// TO CREATE A NEWNODE
struct node *head,*newnode;
void create()
{
	head=0;
	struct node *temp;
	int choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data");
		scanf("%d",&newnode->root);
		newnode->left=0;
		newnode->right=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->left=newnode;
			newnode->right=temp;
			temp=newnode;
		}
		printf("CHOICE 1 TO CONTINUE");
		scanf("%d",&choice);
	}
}
/*struct node *create(int x)
{
	struct node *temp= malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return(temp);
}*/
// FUNCTION TO TRAVERSE THE NODES OF BINARY TREE IN INORDER,POSTORDER,PREORDER
void traverseInorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	traverseInorder(root->left);
	printf("%d",root->root);
	traverseInorder(root->right);	
}
void traversePostorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	traversePostorder(root->left);
	traversePostnorder(root->right);
	printf("%d",root->data);	
}
void traversePreorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d",root->data);
	traversePreorder(root->left);
	traversePreorder(root->right);	
}
int main()
{
	/*struct node* root=create(14);
	root->left=create(11);
	root->right=create(17);
	root->left->left=create(9);
	root->left->right=create(13);
	root->left->left->left=create(6);
	root->left->left->right=create(10);
	root->right->left=create(16);
	root->right->right=create(21);
	root->right->right->left=create(19);
	root->right->right->right=create(24);*/
	create();
	printf("Inorder Traversal\n");
	traverseInorder(root);
	printf("Postorder Traversal\n");
	traversePostorder(root);
	printf("Preorder Traversal\n");
	traversePreorder(root);
	return 0;	
}
