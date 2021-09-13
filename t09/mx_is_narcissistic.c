#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num){
    int rem, sum = 0, digit = 0;
    int original = num;
    if(num < 0)
        return false;
    else{
        while(num != 0 ){
            digit++;
            num = num/10;
        }
        num = original;
        while(num != 0){
            rem = num  % 10;
            sum = sum + mx_pow(rem, digit)
            num = num/10;
        }
        if(sum == original)
            return true;
        else
            return false;
    }
}