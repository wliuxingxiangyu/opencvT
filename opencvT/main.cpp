#include<iostream>  
//#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  


using namespace cv;  


int main()  
{  
	// ����һ��ͼƬ��pic��  
	 Mat img=imread("E://pic.jpg");

	// ����һ����Ϊ "hz window"����  
	namedWindow("hz window",0);//0��ʾ���ڴ�С���̶����ɱ䡣  

	// �ڴ���"hz window"����ʾpic 
	imshow("hz window",img);  

	// �ȴ�60s�󴰿��Զ��ر�  
	waitKey(60000); //60m 
}  