#include <iostream>
using namespace std;

class queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    queue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int x) {
        if (rear == size - 1) {
            cout << "Queue overflow\n";
            return;
        }

        rear++;
        arr[rear] = x;
        if (front == -1) {
            front = 0;
        }
    }

    void pop() {
        if (front == -1 || front > rear) {
            cout << "No element to pop\n";
            return;
        }

        cout << arr[front] << " popped\n";
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size, value, totalValues, totalPop;

    cout << "Enter queue size: ";
    cin >> size;
    queue q(size);

    cout << "How many values do you want to push? ";
    cin >> totalValues;

    if (totalValues > size) {
        cout << "You can push maximum " << size << " values only.\n";
        totalValues = size;
    }

    for (int i = 0; i < totalValues; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        q.push(value);
    }

    q.display();

    cout << "How many values do you want to pop? ";
    cin >> totalPop;

    for (int i = 0; i < totalPop; i++) {
        q.pop();
    }

    q.display();
    return 0;
}

// ///////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
# define n 7
class  queue{
int * arr;
int front;
int rear;
public:
queue(){
    arr=new int [n];
    front =-1;
    rear=-1;

}
void push(int x){
if(rear==n-1){
    cout<<"queue overflow"<<endl;
    return;
}
rear++;
arr[rear]=x;
if(front==-1){
    front ++;

}
}
void pop(){
    if(front==-1||front>rear){
        cout<<"no element to pop";
        return ;
    } front++;

}
int  peek(){
    if(front==-1||front>rear){
      cout<<  "no element in queue";
      return -1;

    } return arr[front];
}
bool empty(){
    if(front==-1||front>rear){
      cout<<  "no element in queue";
      return true;

    } return false;

}

};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.peek()<<endl;
q.pop();
     q.pop();
     cout<<q.peek()<<endl;
     q.pop();
     cout<<q.peek()<<endl;
}
/////////////////////////////////////CIRCULAR QUEUE//////////////////
#include <iostream>
using namespace std;

#define n 5

class queue {
    int* arr;
    int front;
    int rear;

public:
    queue() {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void push(int x) {
        // Queue full
        if ((front == 0 && rear == n - 1) ||
            (rear + 1 == front)) {
            cout << "Queue overflow\n";
            return;
        }

        // First element
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Rear last index par hai, to 0 par le jao
        else if (rear == n - 1) {
            rear = 0;
        }
        // Normal increment
        else {
            rear++;
        }

        arr[rear] = x;
    }

    void pop() {
        // Queue empty
        if (front == -1) {
            cout << "Queue underflow\n";
            return;
        }

        cout << arr[front] << " popped\n";

        // Sirf ek element tha
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        // Front last index par hai, to 0 par le jao
        else if (front == n - 1) {
            front = 0;
        }
        // Normal increment
        else {
            front++;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";

        int i = front;

        while (i != rear) {
            cout << arr[i] << " ";

            if (i == n - 1) {
                i = 0;
            } else {
                i++;
            }
        }

        cout << arr[rear] << endl;
    }
};

int main() {
    queue q;
    int totalValues, value, totalPop;

    cout << "Maximum queue size is " << n << endl;
    cout << "How many values do you want to push? ";
    cin >> totalValues;

    for (int i = 0; i < totalValues; i++) {
        cout << "Enter value: ";
        cin >> value;
        q.push(value);
    }

    q.display();

    cout << "How many values do you want to pop? ";
    cin >> totalPop;

    for (int i = 0; i < totalPop; i++) {
        q.pop();
    }

    q.display();

    return 0;
}                           