/////////////////////////////////Constructor and Destructor
//#include <iostream>
//using namespace std;
//
//class Home
//{
//private:
//	int n, a, b;
//
//public:
//	Home()
//	{
//		cout << "Constructor initialized and Object Created..." << endl;
//	}
//	void sum(int a, int b)
//	{
//		int c = a + b;
//
//		cout << "Sum = " << c << endl;
//	}
//	~Home()
//	{
//		cout << "Destuctor initialized And Object Destroyed..." << endl;
//	}
//};
//int main() {
//	Home a, b, c;
//
//	a.sum(5, 5);
//
//	return 0;
//}

////////////////////////////////////Inheritace
//#include <iostream>
//using namespace std;
//
//class Teacher
//{
//public:
//	string name = "Sir Z";
//	string subject = "OOP";
//	
//};
//class Student:public Teacher
//{
//public:
//	int age =21;
//};
//int main()
//{
//	Student umer;
//	cout << "Umer's age is " << umer.age << ". He studeies from " << umer.name << " that teaches " << umer.subject << " subject";
//}

//////////////////////////////////

//#include <iostream>
//using namespace std;

//Problem #1

//int main()
//{
//	int arr1[10] = { 5,4,3,8,9,7,5,4,7,4 };
//	int sum = 0;
//	int avg;
//
//	for (int i = 0; i < 10; i++)
//	{
//		sum = sum + arr1[i];
//	}
//	cout << "The Sum of an Array is: " <<sum<< endl;
//	avg = sum / 10;
//	cout << "The average of the sum is: " << avg << endl;
//	return 0;
//}

//Problem #2

//void reverse_array(int a[5]) {
//
//	cout << "Reversed Array: ";
//	for (int i = 4; i >=0; i--)
//	{
//		cout<<a[i]<<", ";
//	}
//	
//}
//int main() {
//
//	int arr2[5] = { 4,8,6,1,3 };
//	cout << "Simple Array: ";
//	for (int i = 0; i < 5; i++)
//	{
//		cout<< arr2[i]<<", ";
//	}
//	reverse_array(arr2);
//
//	return 0;
//}

//Problem #3

//void binary_Search(int n, int a[8]) {
//	int mid;
//	int start = 0, end = 7, loc = -1;
//	while (start <= end) {
//		mid = (start + end) / 2;
//		if (a[mid] == n) {
//			loc = mid;
//			break;
//		}
//		else if (n < a[mid]) {
//			end = mid - 1;
//		}
//		else {
//			start = mid + 1;
//		}
//	}if (loc == -1) {
//		cout << "Not found or Missing element!";
//	}
//	else {
//		cout << "Search found at: " << loc;
//	}
//}
//int main() {
//
//	int arr3[8] = { 2,9,13,19,21,27,32,35 };
//	int x = 32;
//
//	binary_Search(x, arr3);
//
//	return 0;
//}

//Problem 4

//void shift_Right(int n, int array[]) {
//
//    int temp[8];
//    for (int i = 0; i < 8; i++)
//    {
//        temp[(i + n) % 8] = array[i];
//    }
//
//    cout << "Right Shifted Arary: " << endl;
//    for (int k = 0; k < 8; k++)
//    {
//        cout << temp[k]<<", ";
//    }
//    cout << endl;
//}
//void shift_Left(int n, int array[]) {
//    int temp2[8];
//    for (int i = 0; i < 8; i++)
//    {
//        temp2[i] = array[(i + n) % 8];
//    }
//    cout << "Left Shifted Array: " << endl;
//    for (int k = 0; k < 8; k++)
//    {
//        cout << temp2[k]<<", ";
//    }
//    cout << endl;
//}
//int main() {
//    int array[8] = { 2,3,4,5,6,7,8,9 };
//    int n;
//    cin >> n;
//    cout << "Original Array: " << endl;
//    for (int i = 0; i < 8; i++)
//    {
//        cout << array[i]<<", ";
//    }
//    cout << endl;
//
//    shift_Right(n, array);
//    shift_Left(n, array);
//    return 0;
//}

//Problem 5

//void freq_Count(int n, int array[]) {
//    int times = 0;
//
//    for (int i = 0; i < 5; i++)
//    {
//        if (n == array[i])
//        {
//            times = times + 1;
//
//        }
//    }
//    cout << "The number occurs= " << times << " times" << endl;
//}
//
//int main() {
//    
//    int array[5] = { 1,2,3,4,2 };
//    int n;
//    cin >> n;
//    
//    freq_Count(n, array);
//
//    return 0;
//
//}

