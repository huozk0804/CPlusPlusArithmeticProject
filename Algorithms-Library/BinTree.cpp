#include"Tree.h"

treeNode* BinTree::CreateTree(char* str) {
	treeNode* st[100];
	treeNode* p = NULL;
	int top, k, j = 0;
	top = -1;
	char ch = str[j];
	treeNode* b = NULL;

	while (ch != '\0')
	{
		switch (ch)
		{
		case'(':
			top++;
			st[top] = p;
			k = 1;
			break;
		case')':
			top--;
			break;
		case',':
			k = 2;
			break;
		default:

			p = (treeNode*)malloc(sizeof(treeNode));
			p->value = ch;
			p->lchild = p->rchild = NULL;
			if (b == NULL)
				b = p;
			else {
				switch (k)
				{
				case 1:
					st[top]->lchild = p;
					break;
				case 2:
					st[top]->rchild = p;
					break;
				default:
					break;
				}
			}
			break;
		}
	}
	return b;
}

treeNode* BinTree::CreateTree(treeNode* bintree) {
	treeNode* st[100];
	treeNode* s;
	int front, rear;
	char ch;
	ch = getchar();
	bintree = NULL;
	front = 1;
	rear = 0;
	while (ch != '#')
	{
		s = NULL;
		if (ch != '@')
		{
			s = (treeNode*)malloc(sizeof(treeNode));
			s->value = ch;
			s->lchild = s->rchild = NULL;
		}
		rear++;
		st[rear] = s;
		if (rear == 1)
			bintree = s;
		else
		{
			if (s != NULL && st[front] != NULL)
			{
				if (rear % 2 == 0)
					st[front]->lchild = s;
				else
					st[front]->rchild = s;
				if (rear % 2 != 0)
					front++;
			}
			ch = getchar();
		}
		return bintree;
	}
}

void BinTree::Preorder(treeNode* bintree) {
	if (bintree != NULL) {
		printf("%c", bintree->value);
		Preorder(bintree->lchild);
		Preorder(bintree->rchild);
	}
}

void BinTree::Preorder1(treeNode* bintree) {
	stack<treeNode*> s;
	s.push(bintree);
	while (!s.empty())
	{
		bintree = s.top();
		s.pop();
		if (bintree != NULL)
		{
			printf("%c", bintree->value);
			s.push(bintree->rchild);
			s.push(bintree->lchild);
		}
	}
}

void BinTree::Inorder(treeNode* bintree) {
	if (bintree != NULL) {
		Inorder(bintree->lchild);
		printf("%c", bintree->value);
		Inorder(bintree->rchild);
	}
}

void BinTree::Inorder1(treeNode* bintree) {
	stack<treeNode*> s;
	treeNode* p;
	s.push(bintree);
	while (!s.empty())
	{
		while (s.top())
			s.push(s.top()->lchild);
		s.pop();
		p = s.top();

		if (!s.empty()) {
			printf("%c", s.top()->value);
			p = s.top();
			s.pop();
			s.push(p->rchild);
		}
	}
}

void BinTree::Inorder2(treeNode* bintree) {
	treeNode* st[100];
	int top = 0;
	st[top] = bintree;
	do
	{
		while (st[100] != NULL)
		{
			top = top + 1;
			st[top] = st[top - 1]->lchild;
		}
		top = top - 1;
		if (top >= 0) {
			printf("%c", st[top]->value);
			st[top] = st[top]->rchild;
		}
	} while (top != -1);
}


void BinTree::Postorder(treeNode* bintree) {
	if (bintree != NULL) {
		Postorder(bintree->lchild);
		Postorder(bintree->rchild);
		printf("%c", bintree->value);
	}
}

void BinTree::TransLevel(treeNode* bt)
{
	queue<treeNode*> q;
	if (bt == NULL)return;
	else {
		printf("%c", bt->value);
		q.push(bt);
		while (!q.empty())
		{
			bt = q.front();
			q.pop();
			if (bt->lchild != NULL)
			{
				printf("%c", bt->lchild->value);
				q.push(bt->lchild);
			}
			if (bt->rchild != NULL)
			{
				printf("%c", bt->rchild->value);
				q.push(bt->rchild);
			}
		}
	}
}