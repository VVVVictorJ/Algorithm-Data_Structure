#pragma once
#include"pch.h"

typedef struct LNode
{
	int character;//�洢hash���ĵ�ַ
	int subscript;//�±�
	struct LNode * next;
}LNode, *LinkList;

int create_list(LinkList L,int c);//��������

int append_ele(LinkList L, int c);//����Ԫ��

int find_ele(LinkList L, int c);//����ĳԪ�أ������±�

int del_ele(LinkList L, int c);//�����±�ɾ���ڵ