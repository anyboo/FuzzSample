// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32PROJECT1_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32PROJECT1_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32PROJECT1_EXPORTS
#define WIN32PROJECT1_API __declspec(dllexport)
#else
#define WIN32PROJECT1_API __declspec(dllimport)
#endif

// �����Ǵ� Win32Project1.dll ������
class WIN32PROJECT1_API CWin32Project1 {
public:
	CWin32Project1(void);
	// TODO:  �ڴ�������ķ�����
};

extern WIN32PROJECT1_API int nWin32Project1;

WIN32PROJECT1_API int fnWin32Project1(void);

WIN32PROJECT1_API void listFiles(std::string& dir);
