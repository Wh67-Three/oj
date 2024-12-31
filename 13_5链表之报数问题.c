#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct Node
{int num;
struct Node* next;
} Node;


Node* createlist(int n) {
	if (n == 0) {
		return NULL;
	}
	Node* pHead = NULL;
	Node* pTail = NULL;
	int id;
for(int i=1;i<=n;i++){
	Node* pNew = (Node*)malloc(sizeof(Node));
	if (pNew == NULL) {
		return NULL;
	}
	pNew->num = i;
	pNew->next = NULL;
	if (pHead == NULL) {
			pHead = pNew;
	}
	else {
			pTail->next = pNew;
	}
	pTail = pNew;
	}
pTail->next = pHead;
return pHead;
}


int deletelist(Node* pHead) {
	Node* pTemp = pHead;
	int a = 2;
	int x = 1;
	while (pTemp->next != pTemp) {
		Node* pNext = pTemp->next;				//少不了要创建这个节点，因为要释放内存！！！
		if (a == 3) {
			pTemp->next = pNext->next;
			free(pNext);
			a = 2;
			pTemp = pTemp->next;
		}
		else {
			pTemp = pTemp->next;
			a++;
		}
	}
	x=pTemp->num;
	free(pTemp);
	return x;						//不可直接写成return pTemp->num，这样无法释放pTemp
}
int main() {
	int n;
	int x;
	scanf("%d", &n);
	Node* pHead = createlist(n);
	x=deletelist(pHead);
	printf("%d\n", x);
	return 0;

}
