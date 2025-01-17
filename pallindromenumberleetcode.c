bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int temp=x;
    long long int rev=0;
    int rem;
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(temp==rev){
        return true;
    }
    else 
    return false;
}
