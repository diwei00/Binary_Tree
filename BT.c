

#include "Queue.h"
void PrevOrder(BTNode* root)//ǰ��
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->date);//��
	PrevOrder(root->left);//������
	PrevOrder(root->right);//������
}

void InOrder(BTNode* root)//����
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	
	InOrder(root->left);//������
	printf("%c ", root->date);//��
	InOrder(root->right);//������
}

void PostOrder(BTNode* root)//����
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);//������
	PostOrder(root->right);//������
	printf("%c ", root->date);//��
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
void LeveOder(BTNode* root)//���������,���ö���
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);//�����
	}
	while (!QueueEmpty(&q))//�п�
	{
		BTNode* front = QueueFirst(&q);//��������¼
		printf("%c ", front->date);
		QueuePop(&q);
		if (front->left)
		{
			QueuePush(&q, front->left);//��������
		}
		if (front->right)
		{
			QueuePush(&q, front->right);//��������
		}
	}
	QueueDestroy(&q);
}



