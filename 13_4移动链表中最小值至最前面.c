#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct node {
	int num;
	struct node* pNext;
}Node;
Node* creatList(int n) {
	Node* pHead = NULL;
	for (int i = 0; i < n; i++) {
		int a;
		Node* pNew = (Node*)malloc(sizeof(Node));
		if (pNew == NULL) {
			return NULL;
		}
		scanf("%d", &a);
		pNew->num = a;
		pNew->pNext = pHead;
		pHead = pNew;
	}
	return pHead;
}
Node* move(Node* pHead,int n) {
	Node* pTemp = pHead;
	Node* pPrev = NULL;//pMax的前驱指针
	Node* pMin = pHead;
	if (pHead == NULL) {
		return pHead;
	}
	while ((pTemp->pNext) != NULL) {
		if ((pTemp->pNext)->num < pMin->num) {
			pPrev = pTemp;
			pMin = (pTemp->pNext);
		}
		pTemp = pTemp->pNext;
	}
	if (pMin == pHead) {
		return pHead;
	}
	else if (pMin->pNext == NULL) {
		pMin->pNext = pHead;
		pHead = pMin;
		pPrev->pNext = NULL;
	}
	else {
		pPrev->pNext = pMin->pNext;
		pMin->pNext = pHead;
		pHead = pMin;
	}
	return pHead;
}
void print(Node* pHead) {
	Node* pTemp = pHead;
	while (pTemp != NULL) {
		printf("%d ", pTemp->num);
		pTemp = pTemp->pNext;
	}
	printf("\n");
}
void freelist(Node* pHead) {
	Node* pCurr = pHead;
	while (pCurr != NULL) {
		Node* pTemp = pCurr;
		pCurr = pCurr->pNext;
		free(pTemp);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	Node* pHead = creatList(n);
	print(pHead);
	pHead = move(pHead, n);
	print(pHead);
	freelist(pHead);
	return 0;
}

