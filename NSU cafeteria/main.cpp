#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdio>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include"LinkedList.h"
#define MAX_SIZE 100
using namespace std;

void loading();
void MainFunction();
void GoBack_Exit();
void addAndPrint();
void USER();
void printByRating();
void printByPrice();
void Hack();
void ADMIN();
void ExploreFood();
void ExploreFoodReview();
void ExploreFoodAmericanBlade();
void ExploreFoodGrub();
void ExploreFoodKhansKitchen();
void ExploreFoodTheKitchen();
void ReviewFoodAmericanBlade();
void ReviewFoodGrub();
void ReviewFoodKhansKitchen();
void ReviewFoodTheKitchen();
void giveReviewFoodAmericanBlade();
void giveReviewFoodGrub();
void giveReviewFoodKhansKitchen();
void giveReviewFoodTheKitchen();
void showImageAB(int serial);
void showImageG(int serial);
void showImageKK(int serial);
void showImageTK(int serial);
void ExploreWriteReview();
void showReviewAB(int serial);
void showReviewG(int serial);
void showReviewKK(int serial);
void showReviewTK(int serial);
void writeReviewTK(int serial);
void writeReviewAB(int serial);
void writeReviewG(int serial);
void writeReviewKK(int serial);
void writeReviewTK(int serial);
void findItem();
void MainFunctionAdmin();
void addItemsAB();
void addItemsG();
void addItemsKK();
void addItemsTK();
void addItems();
void deleteItemsAB();
void deleteItemsG();
void deleteItemsKK();
void deleteItemsTK();
void deleteItems();
void editPriceAB();
void editPriceG();
void editPriceKK();
void editPriceTK();
void editPrice();
void About_Programmer();


struct NSU
{
      string name;
      string University_name;
      int ID;
      string course;
      string dept;

};

UnsortedType shopAB;
UnsortedType shopG;
UnsortedType shopKK;
UnsortedType shopTK;
UnsortedType SortedFoodP;
UnsortedType SortedFoodR;

