#ifndef url_2017201973
#define url_2017201973
#include<string>
#include<fstream>
#include<vector>
#include"WebCrawlerGlobal.h"
using std::string;
using std::ifstream;
using std::vector;
class url
{
	private:
		string host;
		string urlname;
		string allhtml;
		int number;
	public:
		url();//Ĭ�Ϲ��캯��
		url(string host_,string url_,int id);//���캯��
		string gethost();//�����ҳ������
		string geturl();//�����ҳ����ַ
		int getnumber();//�����ҳ�ı��
		void changehtml(string strhtml);//����ҳ���ݴ���allhtml
		ifstream downloadurl();//������ַ
		void getitle();//�޸ı���
		void getotherurl(vector<string> &vec);//��õ�ǰ��ַ�����е�����,ʹ��vector<string>�洢���е��ַ���
};
#endif