#include "stdafx.h"
BITMAPINFO* lpBitsInfo = NULL;
BOOL LoadBmpFile(char* BmpFileName)
{

	FILE* fp;//文件指针
	if (NULL == (fp=fopen(BmpFileName,"rb")))
		return FALSE;

	BITMAPFILEHEADER bf;
    BITMAPINFOHEADER bi;

	fread(&bf,14,1,fp);
	fread(&bi,40,1,fp);

	int LineBytes = (bi.biWidth*bi.biBitCount + 31)/32*4;
	int ImgSize = LineBytes * bi.biHeight; //图像占的存储大小

	int NumColors;//使用到颜色的数量
    //判断一下是不是为0
	if(bi.biClrUsed != 0)//如果实际用到的颜色数量不为0
		NumColors = bi.biClrUsed;
	else{//如果为0
		switch(bi.biBitCount){
		case 1:
			NumColors = 2;//2值图像
			break;
		case 4:
			NumColors = 16;//16色
			break;
		case 8:
			NumColors = 256;//256色
			break;
		case 24:
			NumColors = 0;//24真彩，没有调色板
			break;
		}
	}

	int size = 40+NumColors*4+ImgSize;//信息头大小+调色板大小+位图数据大小

	//if (NULL == (lpBitsInfo = (LPBITMAPINFO) malloc(size)))//拿到指向数据的首地址指针分配内存空间
		//return FALSE;
    if (NULL == (lpBitsInfo = (BITMAPINFO*)malloc(size)))//拿到指向数据的首地址指针分配内存空间
		return FALSE;

	fseek(fp, 14,SEEK_SET);
	fread(lpBitsInfo,size,1,fp);
	fclose(fp);
	lpBitsInfo->bmiHeader.biClrUsed = NumColors;

	return TRUE;			
}


