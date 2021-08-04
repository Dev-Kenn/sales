#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){

    string month[12]={"  January"," February","    March","    April","      May","     June","     July","   August","September","  October"," November"," December"};
    int list[2][12]={{0,1,2,3,4,5,6,7,8,9,10,11},{}};
    int highest, highestMonth;
    int lowest,lowestMonth;
    int n;
    int num;

    cout<<"    CJ Marketing Incoporated";
    cout<<"\n          Sales Report\n";
    
    for(int iterate=0;iterate<12;iterate++){
        num=list[0][iterate];
        cout<<"\n"<<month[num]<<": ";
        cin>>list[1][iterate];
    }
    if(list[1][0]<list[1][1]){
        highest=list[1][1];
        lowest=list[1][0];
        highestMonth=list[0][1];
        lowestMonth=list[0][1];    
    } else{
        highest=list[1][0];
        lowest=list[1][0];
        highestMonth=list[0][0];
        lowestMonth=list[0][1];
        
    } int iterate=12;
    for(int n=2; n<12;n++){
        if(list[1][n]>highest){
            highest=list[1][n];
            highestMonth=list[0][n];
        } else if(list[1][n]<lowest){
        lowest=list[1][n];
        lowestMonth=list[0][n];
        }
    }
    cout<<"\nThe highest month amount of sale is"<<month[highestMonth]<<" with "<<highest<<" sales\n";
    cout<<"\nThe lowest month amount of sale is"<<month[lowestMonth]<<" with "<<lowest<<" sales\n";
    
    getch();
    return 0;
}


