#include<iostream>  
//#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  


using namespace cv;  


int main()  
{  
	// 读入一张图片（pic）  
	 Mat img=imread("E://pic.jpg");

	// 创建一个名为 "hz window"窗口  
	namedWindow("hz window",0);//0表示窗口大小不固定，可变。  

	// 在窗口"hz window"中显示pic 
	imshow("hz window",img);  

	// 等待60s后窗口自动关闭  
	waitKey(60000); //60m 
}  