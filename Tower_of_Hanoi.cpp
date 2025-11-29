#include <iostream>
using namespace std;
void Tower_of_Hanoi(int n, char source, char aux, char des)
{
    if(n==1)
    {
    cout<<"Move ring 1 from "<<source<<" to "<<des<<endl;
    return ;
    }
Tower_of_Hanoi(n-1,source,des,aux);
cout<<"Move ring "<<n<< " from "<<source<<" to "<<des<<endl;
Tower_of_Hanoi(n-1,aux,source,des);
}

int main(){
    int n;
    cout<<"Enter no. of rings : ";
    cin>>n;
    Tower_of_Hanoi( n, 'A', 'B', 'C');
return 0;
}
