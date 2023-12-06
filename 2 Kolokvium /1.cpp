// Сакаме да ги истражиме цените на одредени производи во продавница и да видиме кои од нив се над просечната цена, а кои се под просечната цена.
//
// За да го постигнеме ова, влезот е М, бројот на производите, и потоа М производи, претставувајќи ја нивната цена. 
// Вашата задача е да го пресметате просекот на сите производи, а потоа да ги замените оние кои се под просекот со вредност О и оние над просекот (или еднакви) со вредност 1.
//
// На излез испечатете ја просечната цена, како и трансформираната низата (види тест примери)

#include<iostream>
using namespace std;

int main() {
    int n, sum=0;
    float prosek;
    int array[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>array[i];

    }

    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    prosek = sum / n;

    for(int i = 0; i < n; ++i){
        if(array[i]>=prosek)
            array[i]=1;
        else if(array[i]<prosek)
            array[i]=0;
    }

    cout<<prosek<<endl;
    for(int i = 0; i < n; ++i) {
        cout<<array[i]<<" ";
    }

    return 0;
}
