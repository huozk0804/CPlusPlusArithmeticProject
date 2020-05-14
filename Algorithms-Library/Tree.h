#pragma once
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
typedef int dataType;

struct treeNode
{
	dataType value;
	treeNode* lchild, * rchild;
};

class BinTree
{
public:
	BinTree();

	//按广义表创建二叉链表
	treeNode* CreateTree(char*);
	//按完全二叉树的层次顺序依次输入
	treeNode* CreateTree(treeNode*);

	//前序遍历
	void Preorder(treeNode*);
	//中序遍历
	void Inorder(treeNode*);
	//后序遍历
	void Postorder(treeNode*);

	//非递归中序遍历
	void Inorder1(treeNode*);
	//利用指针数组的非递归中序遍历算法
	void Inorder2(treeNode*);

	//利用栈的非递归前序遍历
	void Preorder1(treeNode*);

	//非递归的按层遍历二叉链表树
	void TransLevel(treeNode*);

private:

};