//#include <iostream>
//
//const int MAX_SIZE = 1000; // Define a maximum size for the array, adjust as needed
//
//int main() {
//    int arr[] = { 1, 2, 3, -2, -3, 1, 2, 4, 5, 4, 3, -3 };
//    int length = sizeof(arr) / sizeof(arr[0]);
//
//    // Create an array to store element frequencies
//    int frequency[MAX_SIZE] = { 0 }; // Initialize all frequencies to 0
//
//    // Calculate frequencies
//    for (int i = 0; i < length; i++) {
//        int currentElement = arr[i];
//
//        // Increment the frequency of the current element
//        frequency[currentElement + 500]++; // To handle negative numbers as indices
//    }
//
//    // Print frequencies
//    std::cout << "Element Frequencies:\n";
//    for (int i = 0; i < MAX_SIZE; i++) {
//        if (frequency[i] > 0) {
//            std::cout << "Element " << i - 500 << ": Frequency " << frequency[i] << std::endl;
//        }
//    }
//
//    return 0;
//}

//2D-Array

//int main() {
//	int arr[2][4] = {12,78,98,65,68,42,19,87};
//
//	/*for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "Enter an interger " << j + 1<<endl;
//			cin >> arr[i][j];
//		}
//	}*/
//	cout << "2-Dimensional Array" << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "arr["<<i<<"]["<<j<<"]= "<<arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//2-D array with Min and Max

//int main() {
//	int arr[2][4] = { 12,78,100,65,68,42,19,87 };
//
//	cout << "2-Dimensional Array" << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	int max, min;
//	max=min= arr[0][0];
//	
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (arr[i][j]>max)
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	cout << "MAX= " << max << endl;;
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (arr[i][j] < min)
//			{
//				min = arr[i][j];
//			}
//		}
//	}
//	cout << "MIN= " << min;
//	return 0;
//}

//Adding Two Matrices

//int main() {
//	int r1, r2, c1, c2, a1[20][20], a2[20][20], a3[20][20];
//	r1 = r2 = 2;
//	c1 = c2 = 3;
//	if (r1!=r2 || c1!=c2)
//	{
//		cout << "Addition Not Possible";
//		exit(0);
//	}
//
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c1; j++)
//		{
//			cout << "Enter the ("<<i<<"x"<<j<<") element of first matrices" << endl;
//			cin >> a1[i][j];
//		}
//	}
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			cout << "Enter the (" << i << "x" << j << ") element of second matrices" << endl;
//			cin >> a2[i][j];
//		}
//	}
//	
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			cout << a1[i][j] << "\t";
//			
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			cout << a2[i][j] << "\t";
//
//		}
//	}
//	cout << endl;
//	cout << endl;
//	
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c1; j++)
//		{
//			a3[i][j] = a1[i][j] + a2[i][j];
//			cout << a3[i][j] << "\t";
//		}
//
//	}
//	return 0;
//}

//////////////////////////////////////////////////

//Inheritance

//#include <iostream>
//using namespace std;
//
//class Person
//{
//protected:
//	int id;
//	char name[100];
//	char address[100];
//public:
//	Person()
//	{
//		id = 0;
//		name[0] = '\0';
//		address[0] = '\0';
//	}
//	void GetInfo()
//	{
//		cout << "Enter your id: " << endl;
//		cin >> id;
//		cin.ignore();
//		cout << "Enter your name: " << endl;
//		cin.getline(name, 100);
//		cout << "Enter your address: " << endl;
//		cin.getline(address, 100);
//	}
//	void showInfo()
//	{
//		cout << "Your Personal Details" << endl;
//		cout << "Your Id: " << id << endl;
//		cout << "Your Name: " << name << endl;
//		cout << "Your Address: " << address << endl;
//	}
//};
//class Student:public Person
//{
//protected:
//	int rno;
//	int marks;
//public:
//	Student()
//	{
//		Person::Person();
//		rno = 0;
//		marks = 0;
//	}
//	void GetEdu()
//	{
//		cout << "Enter your Roll No: " << endl;
//		cin>>rno;
//		cout << "Enter your Marks: " << endl;
//		cin >> marks;
//	}
//	void showEdu()
//	{
//		cout << "Your Educational Detail" << endl;
//		cout << "Your Roll no: " << rno << endl;
//		cout << "Your Marks: " << marks << endl;
//	}
//};
//int main()
//{
//	Student umer;
//	umer.GetInfo();
//	umer.GetEdu();
//	umer.showInfo();
//	umer.showEdu();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void swap1(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//};
//
//void swap2(int** a, int** b) {
//	int temp = **a;
//	**a = **b;
//	**b = temp;
//};
//
//int main()
//{
//	int a, * p, * q;
//	int arr[4] = { 0 };
//
//	cout << arr << endl;
//
//	p = arr;
//
//	cout << p << endl;
//
//	q = p;
//
//	cout << q << endl;
//
//	*p = 4;
//
//	for (int i = 0; i < 3; i++) {
//		a = *p;
//		p++;
//		*p = (a + i);
//	}
//	for (int j = 0; j < 4; j++) {
//
//		cout << *q << " ";
//		q++;
//	}
//	return 0;
//
//}

