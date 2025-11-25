void sum(int,int);
int main()
{
	int a,b,c;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
	return 0;
}
    void sum(int a,int b)
    {
    	int x;
    	x=a+b;
    	return x;
	}
