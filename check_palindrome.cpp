
bool palindrome(int x) {
    if(x<0)
    {
        cout<<"false";
    }
    long long rev=0;
    long long temp=x;

    while(temp>0)
    {
         int rem=temp%10;
         rev=rev*10+rem;
         temp=temp/10;
    }
    return(rev==x);
}
