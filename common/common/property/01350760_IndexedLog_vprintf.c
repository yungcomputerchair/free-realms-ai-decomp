// addr: 0x01350760
// name: IndexedLog_vprintf
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void IndexedLog_vprintf(void * this, char * prefix, char * fmt, undefined4
   args) */

void __thiscall IndexedLog_vprintf(void *this,char *prefix,char *fmt,undefined4 args)

{
  undefined4 uVar1;
  int iVar2;
  FILE *_File;
  undefined4 local_1778;
  char local_1774 [1000];
  char local_138c [5000];
  uint local_4;
  
                    /* Formats a log filename as directory+prefix+index.log, opens it in append
                       mode, writes a vprintf-formatted message plus newline, flushes, and closes.
                       Evidence is the '%s%s_%d.log' format and fopen/vsnprintf/write calls. */
  local_4 = DAT_01b839d8 ^ (uint)&local_1778;
  local_1778 = args;
  DisplayActionManager_ensureSingleton();
  uVar1 = FUN_012d08f0();
  iVar2 = PathConfig_getDefaultBasePath();
  if (*(uint *)(iVar2 + 0x18) < 0x10) {
    iVar2 = iVar2 + 4;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
  }
  __snprintf(local_1774,1000,"%s%s_%d.log",iVar2,prefix,*(undefined4 *)((int)this + 100),uVar1);
  _File = _fopen(local_1774,"a+");
  if (_File != (FILE *)0x0) {
    __vsnprintf(local_138c,5000,fmt,local_1778);
    FUN_0110b7f3(local_138c,_File);
    _fputc(10,_File);
    _fflush(_File);
    _fclose(_File);
  }
  return;
}

