#include<stdio.h>

/*
    Example of a Function

    Generate Fibonacci Series upto n terms using a function
    Output: 0 1 1 2 3 5 8 13  upto n terms

    author: ranjan-stha
*/

void generate_fibonacci_series(n_terms, f_term, s_term) {
    int third_term;
    for(int i=0; i<n_terms; i++){
        printf("%d\t", f_term);
        third_term = f_term + s_term;
        f_term = s_term;
        s_term = third_term;
    }
}

int main() {
    int n;

    int first_term = 0;
    int second_term = 1;

    printf("Enter how many terms ");
    scanf("%d", &n);
    // Call the function
    generate_fibonacci_series(n, first_term, second_term);

    return 0;
}