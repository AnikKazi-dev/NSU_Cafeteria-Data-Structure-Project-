#include "LinkedList.h"
#include <iostream>
#include <string.h>
using namespace std ;

UnsortedType::UnsortedType()
{
    length = 0 ;
    head=NULL ;
    currentPos=NULL ;
}

void UnsortedType::InsertSortedRating(int serialNumber1,string name1, int price1,string shopName1,float rating1 )
{
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;

    location=head;
    predLoc=NULL;
    moreToSearch=(location!=NULL);
    while(moreToSearch)
    {
        if(location->rating>rating1)
        {
            predLoc=location;
            location=location->next;
            moreToSearch=(location!=NULL);
        }
        else
            moreToSearch=false;
    }
    newNode=new NodeType;

    newNode->serialNumber=serialNumber1;
    newNode->name=name1;
    newNode->price=price1;
    newNode->shopName=shopName1;
    newNode->rating=rating1;

    if(predLoc==NULL)
    {
        newNode->next=head;
        head=newNode;
    }
    else
    {
        newNode->next=location;
        predLoc->next=newNode;

    }
    length++;

}

int UnsortedType ::LengthIs()
{
    return length ;
}

bool UnsortedType ::IsFull()
{
    NodeType* location ;
    try
    {
        location = new NodeType ;
        delete location ;
        return false ;
    }

    catch (bad_alloc& exception)
    {
        return true;
    }
}
void UnsortedType::InsertItem(int serialNumber1,string name1, int price1,string shopName1,float rating1 )
{
    NodeType *newNode = new NodeType;
    newNode->next = NULL;
    newNode->name = name1;
    newNode->serialNumber = serialNumber1;
    newNode->price=price1;
    newNode->shopName=shopName1;
    newNode->rating = rating1;

    if(head != NULL)
    {
        NodeType *cur = head;
        while(cur ->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newNode;

    }
    else
    {
        head = newNode;
    }

    length ++ ;
}


void UnsortedType::InsertSortedPrice(int serialNumber1,string name1, int price1,string shopName1,float rating1 )
{


    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;

    location=head;
    predLoc=NULL;
    moreToSearch=(location!=NULL);
    while(moreToSearch)
    {
        if(location->price<price1)
        {
            predLoc=location;
            location=location->next;
            moreToSearch=(location!=NULL);
        }
        else
            moreToSearch=false;
    }
    newNode=new NodeType;

    newNode->serialNumber=serialNumber1;
    newNode->name=name1;
    newNode->price=price1;
    newNode->shopName=shopName1;
    newNode->rating=rating1;

    if(predLoc==NULL)
    {
        newNode->next=head;
        head=newNode;
    }
    else
    {
        newNode->next=location;
        predLoc->next=newNode;

    }
    length++;



}

void UnsortedType::DeleteItem(int item)
{
    NodeType* location =head ;
    NodeType* tempLocation ;
    if (item ==head ->serialNumber)
    {
        tempLocation = location ;
        head = head-> next ;

    }
    else
    {
        while (!(item== (location->next)->serialNumber))
            location = location ->next ;
        tempLocation =location-> next ;
        location ->next = (location ->next)->next ;
    }
    delete tempLocation ;
    length-- ;
}

void UnsortedType::RetrieveItem(string name1)
{
    NodeType* currNode = head;
    int currIndex = 0;
    int start=0;
    char nameX[100];
    string nameTemp,name2;
    nameTemp = (currNode->name);
    /// name1= Search name
    /// name2 = LinkedList name;




    for (int i=1; i<nameTemp.length(); i++)
    {
        nameX[start]=nameTemp.at(i);
        start++;
    }
    nameX[start]='\0';
    name2=nameX;
    start=0;
    //cout << name2.compare(name1) << endl ;
    //while (currNode != NULL && name2 != name1) {
    int x;
    for(x=0; x <(length-1) && name2 != name1; x++)
    {

        currNode = currNode->next;
        currIndex++;

        nameTemp = (currNode->name);
        /// name1= Search name
        /// name2 = LinkedList name;

        for (int i=1; i<nameTemp.length(); i++)
        {
            nameX[start]=nameTemp.at(i);
            start++;
        }
        nameX[start]='\0';
        name2=nameX;

        start=0;

        // cout << name2 <<endl;
    }

    //if(currNode==NULL)
    if(x==(length-1))
    {
        cout <<"Food Not Found"<<endl;
    }

    else
    {
        cout << "Food name :" << currNode->name<< endl;
        cout << "Shop name:" <<currNode->shopName<<endl;
        cout << "Food price :\n" <<currNode->price<<endl;
        cout << "Food rating :\n" <<currNode->rating<<endl;
    }


}
void UnsortedType::MakeEmpty()
{
    NodeType *temPtr;
    while(head !=NULL)
    {
        temPtr = head;
        head = head->next;
        delete temPtr;
    }
    length = 0;
}

UnsortedType::~UnsortedType()
{
    MakeEmpty();
}



void UnsortedType::PrintList()
{
    NodeType* print = head;
    NodeType* print1 = head;
    NodeType* print2 = head;
    NodeType* print3 = head;


    while(print!=NULL)
    {

        cout <<"Serial Number :"<< print->serialNumber <<"\nFood Name:" << print->name <<endl;
        cout << "Price :" << print->price << endl;

        cout <<"Rating: " << print->rating <<endl;
        cout<< "\n";


        print=print->next;

    }


}


void UnsortedType::ResetList()
{

    currentPos=NULL;
}


void UnsortedType::GetNextItem(int &serialNumber1)
{

    if(currentPos==NULL)
    {

        currentPos=head;

    }
    else
    {

        currentPos=currentPos->next;
    }
    serialNumber1 =currentPos->serialNumber;
}

