int calcGCD(int n, int m){
    int gcd=0;
    for(int i=min(n,m);i>=1;i--)
    {
      if (n % i == 0 && m % i == 0) {
        return i;
        break;
      }
    }
    
}
