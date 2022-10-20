# include <stdio.h> 
// 欧拉法 
int main()
{
	float a,step,x;
	double y;
    int num,count;
    printf("请分别输入a的值，步长，步数\n"); 
	scanf("%f %f %d",&a,&step,&num);
	printf("以下输出欧拉法按照要求近似出y的各点坐标：\n");
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
