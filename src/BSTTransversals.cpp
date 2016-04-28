/*

Given a Binary Search Tree ,Calculate its Inorder ,temptorder and PreOrder

Input : A BST
Output : Copy Inorder/temptorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task : 
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>

struct node{
	struct node * left;
	int data;
	struct node *right;
};

void in_order(node * root, int * arr, int * temp)
{
	if (root == NULL)
		return;
	in_order(root->left, arr, temp);
	arr[(*temp)++] = root->data;
	in_order(root->right, arr, temp);
}

void pre_order(node * root, int * arr, int * temp)
{
	if (root == NULL)
		return;
	arr[(*temp)++] = root->data;
	pre_order(root->left, arr, temp);
	pre_order(root->right, arr, temp);
}

void post_order(node * root, int * arr, int * temp)
{
	if (root == NULL)
		return;
	post_order(root->left, arr, temp);
	post_order(root->right, arr, temp);
	arr[(*temp)++] = root->data;
}

void inorder(struct node *root, int *arr)
{
	if (root == NULL || arr == NULL)
	{
		arr = NULL;
		return;
	}
	int temp = 0;
	in_order(root, arr, &temp);
}

void preorder(struct node *root, int *arr)
{
	if (root == NULL || arr == NULL)
	{
		arr = NULL;
		return;
	}
	int temp = 0;
	pre_order(root, arr, &temp);
}

void postorder(struct node *root, int *arr)
{
	if (root == NULL || arr == NULL)
	{
		arr = NULL;
		return;
	}
	int temp = 0;
	post_order(root, arr, &temp);
}

