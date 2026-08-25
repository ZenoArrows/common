#pragma once

class IDirectoryIterator
{
public:
	IDirectoryIterator(const char * path, const char * match = NULL);
	virtual ~IDirectoryIterator();

	WIN32_FIND_DATAA *	Get(void)	{ return &m_result; }
	void		GetFullPath(char * out, UInt32 outLen);
	std::string	GetFullPath(void);
	DateTime	GetModifiedTime(void);

	void	Next(void);
	bool	Done(void);

private:
	IDirectoryIterator();	// undefined, disallow

	HANDLE				m_searchHandle;
	WIN32_FIND_DATAA	m_result;
	bool				m_done;

	char	m_path[MAX_PATH];
};
