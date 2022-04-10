#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "BT.h"
typedef BTNode* QDateType;
typedef struct QNode
{
	struct QNode* next;
	QDateType date;
}QNode;
typedef struct Queue
{
	struct QNode* head;
	struct QNode* tail;
}Queue;



void QueueInit(Queue* ps);
void QueuePush(Queue* ps, BTNode* val);
void QueuePop(Queue* ps);
int QueueSize(Queue* ps);
QDateType QueueFirst(Queue* ps);
int QueueBack(Queue* ps);
bool QueueEmpty(Queue* ps);
void QueueDestroy(Queue* ps);