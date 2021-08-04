#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){

    string month[12]={" JANUARY","FEBRUARY","    MARCH","    APRIL","      MAY","     JUNE","     JULY","   AUGUST","SEPTEMBER","  OCTOBER"," NOVEMBER"," DECEMBER"};
    int numlist[2][12]={{0,1,2,3,4,5,6,7,8,9,10,11},{}};
    int largest,largestMonth;
    int lowest,lowestMonth;
    int init;
    int num;
    cout<<"\t\tCJ MARKETING INCORPORATED"<<endl;
    cout<<"\n\t\t\tSALES REPORT\n"<<endl;
    cout<<"\t\tMONTH   :   SALES"<<endl;
    for(int iterate=0;iterate<12;iterate++){
        num=numlist[0][iterate];
        cout<<"\n\t\t"<<month[num]<<": ";
        cin>>numlist[1][iterate];
    }
    if(numlist[1][0]<numlist[1][1]){
        largest=numlist[1][1];
        lowest=numlist[1][0];
        largestMonth=numlist[0][1];
        lowestMonth=numlist[0][1];
    } else{
        largest=numlist[1][0];
        lowest=numlist[1][0];
        largestMonth=numlist[0][0];
        lowestMonth=numlist[0][1];
    } int iterate=12;
    for(int init=2; init<12;init++){
        if(numlist[1][init]>largest){
            largest=numlist[1][init];
            largestMonth=numlist[0][init];
        } else if(numlist[1][init]<lowest){
        lowest=numlist[1][init];
        lowestMonth=numlist[0][init];
        }
    }
    cout<<"\n\tTHE LARGEST MONTH OF SALE IS "<<month[largestMonth]<<" WHICH HAD "<<largest<<" SALES\n";
     cout<<"\n\tTHE LOWEST MONTH OF SALE IS "<<month[lowestMonth]<<" WHICH HAD "<<lowest<<" SALES\n";
    getch();
    return 0;
}

