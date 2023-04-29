#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef int SQDataType;
//��̬˳���
typedef struct SeqList
{
	SQDataType* a;
	int size;//��Ч���ݸ���
	int capacity;//����
}SL;

//��ɾ��ĵȽӿں���
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SQDataType x);
void SeqListModify(SL* ps, int pos, SQDataType x);