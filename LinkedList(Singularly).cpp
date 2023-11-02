////====LINKEDLIST(Singularly)===//
//
//#include <iostream>
//using namespace std;
//struct Node {
//	int data;
//	struct Node* next;
//};
//
////====INSERTION===//
//
//
//void linkedListTraversal(struct Node* ptr) {
//	while (ptr != NULL) {
//		cout << "Element: " << ptr->data << endl;
//		ptr = ptr->next;
//	}
//}
//
//struct Node* insertAtFirst(struct Node* head, int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	ptr->data = data;
//	ptr->next = head;
//	head = ptr;
//	return ptr;
//}
//
//struct Node* insertInBetween(struct Node* head, int data, int index) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* p = head;
//	int i = 0;
//	while (i != index - 1)
//	{
//		p = p->next;
//		i++;
//	}
//	ptr->data = data;
//	ptr->next = p->next;
//	p->next = ptr;
//
//	return head;
//}
//
//struct Node* insertAtEnd(struct Node* head, int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* p = head;
//	while (p->next != NULL) {
//		p = p->next;
//	}
//	ptr->data = data;
//	ptr->next = NULL;
//	p->next = ptr;
//	return head;
//}
//struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* p = head;
//	while (p != prevNode) {
//		p = p->next;
//	}
//	ptr->data = data;
//	ptr->next = prevNode->next;
//	prevNode->next = ptr;
//	return head;
//}
//
////====DELETION===//
//
//struct Node* deleteFirst(struct Node* head) {
//	struct Node* p = head;
//	head = p->next;
//	free(p);
//	return head;
//}
//struct Node* deleteAtIndex(struct Node* head, int index) {
//	struct Node* p = head;
//	struct Node* q = p->next;
//	int i = 0;
//	while (i != index - 1) {
//		p = p->next;
//		q = q->next;
//		i++;
//	}
//	p->next = q->next;
//	free(q);
//	return head;
//}
//struct Node* deleteLast(struct Node* head) {
//	struct Node* p = head;
//	struct Node* q = p->next;
//
//	while (q->next != NULL) {
//		p = p->next;
//		q = q->next;
//	}
//	p->next = NULL;
//	free(q);
//	return head;
//}
//struct Node* deleteValue(struct Node* head, int value) {
//	struct Node* p = head;
//	struct Node* q = p->next;
//	while (q->data != value && q->next != NULL) {
//		p = p->next;
//		q = q->next;
//	}
//	p->next = q->next;
//	free(q);
//	return head;
//}
//int main() {
//	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
//
//	head->data = 2;
//	head->next = second;
//
//	second->data = 4;
//	second->next = third;
//
//	third->data = 6;
//	third->next = fourth;
//
//	fourth->data = 8;
//	fourth->next = NULL;
//
//
//	linkedListTraversal(head);
//	/*head=insertInBetween(head, 66, 2);*/
//	/*head = insertAtEnd(head, 99);*/
//	/*head = insertAfterNode(head, third, 33);*/
//	/*head = insertAtFirst(head, 41);*/
//	head = deleteValue(head, 8);
//	cout << "After Deletion" << endl;
//	linkedListTraversal(head);\
//
//}