//#include <iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	struct Node* next;
//};
//void linkedListTraversal(struct Node* ptr) {
//	while (ptr != NULL) {
//		cout << "Element: " << ptr->data << endl;
//		ptr = ptr->next;
//	}
//}
//struct Node* insertAtFirst(struct Node* head, int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	ptr->next = head;
//	ptr->data = data;
//	head = ptr;
//	return ptr;
//}
//struct Node* insertInbetween(struct Node* head,int data,int index) {
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
//	return head;
//}
//struct Node* insertAtEnd(struct Node* head, int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* p = head;
//	while (p->next != NULL) {
//		p = p->next;
//	}
//	ptr->data = data;
//	p->next = ptr;
//	ptr->next = NULL;
//
//	return head;
//}
//struct Node* insertAfterNode(struct Node* head, struct Node* prevNode,int data) {
//	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* p = head;
//	ptr->data = data;
//
//	ptr->next = prevNode->next;
//	prevNode->next = ptr;
//
//	return head;
//}
//int main() {
//	struct Node* head;
//	struct Node* second;
//	struct Node* third;
//
//	head = (struct Node*)malloc(sizeof(struct Node));
//	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//
//	head->data = 2;
//	head->next = second;
//
//	second->data = 11;
//	second->next = third;
//
//	third->data = 34;
//	third->next = NULL;
//
//	linkedListTraversal(head);
//	/*head=insertAtFirst(head, 2);*/
//	head=insertInbetween(head, 45, 3);
//	/*head=insertAtEnd(head, 45);*/
//	/*head = insertAfterNode(head, head, 32);*/
//	cout << "After insertion: " << endl;
//	linkedListTraversal(head);
//	return 0;
//
//}

//====LINKEDLIST(Singularly)===//

#include <iostream>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};

//====INSERTION===//


void linkedListTraversal(struct Node* ptr) {
	while (ptr != NULL) {
		cout << "Element: " << ptr->data << endl;
		ptr = ptr->next;
	}
}

struct Node* insertAtFirst(struct Node* head, int data) {
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = head;
	head = ptr;
	return ptr;
}

struct Node* insertInBetween(struct Node* head, int data, int index) {
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	int i = 0;
	while (i != index - 1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;

	return head;
}

struct Node* insertAtEnd(struct Node* head, int data) {
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	ptr->data = data;
	ptr->next = NULL;
	p->next = ptr;
	return head;
}
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data) {
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node* p = head;
	while (p != prevNode) {
		p = p->next;
	}
	ptr->data = data;
	ptr->next = prevNode->next;
	prevNode->next = ptr;
	return head;
}

//====DELETION===//

struct Node* deleteFirst(struct Node* head) {
	struct Node* p = head;
	head = p->next;
	free(p);
	return head;
}
struct Node* deleteAtIndex(struct Node* head, int index) {
	struct Node* p = head;
	struct Node* q = p->next;
	int i = 0;
	while (i != index - 1) {
		p = p->next;
		q = q->next;
		i++;
	}
	p->next = q->next;
	free(q);
	return head;
}
struct Node* deleteLast(struct Node* head) {
	struct Node* p = head;
	struct Node* q = p->next;

	while (q->next != NULL) {
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
}
struct Node* deleteValue(struct Node* head, int value) {
	struct Node* p = head;
	struct Node* q = p->next;
	while (q->data != value && q->next != NULL) {
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
	fourth->next = NULL;


	linkedListTraversal(head);
	/*head=insertInBetween(head, 66, 2);*/
	/*head = insertAtEnd(head, 99);*/
	/*head = insertAfterNode(head, third, 33);*/
	/*head = insertAtFirst(head, 41);*/
	head = deleteValue(head, 8);
	cout << "After Deletion" << endl;
	linkedListTraversal(head);\

}





