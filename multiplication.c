
//  #include<stdio.h>
//   int main(){
//     int num,res;
//     printf("enter a number for multiplication table:");
//     scanf("%d",&num);

//     for(int i=1;i<=10;i++){
//       res=num*i;
//       printf("%d X %d=%d\n",num,i,res);
//     }
    
//   return 0 ;
// }

// #include<stdio.h>

// int main() {
//     int num;
//     int sum = 0;
//     printf("Enter an odd number for sum: ");
//     scanf("%d", &num);

//     if (num % 2 == 1) {  
//         for (int i = 1; i <= num; i += 2) {  // Loop through all odd numbers up to 'num'
//             sum += i;
//         }
//         printf("Sum of odd numbers till %d is: %d\n", num, sum);
//     } 
//     else {
//         printf("Please enter an odd number for sum.\n");
//     }

//     return 0;
// }


// #include<stdio.h>

// int main() {
//     int num;
//     int facto=1;
//     printf("Enter an  number for factorial: ");
//     scanf("%d", &num);

//     if(num<0){
//       printf("please enter positive number");
//     }
//     if(num==0){
//       printf("1");
//     }
//     else{
//       for(int i=1;i<=num;i++){
//       facto=facto*i;
//       }
//       printf("%d",facto);

//       }
    
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char num[11]; // Array to store the number as a string (10 digits + null terminator)
//     int sum = 0;
    
//     printf("Enter an integer for digit summation: ");
//     scanf("%10s", num); // Reading the input as a string with a maximum of 10 characters

//     for (int i = 0; i < strlen(num); i++) {
//         sum += num[i] - '0'; // Convert each character to an integer and add to sum
//     }

//     printf("Sum of digits is %d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num1, num2, max, min, lcm;
//     printf("Enter num1 and num2: ");
//     scanf("%d %d", &num1, &num2);

//     if (num1 > num2) {
//         max = num1;
//         min = num2;
//     } else {
//         max = num2;
//         min = num1;
//     }

//     if (num1 == num2) {
//         lcm = num1;
//         printf("LCM is %d\n", lcm);
//         return 0; // Exit early as the LCM of equal numbers is the number itself
//     }

//     // Find the LCM using a while loop
//     int tempMax = max;
//     while (tempMax % min != 0) {
//         tempMax += max;
//     }
//     lcm = tempMax;

//     printf("LCM is %d\n", lcm);

//     return 0;
// }



//  #include<stdio.h>
//   int main(){
//     int num,tempnum;
//     int reverse=0;
//     printf("enter a number for reverse:");
//     scanf("%d",&num);

//     while(num!=0){
//         tempnum=num%10;
//        reverse=reverse*10+tempnum;
//         num=num/10;
//     }
//     printf("reverse is %d",reverse);


//   return 0 ;
// }




//  #include<stdio.h>
//   int main(){
//     int num;
//     printf("enter number till fabinoci series:");
//     scanf("%d",&num);
//     printf("0\n");
//     printf("1\n");
//     int prev=0;
//     int next=1;
//     while(prev+next<=num){
//         int temp=prev+next;
//         prev=next;
//         next=temp;
//         printf("%d\n",next);
//     }   


//   return 0 ;
// }


// #include <stdio.h>

// int main() {
//     int num, originalNum, temp;
//     int sum = 0;
//     printf("Enter a number for Armstrong check: ");
//     scanf("%d", &num);

//     originalNum = num;
//     // Store the original number

//     while (num != 0) {
//         temp = num % 10;
//         // Extract the last digit
//         num = num / 10; 
//         // Remove the last digit from the number
//         sum = sum + (temp * temp * temp); 
//         // Add the cube of the digit to sum
//     }

//     if (sum == originalNum) {
//         printf("The entered number %d is an Armstrong number\n", originalNum);
//     } else {
//         printf("The entered number %d is not an Armstrong number\n", originalNum);
//     }

//     return 0;
// }

//  #include<stdio.h>
//   int main(){
//     int num, originalNum, temp;
//     int reverse=0;
//     printf("Enter a number for Armstrong check: ");
//     scanf("%d", &num);
//     originalNum=num;
//     while(num!=0){
//         temp=num%10;
//         reverse=reverse*10+temp;
//         num=num/10;
//     }
//     if(originalNum==reverse){
//         printf("your enter number %d is palindrome number",originalNum);
//     }
//     else{
//         printf("your enter number %d is not palindrome number",originalNum);

//     }


//   return 0 ;
// }

// #include<stdio.h>

// int main() {
//     int rows;

//     printf("Enter number of rows for star print: ");
//     scanf("%d", &rows);
  
//     for(int i = 1; i <= rows; i++) {
//         for(int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
