# include <stdio.h> 
// ŷ���� 
int main()
{
	float a,step,x;
	double y;
    int num,count;
    printf("��ֱ�����a��ֵ������������\n"); 
	scanf("%f %f %d",&a,&step,&num);
	printf("�������ŷ��������Ҫ����Ƴ�y�ĸ������꣺\n");
	y=a;
	printf("(%-6.3f,%-10.10lf)\n",x,y);
    for(x=step;count<num;x+=step)
	 {
	 	count++;
	 	y*=(1-step);
	 	printf("(%-6.3f,%-10.10lf)",x,y);
	 	printf("\n");
	 }
	return 0;
}
