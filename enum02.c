#include <stdio.h>

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main()
{
    // enum = a user defined data type that consists of a set of named integer constants.
    //        Benefit: replaces numbers with readable names

    Status status = FAILURE;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status){

    switch(status){
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case FAILURE:
            printf("Couldn't connect\n");
            break;
        case PENDING:
            printf("Connecting...");
            break;
    }

}