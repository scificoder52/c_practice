
//  #include<stdio.h>
//  void sum();


//   int main(){
//    sum(1,2,3,4);
//   return 0 ;
//   }
//   void sum(int a,int b,int c,int d){
//     int sum= a+b+c+d;
//     printf("%d",sum);
//   }





//  #include<stdio.h>
//  int square();

//   int main(){
//     int num;
//    printf("%d",square(num));
//   return 0 ;
//   }
//   int square(int num){
//     printf("enter a number for sqaure:");
//     scanf("%d",&num);
//     return num*num;
//   }


// #include<stdio.h>
// #include<time.h>
//  void print_date();


// int main(){
//     print_date();

//   return 0;
// }

//   void print_date(){
//     time_t current_time;
//     time(&current_time);
//     char *date_string=asctime(localtime(&current_time));
//     printf("Current date is:%s",date_string);
//   }


// #include <stdio.h>

// float max(float a, float b);

// int main() {
//     float a, b;
//     printf("Enter a and b: ");
//     scanf("%f %f", &a, &b);
//     printf("Max value is: %f\n", max(a, b));
//     return 0;
// }

// float max(float a, float b) {
//     if (a > b) {
//         printf("%f is greater than %f\n", a, b);
//         return a;
//     } else if (a == b) {
//         printf("%f is equal to %f\n", a, b);
//         return a; // or return b, both are the same
//     } else {
//         printf("%f is greater than %f\n", b, a);
//         return b;
//     }
// }




//  #include<stdio.h>



//  int fibonacci(int pos);
//   int main(){
//     int terms;
//         printf(" enter the no of terms\n");
//         scanf("%d",&terms);
//         for(int i=0;i<terms;i++){
//         printf("%d",fibonacci(i));
//         }
//   return 0 ;
// }
// int fibonacci(int pos){
//     if (pos<=1){
//         return pos;
//     }
//     int current=fibonacci(pos-1)+fibonacci(pos-2);
//     return current;

// }



#include <stdio.h>

// Function prototype with parameter types
int reverse_num(int num, int rev);

int main() {
    int num, rev = 0;
    
    // Getting the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculating the reverse of the number
    int reversed = reverse_num(num, rev);
    
    // Checking if the number is a palindrome
    if (num == reversed) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    
    return 0;
}

// Recursive function to reverse the number
int reverse_num(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse_num(num / 10, rev * 10 + num % 10);
}
