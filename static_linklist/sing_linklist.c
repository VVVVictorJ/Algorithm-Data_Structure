#include"sing_linklist.h"

int create_list(LinkList L, int c)
{
	if (NULL == L->next)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));//allocate memory
		L->next = p;//L's next pointer direct to p
		p->character = c;//assignment
		p->subscript = 1;//subscript
		p->next = NULL;//rear is null
	}

	return 0;
}

int append_ele(LinkList L, int c)//append elements in turn
{
	if (NULL == L->next)//if L'next is NULL ,append directly
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));//allocate memory
		p->character = c;//as above
		p->subscript = 1;
		return 0;
	}
	int sub = ele_count(L);//use ele_count to return the linklist ' length
	LinkList p = L->next;//point to the first element
	while (NULL != p->next)
	{
		p = p->next;
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));//create new node
	s->character = c;
	s->subscript = sub + 1;//length + 1
	s->next = p->next;
	p->next = s;
	return 0;
}

int find_ele(LinkList L, int c)
{
	if (NULL == L->next) {
		return -1;
	}
	LinkList p = L->next;
	while (NULL != p)
	{
		if (c == p->character)
		{
			return p->subscript;//return subscript
		}
		p = p->next;
	}
	return 0;
}

int del_ele(LinkList L, int c)
{
	if (NULL == L->next)
	{
		return -1;
	}
	LinkList p = L;
	int sub = find_ele(L, c);
	while (NULL != p)//not satisfied the odds that next isn't NULL and subscript isn't match
	{
		//p = p->next;
		if (sub == p->next->subscript)
		{
			LinkList q = p->next;
			p->next = q->next;
			free(q);//free the memory
			return 0;
		}
		p = p->next;
	}
	return 0;
}

int ele_count(LinkList L) {//return Length of Linklist
	int Length = 0;
	if (NULL == L->next)
	{
		return Length;
	}
	LinkList p = L->next;
	Length++;//initial length equal 1
	while (NULL != p->next)
	{
		p = p->next;
		++Length;
	}
	return Length;
}
