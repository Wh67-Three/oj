#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct node {
	int num;
	struct node* pNext;
}Node;
Node* reserve(Node* pHead) {
	Node* pPrev = NULL;
	Node* pCurr = pHead;
	Node* pNext = NULL;
	while (pCurr != NULL) {                    //学习这个函数里面的反转函数的操作
		pNext=pCurr->pNext;
		pCurr->pNext = pPrev;
		pPrev = pCurr;
		pCurr = pNext;
	}
	return pPrev;
}
void print(Node* pHead) {
	Node* pTemp = pHead;
	while (pTemp != NULL) {
		printf("%d ", pTemp->num);
		pTemp = pTemp->pNext;
	}
}
void freelist(Node* pHead) {        //注意释放内存的函数的命名别用free作为函数名（stdlib里面有一个同名函数）
	Node* pCurr = pHead;
	while (pCurr != NULL) {
		Node* pTemp = pCurr;
		pCurr = pCurr->pNext;
		free(pTemp);
	}
}
int main() {
	Node* pHead = NULL;
	Node* pTail = NULL;
	while (1) {
		int n;
		Node* pNew = (Node*)malloc(sizeof(Node));
		scanf("%d", &n);
		if (n == -1) {
			freelist(pNew);                      //别忘了这边的内存释放
			break;
		}
		pNew->num = n;
		pNew->pNext = NULL;
		if (pHead == NULL) {
			pHead = pNew;
		}else {
			pTail->pNext = pNew;
		}
		pTail = pNew;
	}
	pHead = reserve( pHead);
	print(pHead);
	freelist(pHead);
	return 0;
}
