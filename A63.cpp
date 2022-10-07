#include <iostream>
using namespace std;

int getsum(int);

int main()

{
    int n, res; //n numbers, res is result of sum
    
    cout << "I will find the sum for n numbers minus the min and the max. Enter n: " << endl;
    cin >> n;

    if(n<=0)
        exit(0);

    res = getsum(n);
    cout << "The summation result is " << res << endl;
    return(0);

}

int getsum(int num)
{
    int sum = 0, sumFinal = 0, min, max, N;
    int numero[N];
    
    for(int i=1; i<=num; i++)
    {
        cout << "Enter number: " << endl;
        cin >> numero[i];
        sum += numero[i];
        if(i==1)
            min = max = numero[i];
        if(min > numero[i])
            min = numero[i];
        if(max < numero[i])
            max = numero[i];
    }

    sumFinal = sum - min - max;
    return(sumFinal);
}