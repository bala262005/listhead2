bool isPalindrome(int x){
    if(x<0)
    {
      return false;
    }
    long int a=x;
    long int n=0;
    while(a!=0)
    {
        n=n*10+a%10;
        a/=10;
    }
    return x==n;
}
