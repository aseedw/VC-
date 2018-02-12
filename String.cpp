// http://www.cnblogs.com/lazycoding/archive/2012/03/11/2389820.html
// https://www.codeproject.com/Articles/76252/What-are-TCHAR-WCHAR-LPSTR-LPWSTR-LPCTSTR-etc
// what are TCHAR,WCHAR,LPSTR,LPWSTR,LPCTSTR

// 1 character 1 Byte -> ANSI 
// 1 character 2 Byte -> Unicode

// In VC++ char for ANSI, wchar_t for Unicode

//===========================================================

// usual usage for ANSI

char cResponse; // 'Y' or 'N'
char sUsername[64];
// str* functions

// usual usage for unicode
wchar_t cResponse; // 'Y' or 'N'
wchar_t sUsername[64];
// wcs* functions

// more convenient
#include<TCHAR.H> // Implicit or explicit include
TCHAR cResponse; // 'Y' or 'N'
TCHAR sUsername[64];
// _tcs* functions

// if complied with Unicode, convert TCHAR to wchar_t automatically
// if complied with ANSI/MBCS, convert TCHAR to char automatically

//===========================================================

// strcpy, strlen, strcat (or strcpy_s, strlen_s, strcat_s) and wcscpy, wcslen, wcscat (or safer type) -> _tcscpy, _tcslen, _tcscat

"ANSI String"; // ANSI
L"Unicode String"; // Unicode

_T("Either string, depending on compilation"); // ANSI or Unicode
// or use TEXT macro, if you need more readability.
