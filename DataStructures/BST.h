#pragma once

struct node
{
	int data;
	int count;
	node *right;
	node *left;
};

class BST
{
private:
	node* root;
public:
	BST();
	~BST();
	
};

