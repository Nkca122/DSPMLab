#include <stdio.h>
#include <stdlib.h>


//Defining a queue
struct queue {
    int front;  //Front/lowerbound of the queue
    int rear;  //Rear/upperbound of the queue
    int capacity; //Capacity of the queue
    int size; //Size of the queue
    int* queue;  //Array for the queue
};

struct queue makeQueue(int capacity){
    struct queue newQueue;
    //Initialization
        newQueue.front = 0; //front of the queue
        newQueue.rear = -1; //Rear of the queue
        newQueue.capacity = capacity; //Capacity of the queue
        newQueue.size = 0;

        //Initializing the array for the queue
            newQueue.queue = (int*)calloc(capacity, sizeof(int)); 

    //Result 
        return newQueue; //Returning the new queue made here dynamically
}

void enqueue(struct queue* Q, int item); //Enqueue function for the queue
void dequeue(struct queue* Q); //Dequeue function for the queue

int main(){
    struct queue Q = makeQueue(5);
        enqueue(&Q, 5);
        enqueue(&Q, 4);
        enqueue(&Q, 3);
        enqueue(&Q, 2);
        enqueue(&Q, 1);

    for(int i = Q.front; i <= Q.rear; i++){
        printf("%d ", Q.queue[i]);
    }

    printf("\n");

        dequeue(&Q);

    for(int i = Q.front; i <= Q.rear; i++){
        printf("%d ", Q.queue[i]);
    }

    return 0;


}

void enqueue(struct queue* Q, int item){

    if(Q->rear < Q->capacity){
        Q->rear += 1;
        Q->queue[Q->rear] = item;
        Q->size += 1;
    } else {
        printf("Overflow\n");
    }

    return;
}

void dequeue(struct queue* Q){
    if(Q->rear >= Q->front){
        // free(Q->queue + Q->front);
            Q->front += 1;
            Q->size -= 1;
    } else {
        printf("Underflow\n");
    }
}