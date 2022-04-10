

#include "Queue.h"
void PrevOrder(BTNode* root)//前序
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->date);//根
	PrevOrder(root->left);//左子树
	PrevOrder(root->right);//右子树
}

void InOrder(BTNode* root)//中序
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	
	InOrder(root->left);//左子树
	printf("%c ", root->date);//根
	InOrder(root->right);//右子树
}

void PostOrder(BTNode* root)//后序
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);//左子树
	PostOrder(root->right);//右子树
	printf("%c ", root->date);//根
}

void SizeNode(BTNode* root, int* size)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		++(*size);
	}
	SizeNode(root->left, size);
	SizeNode(root->right, size);
}
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);                              

}
void LeveOder(BTNode* root)//层序遍历法,利用队列
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);//先入根
	}
	while (!QueueEmpty(&q))//判空
	{
		BTNode* front = QueueFirst(&q);//出根并记录
		printf("%c ", front->date);
		QueuePop(&q);
		if (front->left)
		{
			QueuePush(&q, front->left);//入左子树
		}
		if (front->right)
		{
			QueuePush(&q, front->right);//入右子树
		}
	}
	QueueDestroy(&q);
}



