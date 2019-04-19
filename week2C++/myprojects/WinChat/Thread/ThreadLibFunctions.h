#ifndef THREADLIBFUNCTIONS_H
#define THREADLIBFUNCTIONS_H

#include <windows.h>
#include <map>

#include "ThreadException.h"

namespace ThreadLib
{
	typedef void(*ThreadFunc)(void*);
#ifdef WIN32                // windows95����
	typedef DWORD ThreadID;
	extern std::map< DWORD, HANDLE > g_handlemap;
#else                       // linux
	typedef pthread_t ThreadID;
#endif

	class DummyData //���⺯��ϵͳ
	{
	public:
		ThreadFunc m_func;
		void* m_data;
	};

	DWORD WINAPI DummyRun(void* p_data);

	inline ThreadID Create(ThreadFunc p_func, void* p_param)
	{
		ThreadID t;
		DummyData* data = new DummyData;
		data->m_func = p_func;
		data->m_data = p_param;
 
		HANDLE h;
		h = CreateThread(NULL, 0, DummyRun, data, 0, &t);
		if (h != 0)
		{
			g_handlemap[t] = h;//�����߳�ӳ��
		}

		if (t == 0)
		{
			delete data;

			throw Exception(CreationFailure);
		}
		return t;
	}

	inline ThreadID GetID() //����߳�ID
	{
		return GetCurrentThreadId();
	}


	inline void WaitForFinish(ThreadID p_thread) //�ȴ�p_thread�߳����
	{
		WaitForSingleObject(g_handlemap[p_thread], INFINITE);
		CloseHandle(g_handlemap[p_thread]);
		g_handlemap.erase(p_thread);
	}

	inline void Kill(ThreadID& p_thread) //ɱ���߳�
	{
		TerminateThread(g_handlemap[p_thread], 0);
		CloseHandle(g_handlemap[p_thread]);
		g_handlemap.erase(p_thread);
	}

	inline void YieldThread(int p_milliseconds = 1) //�ȴ�
	{
		Sleep(p_milliseconds);
	}




}


#endif