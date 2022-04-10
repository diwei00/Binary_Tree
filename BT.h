#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef char BTtype;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;//������
	struct BinaryTreeNode* right;//������
	BTtype date;

}BTNode;

void PrevOrder(BTNode* root);

void InOrder(BTNode* root);
void PostOrder(BTNode* root);
void SizeNode(BTNode* root, int* size);
int TreeSize(BTNode* root);
int TreeLeafSize(BTNode* root);
void LeveOder(BTNode* root);