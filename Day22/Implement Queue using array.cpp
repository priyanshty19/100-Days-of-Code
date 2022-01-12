void MyQueue :: push(int x)
{
    arr[rear++]=x;

}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    while(front<rear)
    {
        return arr[front++];
    }
    return -1;
}

