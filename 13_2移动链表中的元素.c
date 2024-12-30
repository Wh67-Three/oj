#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct LinkNode {
	int num;
	struct LinkNode* next;
} Node;
Node*move(Node* pHead, Node**ppTail, int p, int q,int n) {
	Node* pTemp=pHead;
	Node* pRev = NULL;//前驱节点
	if (pHead == NULL) {
		return pHead;
	}
	int a=0;
	while (pTemp != NULL && pTemp->num != p) {
		pRev = pTemp;
		pTemp = pTemp->next;
		a++;//记忆节点位置
	}
	Node* pTarget = pHead;
	if (pRev == NULL) {
		pHead = pTemp->next;
	}
	else {
		if (pTemp == *ppTail) {
			pRev->next = NULL;
			*ppTail = pRev;
		}
		else {
			pRev->next = pTemp->next;
		}
	}//删除查找到的节点
	if (a + q <= 0) {
		pTemp->next=pHead;
		pHead=pTemp;
	}
	else if (a + q >= n) {
		(*ppTail)->next = pTemp;
		*ppTail = pTemp;
		pTemp->next = NULL;
	}
	else {
		for (int i = 0; i < a + q; i++) {
			pTarget = pTarget->next;
		}
		pTemp->next = pTarget->next;
		pTarget->next = pTemp;
	}

	return pHead;
}
int main() {
	int n;
	scanf("%d", &n);
	Node* pHead = NULL;
	Node* pTail = NULL;
	for (int i = 0; i <n;i++) {
		Node* pNew = (Node*)malloc(sizeof(Node));
		pNew->num = i+1;
		pNew->next = NULL;
		if (pHead == NULL) {
			pHead = pNew;
		}else {
			pTail->next = pNew;
		}
		pTail = pNew;
	}		//创建链表
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m;i++) {
		int p, q;
		scanf("%d%d", &p, &q);
		pHead=move(pHead,&pTail, p, q, n);
	}
	Node* pTemp = pHead;
	while (pTemp != NULL) {
		printf("%d ", pTemp->num);
		Node* pNext = pTemp->next;
		free(pTemp);
		pTemp = pNext;
	}
	return 0;
}
