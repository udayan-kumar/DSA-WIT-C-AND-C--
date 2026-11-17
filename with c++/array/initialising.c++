#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;

    //cin>>n;
    scanf("%d", &n);

    int a[n];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    cout<< sizeof(a);
    printf("\n%d", a[0]);
    printf("\n%d\n", sizeof(a));

    for(int i = 0; i<5; i++){
        cout <<a[i] << " " ;
    }

    cout<<endl;

    for(int i = 0; i<5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(int ele : a){
        cout<< ele << " ";
    }

    return 0;
}