#include<iostream>

using namespace std;

    int MaxSize=10;
    int StackContainer[10];
    int QueueContainer[10];
    int TopCounter=-1;
    int QueueTopCounter=0;
    int BottomCounter=MaxSize;

void Push(int number){

    if(TopCounter>=(MaxSize-1)){
        cout<<"Stack is full"<<endl;
    }
    else{

        BottomCounter--;
        StackContainer[BottomCounter]=number;


    }


}

void Pop(){

    if(StackContainer[BottomCounter]==0){
        cout<<"Stack is Empty"<<endl;

    }
    else{
        TopCounter++;
        StackContainer[TopCounter]=-1;

    }


}

void Enqueue(int number){

    if(QueueTopCounter==(MaxSize-1)){
        cout<<"Queue is full"<<endl;

    }
    else{
        QueueContainer[QueueTopCounter]=number;
        QueueTopCounter++;
    }

}

void Dequeue(){

    if(QueueTopCounter>BottomCounter && QueueContainer[QueueTopCounter]<=0){
        cout<<"The Queue is empty"<<endl;
    }
    else{
        QueueTopCounter++;
        QueueContainer[QueueTopCounter]=-1;

    }



}



void DisplayStack(){

    cout<<"Stack: "<<endl;

    for(int i=0; i<=(MaxSize-1); i++){

        cout<<StackContainer[i]<<endl;

    }

}

void DisplayQueue(){

    cout<<"Queue: "<<endl;

    for(int i=0; i<=(MaxSize-1); i++){

        cout<<QueueContainer[i];

    }

}



int main(){

    int choice;

    cout<<" 1.Push"<<endl<<" 2.Pop"<<endl<<" 3.Enqueue"<<endl<<" 4.Dequeue"<<endl<<" 5.Exit"<<endl;

    while(choice!=5){
        cout<<"Enter choice: ";
        cin>>choice;



        if(choice==1){
            int number;
            cin>>number;

            Push(number);
            DisplayStack();
        }

        else if(choice==2){
            Pop();
            DisplayStack();
        }

        else if(choice==3){
            int number;
            cin>>number;

            Enqueue(number);
            DisplayQueue();
            cout<<endl;
        }

        else if(choice==4){
            Dequeue();
            DisplayQueue();
        }

        else if(choice==5){
            break;
        }
    }

    cout<<endl;


    cout<<endl;


    return 0;
}
