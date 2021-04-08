int rec(int a,int b)
{
int i=0;
while(i<8)
{ printf("%d mm* %d mm\n",a,b);
if(a>b)
return rec(a/2,b);
else
return rec(a,b/2);
}