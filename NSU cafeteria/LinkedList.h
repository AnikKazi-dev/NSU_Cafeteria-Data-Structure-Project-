#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include <string>

using namespace std;
class UnsortedType
{
    struct NodeType
    {
        int serialNumber;
        int price;
        string name  ;
        string shopName;


        float rating;

        NodeType* next;
    };
public:
    UnsortedType();
    ~ UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(string name1);
    void InsertItem(int serialNumber1,string name1, int price1,string shopName1,float rating1 );
    void InsertSortedRating(int serialNumber1,string name1, int price1,string shopName1,float rating1 );
    void InsertSortedPrice(int serialNumber1,string name1, int price1,string shopName1,float rating1 );
    void DeleteItem(int serialNumber);
    void ResetList();
    void GetNextItem(int &serialNumber1);
    void PrintList();
private:
    NodeType* head;
    int length;
    NodeType* currentPos;
};


#endif // UNSORTEDTYPE_H_INCLUDED


