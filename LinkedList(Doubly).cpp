//====LINKEDLIST(Doubly)===//

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void doublyTraversal(struct Node* head) {
	struct Node* p = head;
	cout << "Element: " << p;
	while (p->next != head)
	{
		cout << "Element: " << p << endl;
	}
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

	doublyTraversal(head);

}