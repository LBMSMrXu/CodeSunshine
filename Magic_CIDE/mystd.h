#ifndef MYSTD_H_
#define MYSTD_H_

#include <string>
#include <windows.h>
using namespace std;
/* 
string chooseFile()
{
	CString gReadFilePathName;  
	CString filename;
	string fileName;
    CFileDialog fileDlg(true, _T("mp3"), _T("*.mp3"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, _T("All File (*.*)|*.*||"), NULL);  
    if (fileDlg.DoModal() == IDOK)    //�����Ի���  
    {  
        gReadFilePathName = fileDlg.GetPathName();//�õ��������ļ�����Ŀ¼����չ��  
        //GetDlgItem(IDC_EDIT1)->SetWindowText(gReadFilePathName);//��·����ʾ  
        filename = fileDlg.GetFileName();
        fileName = gReadFilePathName.GetBuffer(NULL);
        return fileName;
    }
    
    return 0;
}
*?
#endif