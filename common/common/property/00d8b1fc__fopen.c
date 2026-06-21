// addr: 0x00d8b1fc
// name: _fopen
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* Preserves the existing identified symbol _fopen; code initializes or operates
                       on that class and is queued for sidecar write-back. */
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

