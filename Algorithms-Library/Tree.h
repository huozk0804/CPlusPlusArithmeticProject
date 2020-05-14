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

	//�����������������
	treeNode* CreateTree(char*);
	//����ȫ�������Ĳ��˳����������
	treeNode* CreateTree(treeNode*);

	//ǰ�����
	void Preorder(treeNode*);
	//�������
	void Inorder(treeNode*);
	//�������
	void Postorder(treeNode*);

	//�ǵݹ��������
	void Inorder1(treeNode*);
	//����ָ������ķǵݹ���������㷨
	void Inorder2(treeNode*);

	//����ջ�ķǵݹ�ǰ�����
	void Preorder1(treeNode*);

	//�ǵݹ�İ����������������
	void TransLevel(treeNode*);

private:

};
