bool checkArmstrong(int n){
	int sum=0;
	int temp=n;

	while(temp!=0)
	{
		int digit=temp%10;
		int sum=sum+digit*digit*digit;
		temp=temp/10;
	}
	return (n==sum);
}
