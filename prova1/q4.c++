#include <stdio.h>
#include <iostream>
using namespace std;

main() {
    int *w = (int*)malloc(3*sizeof(int));

    for(int i = 0; i < 3; i++) {
        cout<<"Digite o valor ["<<i<<"]: ";
        cin>>w[i];
    }
    for(int i = 0; i < 3; i++) {
        cout<<w[i]<<endl;
    }
}