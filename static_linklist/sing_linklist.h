#pragma once
#include"pch.h"

typedef struct LNode
{
	int character;//存储hash过的地址
	int subscript;//下标
	struct LNode * next;
}LNode, *LinkList;

int create_list(LinkList L,int c);//创建链表

int append_ele(LinkList L, int c);//增添元素

int find_ele(LinkList L, int c);//查找某元素，返回下标

int del_ele(LinkList L, int c);//根据下标删除节点