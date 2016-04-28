/*
Given a Sorted Array of integers .Create a new Balanced Binary Search Tree from the Array
and return the head of the new BST .

Ex : Input : [1,6,10]
Output : A new BST which structure is as follows 
  6
 / \
1  10

A BST is said to be balanced ,when it satisifes the following property 

Every node's Difference of Left subtree height and right-subtree height is not more than 1 .

Below Tree is Not a Balanced BST ,as 1's left subtree has height of 0 ,but 
right subtree height is 2 
(Diff >1)

  1
   \
    3
   / \
  10  5

Note : Return head of newly created BST
Note : Return Null for invalid Inputs
Note : Donot create a new BST .
*/
#include <stdlib.h>
struct node{
	struct node * left;
	int data;
	struct node *right;
};

node * build_tree(int *arr, int start_index, int end_index)
{
	if (start_index <= end_index)
	{
		struct node *tree = (struct node *)malloc(sizeof(node));
		int mid = (start_index + end_index) / 2;
		tree->data = arr[mid];
		tree->left = build_tree(arr, start_index, mid - 1);
		tree->left = build_tree(arr, mid + 1, end_index);
		return tree;
	}
}

struct node * convert_array_to_bst(int *arr, int len)
{
	if (arr == NULL)
	{
		return NULL;
	}
	return build_tree(arr, 0, len - 1);
}

