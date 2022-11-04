//
//  main.cpp
//  tree-simple
//
//  Created by Michelle Talley on 2/13/19.
//  Copyright © 2019 Michelle Talley. All rights reserved.
//
typedef int TreeElement;

class TreeNode {
public:
	TreeElement data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(TreeElement value, TreeNode* l = 0, TreeNode * r = 0)
	{
		data = value;
		left = l;
		right = r;
	}

};

#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
	TreeNode* top = 0;
	TreeNode* p1 = new TreeNode(10);
	TreeNode* p2 = new TreeNode(8);
	TreeNode* p3 = new TreeNode(15);
	TreeNode* p4 = new TreeNode(13);
	top = p1;
	p1->left = p2;
	p1->right = p3;
	p3->left = p4;

	cout << "p1 value: " << top->data << endl;
	cout << "p2 value: " << top->left->data << endl;
	cout << "p3 value: " << top->right->data << endl;
	cout << "p4 value: " << top->right->left->data << endl;

	return 0;
}
