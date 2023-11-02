//====LINKEDLIST(Circularly)===//

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};


void circularlyTraversal(struct Node* head) {
	struct Node* p = head;
	cout << "Element: " << p->data<<endl;
	while (p->next != head)
	{
		p = p->next;
		cout << "Element: " << p->data << endl;
	}
}

//====INSERTION====//
struct Node* insertFirst(struct Node* head,int data)
{
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	ptr->data = data;
	while (p->next!=head) {
		p=p->next;
	}
	p->next = ptr;
	ptr->next = head;
	head = ptr;
	
	return head;
}
struct Node* insertLast(struct Node* head, int data)
{
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	ptr->data = data;
	while (p->next != head) {
		p = p->next;
	}
	p->next = ptr;
	ptr->next = head;

	return head;
}
struct Node* insertIndex(struct Node* head,int index, int data)
{
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	int i = 0;
	ptr->data = data;
	while (i!=index-1) {
		p = p->next;
		i++;
	}
	ptr->next = p->next;
	p->next = ptr;

	return head;
}
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data)
{
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	int i = 0;
	ptr->data = data;
	while (p != prevNode) {
		p = p->next;
	}
	ptr->next = prevNode->next;
	prevNode->next = ptr;

	return head;
}


//====DELETION====//

struct Node* deleteFirst(struct Node* head)
{
	struct Node* p = head;
	struct Node* q = head->next;
	while (q != head) {
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	head = p->next;
	free(q);
	return head;
}
struct Node* deleteLast(struct Node* head) {
	struct Node* p = head;
	struct Node* q = head->next;
	while (q != head-1) {
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}
struct Node* deleteIndex(struct Node* head, int index) {
	struct Node* p = head;
	struct Node* q = head->next;
	int i = 0;
	while (i!=index-1) {
		p = p->next;
		q = q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return head;
}
struct Node* deleteValue(struct Node* head, int value) {
	struct Node* p = head;
	struct Node* q = head->next;
	while (p->data != value) {
		p = p->next;
		q = q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}
int main() {
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node));
	struct Node* third = (struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

	head->data = 2;
	head->next = second;

	second->data = 4;
	second->next = third;

	third->data = 6;
	third->next = fourth;

	fourth->data = 8;
	fourth->next = head;

	cout << "Before: " << endl;
	circularlyTraversal(head);

	/*cout << "After insertFirst: " << endl;
	head = insertFirst(head,1);
	circularlyTraversal(head);

	cout << "After insertLast: " << endl;
	head = insertLast(head, 9);
	circularlyTraversal(head);

	cout << "After insertIndex: " << endl;
	head = insertIndex(head, 3, 10);
	circularlyTraversal(head);*/

	cout << "After insertAfterNode: " << endl;
	head = insertAfterNode(head, fourth, 11);
	circularlyTraversal(head);

	/*cout << "After: " << endl;
	head = deleteFirst(head);
	circularlyTraversal(head);

	head = deleteLast(head);
	circularlyTraversal(head);*/

	/*cout << "After deleteIndex: " << endl;
	head = deleteIndex(head,2);
	circularlyTraversal(head);

	cout << "After deleteValue: " << endl;
	head = deleteIndex(head, 8);
	circularlyTraversal(head);*/

	return 0;
}