int countAB=0,countG=0,countKK=0,countTK=0;
int recall=0;
int main()
{


    for(int i=1; i<10; i++)
    {


        char x = '0' + i;

        char txt[]= {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','t','x','t','\0'};

        ifstream in(txt);
        if(!in)
            int xDxD=0;
        else
        {
            countAB++;
            string strSerialNumber,strName,strPrice,strShopName,strRating;
            char str[100];
            in.getline(str,100,':');
            strSerialNumber = str;
            stringstream SN(strSerialNumber);
            int serialNumber;
            SN >> serialNumber;

            in.getline(str,100,':');
            strName=str;

            in.getline(str,100,':');
            strPrice=str;
            stringstream P(strPrice);
            int price;
            P >> price;

            in.getline(str,100,':');
            strShopName=str;

            in.getline(str,100,':');
            strRating=str;
            stringstream R(strRating);
            float rating;
            R >> rating;




            shopAB.InsertItem(serialNumber,strName,price,strShopName,rating);
            SortedFoodR.InsertSortedRating(serialNumber,strName,price,strShopName,rating);
            SortedFoodP.InsertSortedPrice(serialNumber,strName,price,strShopName,rating);


        }
        in.close();

    }


    for(int i=1; i<10; i++)
    {

        char x = '0' + i;

        char txt[]= {'G','r','u','b','\\','\\',x,'.','t','x','t','\0'};

        ifstream in(txt);
        if(!in)
            int asd=0;
        else
        {
            countG++;
            string strSerialNumber2,strName2,strPrice2,strShopName2,strRating2;
            char str[100];
            in.getline(str,100,':');
            strSerialNumber2 = str;
            stringstream SN2(strSerialNumber2);
            int serialNumber;
            SN2 >> serialNumber;

            in.getline(str,100,':');
            strName2=str;

            in.getline(str,100,':');
            strPrice2=str;
            stringstream P2(strPrice2);
            int price;
            P2 >> price;

            in.getline(str,100,':');
            strShopName2=str;

            in.getline(str,100,':');
            strRating2=str;
            stringstream R2(strRating2);
            float rating;
            R2 >> rating;




            shopG.InsertItem(serialNumber,strName2,price,strShopName2,rating);
            SortedFoodR.InsertSortedRating(serialNumber,strName2,price,strShopName2,rating);
            SortedFoodP.InsertSortedPrice(serialNumber,strName2,price,strShopName2,rating);


        }
        in.close();

    }
    for(int i=1; i<10; i++)
    {

        char x = '0' + i;

        char txt[]= {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','t','x','t','\0'};

        ifstream in(txt);
        if(!in)
            int asd=0;
        else
        {
            countKK++;
            string strSerialNumber3,strName3,strPrice3,strShopName3,strRating3;
            char str[100];
            in.getline(str,100,':');
            strSerialNumber3 = str;
            stringstream SN3(strSerialNumber3);
            int serialNumber;
            SN3 >> serialNumber;

            in.getline(str,100,':');
            strName3=str;

            in.getline(str,100,':');
            strPrice3=str;
            stringstream P3(strPrice3);
            int price;
            P3 >> price;

            in.getline(str,100,':');
            strShopName3=str;

            in.getline(str,100,':');
            strRating3=str;
            stringstream R3(strRating3);
            float rating;
            R3 >> rating;



            shopKK.InsertItem(serialNumber,strName3,price,strShopName3,rating);
            SortedFoodR.InsertSortedRating(serialNumber,strName3,price,strShopName3,rating);
            SortedFoodP.InsertSortedPrice(serialNumber,strName3,price,strShopName3,rating);

        }
        in.close();

    }

    for(int i=1; i<10; i++)
    {

        char x = '0' + i;

        char txt[]= {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','t','x','t','\0'};

        ifstream in(txt);
        if(!in)
            int asd=0;
        else
        {
            countTK++;
            string strSerialNumber4,strName4,strPrice4,strShopName4,strRating4;
            char str[100];
            in.getline(str,100,':');
            strSerialNumber4 = str;
            stringstream SN4(strSerialNumber4);
            int serialNumber;
            SN4 >> serialNumber;

            in.getline(str,100,':');
            strName4=str;

            in.getline(str,100,':');
            strPrice4=str;
            stringstream P4(strPrice4);
            int price;
            P4 >> price;

            in.getline(str,100,':');
            strShopName4=str;

            in.getline(str,100,':');
            strRating4=str;
            stringstream R4(strRating4);
            float rating;
            R4 >> rating;



            shopTK.InsertItem(serialNumber,strName4,price,strShopName4,rating);
            SortedFoodR.InsertSortedRating(serialNumber,strName4,price,strShopName4,rating);
            SortedFoodP.InsertSortedPrice(serialNumber,strName4,price,strShopName4,rating);

        }
        in.close();

    }
    if (recall==0)
    {
    recall++;
    loading();


    }

    MainFunction();




    return 0;
}

void Hack()
{
    int c = 1, d = 1;
    char spinner[] = "|/-\\";
    int i, j;
    printf( "Erasing data...." );
    for ( i = 0 ; i < 10 ; i++ )
    {
        for ( j = 0 ; j < 4 ; j++ )
        {
            printf( "%c\b", spinner[j] );
            fflush( stdout );
            for ( c = 1 ; c <= 32767 ; c++ )
                for ( d = 1 ; d <= 3276 ; d++ )
                {}
        }
        printf( "\nDESTROYING The program...." );
        for ( i = 0 ; i < 10 ; i++ )
        {
            for ( j = 0 ; j < 4 ; j++ )
            {
                printf( "%c\b", spinner[j] );
                fflush( stdout );
                for ( c = 1 ; c <= 32767 ; c++ )
                    for ( d = 1 ; d <= 3276 ; d++ )
                    {}
            }

        }
        printf( "\n\n\n\n\nDESTROYED...\n" );


    }
}
void GoBack_Exit()
{
    char ch;
    fflush(stdin);
    printf("\n\n1.Back to Main menu\n");
    printf("2.Back to Log in menu\n");
    printf("3.Exit\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);
    switch (ch)
    {
    case'1':
            system("clr");
        USER();
        break;
    case'2':
            system("clr");
        MainFunction();
        break;
    case'3':
            break;
    default:
    {

        printf("Wrong choice\n\n");
        system("clr");
        GoBack_Exit();
        break;
    }

    }
}
void ADMIN()
{
    int i=0;
    char *str="NSUGEEKS";
    int check;

    do
    {
        if(i>2)
        {
            system("cls");
            printf("\n\n                               YOU ARE NOT AN ADMIN!!\n");
            printf("                            IT SEEMS YOU ARE A HACKER!!\n\n\n");
            Hack();
            break;
        }

        char pass[MAX_SIZE];
        if (i==0)
        {

            printf("\nEnter your password:");
        }
        if (i==1)
        {
            system("cls");
            printf("\nSomething went wrong, try again");
            printf("\nEnter password:");
        }
        if (i==2)
        {
            system("cls");
            printf("\nIf you are an ADMIN you should know it, This is the last chance");
            printf("\nEnter password:");
        }

        gets(pass);
        i++;
        check=strcmp(str,pass);
    }
    while(check!=0);

    if(check==0)
    {
        system("cls");

        printf("\n                                 HELLO   \n");
        printf("                                      ADMIN  \n\n");

        MainFunctionAdmin();
    }
}
void loading()
{
    int r,q;
    printf("                                   **  *  ****   *   *    \n");
    printf("                                   * * *  *      *   *    \n");
    printf("                                   * * *  ****   *   *     \n");
    printf("                                   *  **     *   *   *    \n");
    printf("                                   *  **  ****   *****    \n");
    printf("                                                     CAFETERIA \n");
    printf("                                          \n\n\n");
    printf("LOADING NSU CAFETERIA ");
    for(r=1; r<=30; r++)
    {
        for (q=0; q<=100000000; q++);
        printf("%c",177);
    }
    printf("\n\n");

    system("cls");
//getch();

}


void MainFunction()
{

    char ch;
    fflush(stdin);
    printf("                     Welcome to  \n");
    printf("                                   **  *  ****   *   *    \n");
    printf("                                   * * *  *      *   *    \n");
    printf("                                   * * *  ****   *   *     \n");
    printf("                                   *  **     *   *   *    \n");
    printf("                                   *  **  ****   *****    \n");
    printf("                                                     CAFETERIA \n");
    printf("                                          \n");
    printf("\n=====================\n");
    printf("1.Student Login\n");
    printf("2.Admin Login\n");
    printf("3.Exit\n");
    printf("=====================\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);
    switch (ch)

    {
    case'1':
            system("cls");
        printf("                     Welcome to  \n");
        printf("                                   **  *  ****   *   *    \n");
        printf("                                   * * *  *      *   *    \n");
        printf("                                   * * *  ****   *   *     \n");
        printf("                                   *  **     *   *   *    \n");
        printf("                                   *  **  ****   *****    \n");
        printf("                                                     CAFETERIA \n");
        printf("                                          \n");
        USER();
        break;
    case'2':
            system("cls");
        ADMIN();
        break;
    case'3':
            break;
    default:
    {
        printf("Wrong choice\n\n");
        system("pause");
        system("cls");
        MainFunction();
    }

    }
}

void USER()
{

    fflush(stdin);
    char ch;
    printf("\n\n=================================\n");
    printf("1.Explore Foods\n");
    printf("2.Search by food name\n");
    printf("3.Sort by food rating\n");
    printf("4.Sort by food price\n");
    printf("5.Show ratings and reviews\n");
    printf("6.Give ratings and reviews\n");
    printf("7.Programmer Details\n");
    printf("8.Back to log in menu\n");
    printf("=================================\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);

    switch (ch)
    {
    case'1':
            system("cls");
        ExploreFood();

        break;
    case'2':
            system("cls");
        findItem();

        break;
    case'3':
            system("cls");
        printByRating();
        break;
    case'4':
            system("cls");
        printByPrice();
        break;
    case'5':
            system("cls");
        ExploreFoodReview();
        break;
    case'6':
            system("cls");
        ExploreWriteReview();
        break;
        case'7':
            system("cls");
          About_Programmer();

    case'8':
            system("cls");
        MainFunction();
        break;
    default:
    {
        printf("\n\nWrong choice\nChoose wisely.\n\n");
        system("cls");
        USER();
    }

    }


}


void addAndPrint()
{


    shopAB.PrintList();
    shopG.PrintList();
    shopKK.PrintList();
    shopTK.PrintList();

}


void printByRating()
{

    SortedFoodR.PrintList();

    system("pause");
    system("cls");
    USER();


}

void printByPrice()
{

    SortedFoodP.PrintList();
    system("pause");
    system("cls");
    USER();


}
void ExploreFood()
{
    fflush(stdin);
    char ch;
    printf("\n\n=================================\n");
    printf("1.American Blend\n");
    printf("2.Grub\n");
    printf("3.Khan's Kitchen\n");
    printf("4.The Kitchen Cafe\n");
    printf("5.Back to log in menu\n");
    printf("=================================\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);

    switch (ch)
    {
    case'1':
            system("cls");
        ExploreFoodAmericanBlade();

        break;
    case'2':
            system("cls");
        ExploreFoodGrub();

        break;
    case'3':
            system("cls");
        ExploreFoodKhansKitchen();
        break;
    case'4':
            system("cls");

        ExploreFoodTheKitchen();
        break;

    case'5':
            system("cls");
        MainFunction();
        break;
    default:
    {
        printf("\n\nWrong choice\nChoose wisely.\n\n");
        system("cls");
        ExploreFood();

    }

    }
}


void ExploreFoodReview()
{
    fflush(stdin);
    char ch;
    printf("\n\n=================================\n");
    printf("1.American Blend\n");
    printf("2.Grub\n");
    printf("3.Khan's Kitchen\n");
    printf("4.The Kitchen Cafe\n");
    printf("5.Back to log in menu\n");
    printf("=================================\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);

    switch (ch)
    {
    case'1':
            system("cls");
        ReviewFoodAmericanBlade();

        break;
    case'2':
            system("cls");
        ReviewFoodGrub();

        break;
    case'3':
            system("cls");
        ReviewFoodKhansKitchen();
        break;
    case'4':
            system("cls");

        ReviewFoodTheKitchen();
        break;

    case'5':
            system("cls");
        MainFunction();
        break;
    default:
    {
        printf("\n\nWrong choice\nChoose wisely.\n\n");
        system("cls");
        ExploreFood();

    }

    }
}

void ExploreFoodAmericanBlade()
{

    shopAB.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Image\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        ExploreFood();
    }

    showImageAB(SN);


}
void ExploreFoodGrub()
{

    shopG.PrintList();
    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Image\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        ExploreFood();
    }

    showImageG(SN);

}
void ExploreFoodKhansKitchen()
{
    shopKK.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Image\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        ExploreFood();
    }

    showImageKK(SN);


}
void ExploreFoodTheKitchen()
{

    shopTK.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Image\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        ExploreFood();
    }

    showImageTK(SN);

}
void showImageAB(int serial)
{
    char x = '0' + serial;
    if(serial>4)
    {
        system("cls");
        cout<<" Image Not Found "<<endl;
        system("pause");
        system("cls");
        ExploreFood();
    }
    char jpg4[] = {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','j','p','g',NULL};
    initwindow(1000,1000,"Pic");
    readimagefile(jpg4,0,0,1000,1000);
    system("pause");
    system("cls");

    ExploreFood();

}

void showImageG(int serial)
{
    char x = '0' + serial;
    if(serial>5)
    {
        system("cls");
        cout<<" Image Not Found "<<endl;
        system("pause");
        system("cls");
        ExploreFood();
    }
    char jpg1[] = {'G','r','u','b','\\','\\',x,'.','j','p','g',NULL};
    initwindow(1000,1000,"Pic");
    readimagefile(jpg1,0,0,1000,1000);
    system("pause");
    system("cls");

    ExploreFood();
}

void showImageKK(int serial)
{

    char x = '0' + serial;
    if(serial>4)
    {
        system("cls");
        cout<<" Image Not Found "<<endl;
        system("pause");
        system("cls");
        ExploreFood();
    }
    char jpg3[] = {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','j','p','g',NULL};
    initwindow(1000,1000,"Pic");
    readimagefile(jpg3,0,0,1000,1000);
    system("pause");
    system("cls");

    ExploreFood();
}

void showImageTK(int serial)
{
    char x = '0' + serial;
    if(serial>5)
    {
        system("cls");
        cout<<" Image Not Found "<<endl;
        system("pause");
        system("cls");
        ExploreFood();
    }
    char jpg2[] = {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','j','p','g',NULL};
    initwindow(1000,1000,"Pic");
    readimagefile(jpg2,0,0,1000,1000);
    system("pause");
    system("cls");

    ExploreFood();

}

void findItem()
{
    string str;

    cout << "Enter food name :" ;
    cin.clear();
    getline(cin,str);
    system("cls");
    SortedFoodP.RetrieveItem(str);

    system("pause");
    system("cls");

    USER();

}


void ReviewFoodAmericanBlade()
{

    shopAB.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }
    showReviewAB(SN);


}
void ReviewFoodGrub()
{

    shopG.PrintList();
    fflush(stdin);
    int SN;
    printf("\n\n=================================\n");
    printf("Enter Serial Number for Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }
    showReviewG(SN);

}
void ReviewFoodKhansKitchen()
{
    shopKK.PrintList();

    fflush(stdin);
    int SN;
    printf("\n\n=================================\n");
    printf("Enter Serial Number for Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }
    showReviewKK(SN);


}
void ReviewFoodTheKitchen()
{

    shopTK.PrintList();

    fflush(stdin);
    int SN;
    printf("\n\n=================================\n");
    printf("Enter Serial Number for Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }
    showReviewTK(SN);

}

void showReviewAB(int serial)
{
    char x = '0' + serial;
    if(serial>countAB)
    {
        system("cls");
        ReviewFoodAmericanBlade();
    }
    char RR[] = {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");
    ifstream in(RR);
    if(!in)
        cout << "No Review Found " <<endl;
    else
    {
        while(in)
        {
            char ch;
            in.get(ch);
            if(in)
                cout <<ch;
        }

        in.close();
    }






    system("pause");
    system("cls");

    ReviewFoodAmericanBlade();

}

void showReviewG(int serial)
{
    char x = '0' + serial;
    if(serial>countG)
    {
        system("cls");
        ReviewFoodGrub();
    }
    char RR[] = {'G','r','u','b','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");

    ifstream in(RR);
    if(!in)
        cout << "No Review Found " <<endl;
    else
    {
        while(in)
        {
            char ch;
            in.get(ch);
            if(in)
                cout <<ch;
        }

        in.close();
    }


    system("pause");
    system("cls");

    ReviewFoodGrub();
}

void showReviewKK(int serial)
{

    char x = '0' + serial;
    if(serial>countKK)
    {
        system("cls");
        ReviewFoodKhansKitchen();
    }
    char RR[] = {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");

    ifstream in(RR);
    if(!in)
        cout << "No Review Found " <<endl;
    else
    {
        while(in)
        {
            char ch;
            in.get(ch);
            if(in)
                cout <<ch;
        }

        in.close();
    }

    system("pause");
    system("cls");

    ReviewFoodKhansKitchen();
}

void showReviewTK(int serial)
{
    char x = '0' + serial;
    if(serial>countTK)
    {
        system("cls");
        ReviewFoodTheKitchen();
    }
    char RR[] = {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");

    ifstream in(RR);
    if(!in)
        cout << "No Review Found " <<endl;
    else
    {
        while(in)
        {
            char ch;
            in.get(ch);
            if(in)
                cout <<ch;
        }

        in.close();
    }

    system("pause");
    system("cls");

    ReviewFoodTheKitchen();

}



void ExploreWriteReview()
{
    fflush(stdin);
    char ch;
    printf("\n\n=================================\n");
    printf("1.American Blend\n");
    printf("2.Grub\n");
    printf("3.Khan's Kitchen\n");
    printf("4.The Kitchen Cafe\n");
    printf("5.Back to log in menu\n");
    printf("=================================\n");
    printf("Your choice:");
    scanf("%c",&ch);
    fflush(stdin);

    switch (ch)
    {
    case'1':
            system("cls");
        giveReviewFoodAmericanBlade();

        break;
    case'2':
            system("cls");
        giveReviewFoodGrub();

        break;
    case'3':
            system("cls");
        giveReviewFoodKhansKitchen();
        break;
    case'4':
            system("cls");

        giveReviewFoodTheKitchen();
        break;

    case'5':
            system("cls");
        MainFunction();
        break;
    default:
    {
        printf("\n\nWrong choice\nChoose wisely.\n\n");
        system("cls");
        ExploreFood();

    }

    }
}

void giveReviewFoodAmericanBlade()
{

    shopAB.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Give Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }

    writeReviewAB(SN);


}
void giveReviewFoodGrub()
{

    shopG.PrintList();
    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Give Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }

    writeReviewG(SN);

}
void giveReviewFoodKhansKitchen()
{
    shopKK.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Give Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }

    writeReviewKK(SN);


}
void giveReviewFoodTheKitchen()
{

    shopTK.PrintList();

    fflush(stdin);
    int SN;

    printf("\n\n=================================\n");
    printf("Enter Serial Number for Give Ratings & Review\n");
    printf("Enter 0 for back\n");
    printf("Your Choice :");


    cin >> SN;

    if(SN==0)
    {
        system("cls");
        USER();
    }

    writeReviewTK(SN);

}


void writeReviewAB(int serial)
{
    char x = '0' + serial;
    if(serial>countAB)
    {
        system("cls");
        giveReviewFoodAmericanBlade();
    }
    char RR[] = {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");


    ofstream outfile;

    char firstname[50],
         rating[25],
         review [200];

    outfile.open(RR,std::ios_base::app);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Name:";
    cin.getline(firstname, 50);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Rating:";
    cin.getline(rating, 25);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Review: ";
    cin.getline(review, 200);
    fflush(stdin);
    cin.clear();


    outfile<<"Name : " <<firstname<<'\n'<<"Rating : "<<rating<<'\n'<< "Review : " <<review<<"\n"<<endl;
    outfile.close();

    cout<<"Writing Completed."<<endl;

    system("pause");
    system("cls");

    giveReviewFoodAmericanBlade();

}

void writeReviewG(int serial)
{
    char x = '0' + serial;
    if(serial>countG)
    {
        system("cls");
        giveReviewFoodGrub();
    }
    char RR[] = {'G','r','u','b','\\','\\',x,'.','d','o','c','x',NULL};

    system("cls");
    ofstream outfile;

    char firstname[50],
         rating[25],
         review [200];

    outfile.open(RR,std::ios_base::app);
    cin.clear();
    fflush(stdin);
    cout<<"Enter your Name:";
    cin.getline(firstname, 50);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Rating:";
    cin.getline(rating, 25);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Review: ";
    cin.getline(review, 200);
    fflush(stdin);
    cin.clear();


    outfile<<"Name : " <<firstname<<'\n'<<"Rating : "<<rating<<'\n'<< "Review : " <<review<<"\n"<<endl;
    outfile.close();

    cout<<"Writing Completed."<<endl;

    system("pause");
    system("cls");

    giveReviewFoodGrub();
}

void writeReviewKK(int serial)
{

    char x = '0' + serial;
    if(serial>countKK)
    {
        system("cls");
        giveReviewFoodKhansKitchen();
    }
    char RR[] = {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");
    ofstream outfile;

    char firstname[50],
         rating[25],
         review [200];

    outfile.open(RR,std::ios_base::app);
    cin.clear();
    fflush(stdin);
    cout<<"Enter your Name:";
    cin.getline(firstname, 50);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Rating:";
    cin.getline(rating, 25);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Review: ";
    cin.getline(review, 200);
    fflush(stdin);
    cin.clear();


    outfile<<"Name : " <<firstname<<'\n'<<"Rating: "<<rating<<'\n'<< "Review : " <<review<<"\n"<<endl;
    outfile.close();

    cout<<"Writing Completed."<<endl;

    system("pause");
    system("cls");

    giveReviewFoodKhansKitchen();
}

void writeReviewTK(int serial)
{
    char x = '0' + serial;
    if(serial>countTK)
    {
        system("cls");
        giveReviewFoodTheKitchen();
    }
    char RR[] = {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','d','o','c','x',NULL};
    system("cls");
    ofstream outfile;

    char firstname[50],
         rating[25],
         review [200];

    outfile.open(RR,std::ios_base::app);
    cin.clear();
    fflush(stdin);
    cout<<"Enter your Name:";
    cin.getline(firstname, 50);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Rating:";
    cin.getline(rating, 25);
    fflush(stdin);
    cin.clear();
    cout<<"Enter your Review: ";
    cin.getline(review, 200);
    fflush(stdin);
    cin.clear();


    outfile<<"Name : " <<firstname<<'\n'<<"Rating : "<<rating<<'\n'<< "Review : " <<review<<"\n"<<endl;
    outfile.close();

    cout<<"Writing Completed."<<endl;

    system("pause");
    system("cls");

    giveReviewFoodTheKitchen();

}



void editPriceAB()
{
    string strSerialNumber,strName,strPrice,strShopName,strRating;
    cout << "Enter Serial Number of the Food to Edit Price:";
    int serialNumber;
    fflush(stdin);
    cin >> serialNumber;
    cout << "Enter New Price:";
    int newPrice;
    fflush(stdin);
    cin >> newPrice;

    char x =  '0'+serialNumber ;
    char txt[]= {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','t','x','t','\0'};

    ifstream in(txt);
    if(!in)
        int bc = 0;
    else
    {
        char str[100];

        in.getline(str,100,':');
        strSerialNumber = str;

        in.getline(str,100,':');
        strName=str;

        in.getline(str,100,':');
        strPrice=str;

        in.getline(str,100,':');
        strShopName=str;

        in.getline(str,100,':');
        strRating=str ;
    }

    ofstream out(txt);
    if(!out)
        int nigga = 0;
    else
    {
        out << x << ":";
        out << strName << ":\n";
        out << newPrice<< ":\n";
        out << "American Blend:";
        out << strRating << ":\n";
        out.close();
    }

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Edited "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();

}

void  editPriceG()
{
    string strSerialNumber,strName,strPrice,strShopName,strRating;
    cout << "Enter Serial Number of the Food to Edit Price:";
    int serialNumber;
    fflush(stdin);
    cin >> serialNumber;
    cout << "Enter New Price:";
    int newPrice;
    fflush(stdin);
    cin >> newPrice;

    char x =  '0'+serialNumber ;
    char txt[]= {'G','r','u','b','\\','\\',x,'.','t','x','t','\0'};

    ifstream in(txt);
    if(!in)
        int KC = 0;
    else
    {
        char str[100];

        in.getline(str,100,':');
        strSerialNumber = str;

        in.getline(str,100,':');
        strName=str;

        in.getline(str,100,':');
        strPrice=str;

        in.getline(str,100,':');
        strShopName=str;

        in.getline(str,100,':');
        strRating=str ;
    }

    ofstream out(txt);
    if(!out)
        int nigga = 0;
    else
    {
        out << x << ":";
        out << strName << ":\n";
        out << newPrice<< ":\n";
        out << "Grub:";
        out << strRating << ":\n";
        out.close();
    }

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Edited "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();

}
void editPriceKK()
{
    string strSerialNumber,strName,strPrice,strShopName,strRating;
    cout << "Enter Serial Number of the Food to Edit Price:";
    int serialNumber;
    fflush(stdin);
    cin >> serialNumber;
    cout << "Enter New Price:";
    fflush(stdin);
    int newPrice;
    cin >> newPrice;

    char x =  '0'+serialNumber ;
    char txt[]= {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','t','x','t','\0'};

    ifstream in(txt);
    if(!in)
        int KC = 0;
    else
    {
        char str[100];

        in.getline(str,100,':');
        strSerialNumber = str;

        in.getline(str,100,':');
        strName=str;

        in.getline(str,100,':');
        strPrice=str;

        in.getline(str,100,':');
        strShopName=str;

        in.getline(str,100,':');
        strRating=str ;
    }

    ofstream out(txt);
    if(!out)
        int nigga = 0;
    else
    {
        out << x << ":";
        out << strName << ":\n";
        out << newPrice<< ":\n";
        out << "Khan's Kitchen:";
        out << strRating << ":\n";
        out.close();
    }

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Edited "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();

}

void editPriceTK()
{
    string strSerialNumber,strName,strPrice,strShopName,strRating;
    cout << "Enter Serial Number of the Food to Edit Price:";
    int serialNumber;
    fflush(stdin);
    cin >> serialNumber;
    cout << "Enter New Price:";
    int newPrice;
    fflush(stdin);
    cin >> newPrice;

    char x =  '0'+serialNumber ;
    char txt[]= {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','t','x','t','\0'};

    ifstream in(txt);
    if(!in)
        int KC = 0;
    else
    {
        char str[100];

        in.getline(str,100,':');
        strSerialNumber = str;

        in.getline(str,100,':');
        strName=str;

        in.getline(str,100,':');
        strPrice=str;

        in.getline(str,100,':');
        strShopName=str;

        in.getline(str,100,':');
        strRating=str ;
    }

    ofstream out(txt);
    if(!out)
        int nigga = 0;
    else
    {
        out << x << ":";
        out << strName << ":\n";
        out << newPrice<< ":\n";
        out << "The Kitchen Cafe:";
        out << strRating << ":\n";
        out.close();
    }

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Edited "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();

}

void deleteItemsAB()
{
    cout << "Enter Serial Number: " ;
    int del;
    fflush(stdin);
    cin >> del;
    shopAB.DeleteItem(del);

    char y = '0'+del;
    char tt[] = {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',y,'.','t','x','t','\0'};
    remove(tt);
    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Deleted "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void deleteItemsG()
{
    cout << "Enter Serial Number: " ;
    int del;
    fflush(stdin);
    cin >> del;
    shopG.DeleteItem(del);

    char y = '0'+del;
    char tt[] = {'G','r','u','b','\\','\\',y,'.','t','x','t','\0'};
    remove(tt);
    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Deleted "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void deleteItemsKK()
{
    cout << "Enter Serial Number: " ;
    int del;
    fflush(stdin);
    cin >> del;
    shopKK.DeleteItem(del);

    char y = '0'+del;
    char tt[] = {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',y,'.','t','x','t','\0'};
    remove(tt);
    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Deleted "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void deleteItemsTK()
{
    cout << "Enter Serial Number: " ;
    int del;
    fflush(stdin);
    cin >> del;
    shopTK.DeleteItem(del);

    char y = '0'+del;
    char tt[] = {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',y,'.','t','x','t','\0'};
    remove(tt);
    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Deleted "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}


void addItemsAB()
{
    string fn, pri,rat ;
    cout << "Enter Food  Name:" ;
    fflush(stdin);
    getline(cin,fn);
    cout << "Enter Price:" ;
    fflush(stdin);
    getline(cin,pri);
    cout << "Enter Rating:" ;
    fflush(stdin);
    getline(cin,rat);

    int i = countAB+1;

    char x = '0'+ i ;
    char txt[] = {'A','m','e','r','i','c','a','n',' ','B','l','e','n','d','\\','\\',x,'.','t','x','t','\0'};

    ofstream out(txt);
    if(!out)
        int Bla = 0;
    else
    {
        out << x << ":\n";
        out << fn << ":\n";
        out << pri << ":\n";
        out << "American Blend:\n";
        out << rat << ":\n";
        out.close();
    }

    string strSerialNumber,strPrice,strShopName,strRating;

    strSerialNumber = x;
    stringstream SN(strSerialNumber);
    int serialNumber;
    SN >> serialNumber;

    strPrice= pri;
    stringstream P(strPrice);
    int price;
    P >> price;

    strRating= rat;
    stringstream R(strRating);
    float rating;
    R >> rating;

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Added "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    countAB=0,countG=0,countKK=0,countTK=0;
    system("cls");
    main();

}

void addItemsG()
{
    string fn, pri,rat ;
    cout << "Enter Food  Name:" ;
    fflush(stdin);
    getline(cin,fn);
    cout << "Enter Price:" ;
    fflush(stdin);
    getline(cin,pri);
    cout << "Enter Rating:" ;
    fflush(stdin);
    getline(cin,rat);

    int i = countG+1;
    char x = '0'+ i ;
    char txt[]= {'G','r','u','b','\\','\\',x,'.','t','x','t','\0'};

    ofstream out(txt);
    if(!out)
        int  lala = 0;
    else
    {
        out << x << ":\n";
        out << fn << ":\n";
        out << pri << ":\n";
        out << "Grub:\n";
        out << rat << ":\n";
        out.close();
    }

    string strSerialNumber,strPrice,strShopName,strRating;

    strSerialNumber = x;
    stringstream SN(strSerialNumber);
    int serialNumber;
    SN >> serialNumber;

    strPrice= pri;
    stringstream P(strPrice);
    int price;
    P >> price;

    strRating= rat;
    stringstream R(strRating);
    float rating;
    R >> rating;

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Added "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void addItemsKK()
{
    string fn, pri,rat ;
    cout << "Enter Food  Name:" ;
    fflush(stdin);
    getline(cin,fn);
    cout << "Enter Price:" ;
    fflush(stdin);
    getline(cin,pri);
    cout << "Enter Rating:" ;
    fflush(stdin);
    getline(cin,rat);

    int i = countKK+1;
    char x = '0'+ i ;
    char txt[]= {'K','h','a','n','\'','s',' ','K','i','t','c','h','e','n','\\','\\',x,'.','t','x','t','\0'};

    ofstream out(txt);
    if(!out)
        int  yoyo = 0;
    else
    {
        out << x << ":\n";
        out << fn << ":\n";
        out << pri << ":\n";
        out << "Khan's Kitchen:\n";
        out << rat << ":\n";
        out.close();
    }

    string strSerialNumber,strPrice,strShopName,strRating;

    strSerialNumber = x;
    stringstream SN(strSerialNumber);
    int serialNumber;
    SN >> serialNumber;

    strPrice= pri;
    stringstream P(strPrice);
    int price;
    P >> price;

    strRating= rat;
    stringstream R(strRating);
    float rating;
    R >> rating;

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Added "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void addItemsTK()
{
    string fn, pri,rat ;
    cout << "Enter Food  Name:" ;
    fflush(stdin);
    getline(cin,fn);
    cout << "Enter Price:" ;
    fflush(stdin);
    getline(cin,pri);
    cout << "Enter Rating:" ;
    fflush(stdin);
    getline(cin,rat);

    int i = countTK+1;
    char x = '0'+ i ;
    char txt[]= {'T','h','e',' ','K','i','t','c','h','e','n',' ','C','a','f','e','\\','\\',x,'.','t','x','t','\0'};

    ofstream out(txt);
    if(!out)
        int  yoyo = 0;
    else
    {
        out << x << ":\n";
        out << fn << ":\n";
        out << pri << ":\n";
        out << "The Kitchen Cafe:\n";
        out << rat << ":\n";
        out.close();
    }

    string strSerialNumber,strPrice,strShopName,strRating;

    strSerialNumber = x;
    stringstream SN(strSerialNumber);
    int serialNumber;
    SN >> serialNumber;

    strPrice= pri;
    stringstream P(strPrice);
    int price;
    P >> price;

    strRating= rat;
    stringstream R(strRating);
    float rating;
    R >> rating;

    system("cls");

    SortedFoodP.MakeEmpty();
    SortedFoodR.MakeEmpty();
    shopAB.MakeEmpty();
    shopG.MakeEmpty();
    shopKK.MakeEmpty();
    shopTK.MakeEmpty();

    cout << "Item Added "<<endl;
    cout << "Go back to login menu"<<endl;
    system("pause");

    system("cls");
    countAB=0,countG=0,countKK=0,countTK=0;
    main();
}

void addItems()
{
    cout << "\n==================================================================" << endl;
    cout << "Press 1 For Adding Food In American Blend's Food Menu: " << endl;
    cout << "Press 2 For Adding Food In Grub's Food Menu: " << endl;
    cout << "Press 3 For Adding Food In Khan's Kitchen's Food Menu: " << endl;
    cout << "Press 4 For Adding Food In The Kitchen Cafe's Food Menu: " << endl;
    cout << "Press 5 For Go Back To Admin menu: " << endl;
    cout << "======================================================================" << endl;
    cout << "You Choice: " ;
    int choice;
    fflush(stdin);
    cin >> choice;
    if(choice == 1)
    {
        system("cls");
        addItemsAB();
    }
    else if(choice == 2)
    {
        system("cls");
        addItemsG();
    }
    else if(choice == 3 )
    {
        system("cls");
        addItemsKK();
    }
    else if(choice == 4)
    {
        system("cls");
        addItemsTK();
    }
    else if(choice == 5)
    {
        system("cls");
        MainFunctionAdmin();
    }

    else
    {
       system("cls");
       addItems();
    }
}


void deleteItems()
{
    cout << "\n==========================================================================" << endl;
    cout << "Press 1 to Delete Food Item from Food Menu of American Blend" << endl;
    cout << "Press 2 to Delete Food Item from Food Menu of  Grub" << endl;
    cout << "Press 3 to Delete Food Item from Food Menu of  Khan's Kitchen" << endl;
    cout << "Press 4 to Delete Food Item from Food Menu of   The Kitchen Cafe" << endl;
    cout << "Press 5 For Go Back To Admin menu: " << endl;
    cout << "=============================================================================" << endl;
    cout << "You Choice: " ;
    int choice;
    fflush(stdin);
    cin >> choice;
    if(choice == 1)
    {
        system("cls");
        deleteItemsAB();
    }
    else if(choice == 2)
    {
        system("cls");
        deleteItemsG();
    }
    else if(choice == 3)
    {
        system("cls");
        deleteItemsKK();
    }
    else if(choice == 4)
    {
        system("cls");
        deleteItemsTK();
    }
    else if(choice == 5)
    {
        system("cls");
        MainFunctionAdmin();
    }
    else
    {
        system("cls");
        deleteItems();
    }
}

void editPrice()
{
    cout << "\n==================================================" << endl;
    cout << "Press 1 to Edit Food Price of American Blend" << endl;
    cout << "Press 2 to Edit Food Price  of  Grub" << endl;
    cout << "Press 3 to Edit Food Price  of  Khan's Kitchen" << endl;
    cout << "Press 4 to Edit Food Price of The Kitchen Cafe" << endl;
    cout << "Press 5 to Go Back to Admin Menu" << endl;
    cout << "==================================================" << endl;
    cout << "You Choice: " ;
    int choice;
    fflush(stdin);
    cin >> choice;
    if(choice == 1)
    {
        system("cls");
        editPriceAB();
    }
    else if(choice == 2)
    {
        system("cls");
        editPriceG();
    }
    else if(choice == 3)
    {
        system("cls");
        editPriceKK();
    }
    else if(choice == 4)
    {
        system("cls");
        editPriceTK();
    }
    else if(choice == 5)
    {
        system("cls");
        MainFunctionAdmin();
    }
    else
    {
        system("cls");
        editPrice();
    }
}

void MainFunctionAdmin()
{
    cout << "\n=======================================" << endl;
    cout << "Press 1 For Add Items" << endl;
    cout << "Press 2 For Delete Items" << endl;
    cout << "Press 3 For Edit Food Price" << endl;
    cout << "Press 4 For Go Back to LogIn Menu" << endl;
    cout << "Press 5 For Exit" << endl;
    cout << "==========================================" << endl;
    cout << "Enter Your Choice:" ;
    int cho;
    fflush(stdin);
    cin >> cho;
    switch(cho)
    {
    case 1:
        system("cls");
        addItems();
        break;
    case 2:
        system("cls");
        deleteItems();
        break;
    case 3:
        system("cls");
        editPrice();
        break;
    case 4:
        system("cls");
        MainFunction();
        break;
    case 5:
        break;
    default:
        system("cls");
        MainFunctionAdmin();
    }
}


void About_Programmer()
{
struct NSU Programmer[2] = {{"Kazi Anik Islam","North South University", 1631699642,"CSE" ,"ECE"}, {"Abrar Sultan Hud","North South University", 1631775042, "CSE" ,"ECE"}};
int x;

    system("cls");
    int i;
    for(i=0;i<2;i++)
{   printf("Programmer %d:",(i+1));
    cout<<"\nName of the Programmer   :"<< Programmer[i].name<< endl;
    cout<<"Name of the University   :"<< Programmer[i].University_name<< endl;
    cout<<"Student ID               :"<<Programmer[i].ID<< endl;
    cout<<"Name of the Major subject:"<<Programmer[i].course<< endl;
    cout<<"Name of the Department   :"<<Programmer[i].dept<< endl;
    printf ("\n \n");

}
  system("pause");
  system("cls");

    USER();
}

