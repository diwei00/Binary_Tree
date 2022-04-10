
#include "Queue.h"
int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	if (A != NULL)
	{
		A->date = 'A';
		A->left = NULL;
		A->right = NULL;
	}

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	if (B != NULL)
	{
		B->date = 'B';
		B->left = NULL;
		B->right = NULL;
	}
	
	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	if (C != NULL)
	{
		C->date = 'C';
		C->left = NULL;
		C->right = NULL;
	}
	

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	if (D != NULL)
	{
		D->date = 'D';
		D->left = NULL;
		D->right = NULL;
	}
	

	BTNode* E  = (BTNode*)malloc(sizeof(BTNode));
	if (E != NULL)
	{
		E->date = 'E';
		E->left = NULL;
		E->right = NULL;
	}
	
	
	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");
	PostOrder(A);
	printf("\n");

	int size = 0;
	SizeNode(A, &size);
	printf("%d \n", size);
	printf("%d \n", TreeSize(A));
	

	printf("%d \n", TreeLeafSize(A));


	LeveOder(A);
	return 0;
}