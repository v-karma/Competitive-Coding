/*For each integer n in the interval a,b  (given as input) :

If 1=<n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else n<9 if  and it is an even number, then print "even".
Else if n<9  and it is an odd number, then print "odd".*/

#include<stdio.h>
int main() {
    
    int a, b;
    scanf("%d\n%d", &a, &b);

    const char* nums[] = {"one", "two", "three", "four", "five",
                          "six", "seven", "eight", "nine"};

    for(int number=a; number <= b; number++) {
        if (number < 10) {
            printf("%s\n", nums[number-1]);
        } else {
            printf("%s\n", ~number & 1 ? "even" : "odd");
        }
    }

    return 0;
}
