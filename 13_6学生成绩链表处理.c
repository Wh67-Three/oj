#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct stud_node {
int num;/*学号*/
char name[20];/*姓名*/
int score;/*成绩*/
struct stud_node* next;/*指向下个结点的指针*/
}stud_node;

struct stud_node* createlist(){
	stud_node* pHead = NULL;
	stud_node* pTemp = NULL;
	stud_node* pTail = NULL;
	while (1) {
		int n;
		scanf("%d", &n);
		if (n == 0) {
			return pHead;
		}
		else {
			stud_node* pTemp = (stud_node* )malloc(sizeof(stud_node));
			if (pTemp == NULL) {
				return NULL;
			}
			pTemp->next = NULL;
			pTemp->num = n;
			scanf("%s%d", pTemp->name, &pTemp->score);
			if (pHead == NULL) {
				pHead = pTemp;
				pTail = pTemp;
			}
			else {
				pTail->next = pTemp;
				pTail = pTemp;
			}
		}
	}
}
struct stud_node* deletelist(struct stud_node* head, int min_score){
	stud_node* pTemp = head;
	stud_node* pPrev = NULL;
	while (pTemp != NULL) {
		if (pTemp->score < min_score) {
			if (pTemp == head) {
				head = pTemp->next;
				free(pTemp);		//先释放内存，再在下一行重新向后递进
				pTemp = head;
			}
			else {//pTemp为中间与尾节点相同。。
				pPrev->next = pTemp->next;
				free(pTemp);				//先释放内存，再在下一行重新向后递进
				pTemp = pPrev->next;
			}
		}
		else {
			pPrev = pTemp;
			pTemp = pTemp->next;
		}
	}
	return head;
}
void printlist(struct stud_node* head) {
	stud_node* pTemp = head;
	while (pTemp != NULL) {
		printf("%d %s %d\n", pTemp->num, pTemp->name, pTemp->score);
		pTemp = pTemp->next;
	}
}
void freelist(struct stud_node* head) {
	stud_node* pTemp = head;
	while (pTemp != NULL) {
		stud_node* pCurr = pTemp;  //在这写pCurr，保证随时更新！！！
		pTemp = pTemp->next;
		free(pCurr);
	}
}


int main() {
	stud_node* pHead = NULL;
	int min_score;
	pHead=createlist();
	scanf("%d", &min_score);
	pHead = deletelist(pHead, min_score);
	printlist(pHead);
	freelist(pHead);
}
