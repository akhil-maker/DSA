#include<iostream>
#include<algorithm>
using namespace std;
//(nlogn), O(1) greedy, knapsack
int maxItems(int a[], int n, int k){
    sort(a, a+n);
    int count = 0, i=n-1, mxPrice = 0;
    while(i>=0 && count<k){
        mxPrice += a[i];
        count++;
        i--;
    }
    return mxPrice;
}
//fractional knapsack
struct Item{
    int value, weight;
    Item(int value, int weight){
        this->value = value;
        this->weight = weight;
    }
};
bool cmp(Item a, Item b){
    double r1 = (double)a.value/(double)a.weight;
    double r2 = (double)b.value/(double)b.weight;
    return r1>r2;
}
int maxPrice(Item arr[], int n, int W){
    sort(arr, arr+n, cmp);
    int currWt = 0;
    double finalValue = 0.0;
    for(int i=0; i<n; i++){
        if(currWt+arr[i].weight<=W){
            currWt += arr[i].weight;
            finalValue += arr[i].value;
        }
        else{
            int remain = W-currWt;
            finalValue += arr[i].value*((double)remain/(double)arr[i].weight);
            break;
        }
    }
    return finalValue;
}
int main(){
    int a[] = {20, 70, 100, 30, 200, 40, 10};
    cout<<maxItems(a, 7, 4);
    int price[] = {60, 120, 100};
    int wt[] = {10, 30, 20};
    Item arr[] = {{price[0], wt[0]}, {price[1], wt[1]}, {price[2], wt[2]}};
    cout<<maxPrice(arr, 3, 50);
}