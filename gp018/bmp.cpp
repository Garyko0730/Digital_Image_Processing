#include "stdafx.h"
BITMAPINFO* lpBitsInfo = NULL;
BOOL LoadBmpFile(char* BmpFileName)
{

	FILE* fp;//�ļ�ָ��
	if (NULL == (fp=fopen(BmpFileName,"rb")))
		return FALSE;

	BITMAPFILEHEADER bf;
    BITMAPINFOHEADER bi;

	fread(&bf,14,1,fp);
	fread(&bi,40,1,fp);

	int LineBytes = (bi.biWidth*bi.biBitCount + 31)/32*4;
	int ImgSize = LineBytes * bi.biHeight; //ͼ��ռ�Ĵ洢��С

	int NumColors;//ʹ�õ���ɫ������
    //�ж�һ���ǲ���Ϊ0
	if(bi.biClrUsed != 0)//���ʵ���õ�����ɫ������Ϊ0
		NumColors = bi.biClrUsed;
	else{//���Ϊ0
		switch(bi.biBitCount){
		case 1:
			NumColors = 2;//2ֵͼ��
			break;
		case 4:
			NumColors = 16;//16ɫ
			break;
		case 8:
			NumColors = 256;//256ɫ
			break;
		case 24:
			NumColors = 0;//24��ʣ�û�е�ɫ��
			break;
		}
	}

	int size = 40+NumColors*4+ImgSize;//��Ϣͷ��С+��ɫ���С+λͼ���ݴ�С

	//if (NULL == (lpBitsInfo = (LPBITMAPINFO) malloc(size)))//�õ�ָ�����ݵ��׵�ַָ������ڴ�ռ�
		//return FALSE;
    if (NULL == (lpBitsInfo = (BITMAPINFO*)malloc(size)))//�õ�ָ�����ݵ��׵�ַָ������ڴ�ռ�
		return FALSE;

	fseek(fp, 14,SEEK_SET);
	fread(lpBitsInfo,size,1,fp);
	fclose(fp);
	lpBitsInfo->bmiHeader.biClrUsed = NumColors;

	return TRUE;			
}


