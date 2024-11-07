#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
int front = -1, rear = -1;
int arr[SIZE];

void enqueue();
void dequeue();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("\nPerform operations on the circular queue:");
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice.");
        }
    }
}

void enqueue()
{
    int x;
    if ((rear + 1) % SIZE == front)
    {
        printf("\nOverflow: Queue is full.");
    }
    else
    {
        if (front == -1)  
            front = 0;
        
        printf("\nEnter element to be added to the queue: ");
        scanf("%d", &x);
        rear = (rear + 1) % SIZE;  
        arr[rear] = x;
    }
}

void dequeue()
{
    if (front == -1)  
    {
        printf("\nUnderflow: Queue is empty.");
    }
    else
    {
        int y = arr[front];
        printf("\nDequeued element: %d", y);
        
        if (front == rear)         
        {
            front = rear = -1;  
            }
        else
        {
            front = (front + 1) % SIZE;  
        }
    }
}

void display()
{
    if (front == -1)  
    {
        printf("\nUnderflow: Queue is empty.");
    }
    else
    {
        printf("\nElements in the queue: ");
        int i = front;
        while (i != rear)  
        {
            printf("%d ", arr[i]);
            i = (i + 1) % SIZE;  
        }
        printf("%d\n", arr[rear]);  
    }
}