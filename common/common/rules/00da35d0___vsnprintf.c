// addr: 0x00da35d0
// name: __vsnprintf
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int __vsnprintf(char * dest, uint count_, char * format, undefined4 args_) */

int __cdecl __vsnprintf(char *dest,uint count_,char *format,va_list args_)

{
  int iVar1;
  
                    /* Visual Studio runtime wrapper for __vsnprintf that calls __vsnprintf_l with a
                       null locale. */
  iVar1 = __vsnprintf_l(dest,count_,format,(_locale_t)0x0,args_);
  return iVar1;
}

