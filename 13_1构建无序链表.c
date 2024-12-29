#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	char name[20];
	int score;
	struct student* pNext;
} STUDENT;
STUDENT* create() {
	STUDENT* pHead = NULL;
	STUDENT* pTail = NULL;
	int id;
	while (1) {
		scanf("%d", &id);
		if (id == -1) {
			break;
		}
		STUDENT* pNew = (STUDENT*)malloc(sizeof(STUDENT));
		pNew->ID = id;
		scanf("%s %d", pNew->name, &pNew->score);
		pNew->pNext = NULL;
		if (pHead == NULL) {
			pHead = pNew;
		}else {
			pTail->pNext = pNew;
		}
		pTail = pNew;
	}
	return pHead;
}
void print(STUDENT* pHead) {
	STUDENT* pCurrent = pHead;
	while (pCurrent != NULL) {
		printf("%d\n%s\n%d\n", pCurrent->ID, pCurrent->name, pCurrent->score);
		pCurrent = pCurrent->pNext;
	}
}
void freelist(STUDENT* pHead) {
	STUDENT* pCurrent = pHead;
	while (pCurrent != NULL) {
		STUDENT* pTemp = pCurrent;
		pCurrent = pCurrent->pNext;
		free(pTemp);
	}
}
int main() {

	STUDENT*pHead=create();
	print(pHead);
	freelist(pHead);
	return 0;
}
