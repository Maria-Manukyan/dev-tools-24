//reverse arr[]
#include <iostream>
void reverse (char arr[],int n){
    while (arr[n] != '\0') {
        n++;
    }
    int i = 0;
    int j = n - 1;

    while (i < j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main() {
    int n;
    std::cout<<"n=";std::cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
    std::cout<<"arr["<<i<<"]=";std::cin>>arr[i];}
 reverse(arr,n);

    std::cout << "Reversed text: " << arr << std::endl;

    return 0;
}
