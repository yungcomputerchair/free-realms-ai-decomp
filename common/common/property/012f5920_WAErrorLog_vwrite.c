// addr: 0x012f5920
// name: WAErrorLog_vwrite
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void WAErrorLog_vwrite(char * path, undefined4 args) */

void __thiscall WAErrorLog_vwrite(void *this,char *path,undefined4 args)

{
  char cVar1;
  char *pcVar2;
  char ***_Filename;
  FILE *_File;
  char *unaff_EDI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c37c [4];
  char **local_c378 [4];
  undefined4 local_c368;
  uint local_c364;
  char local_c360 [50000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a varargs log line into a large stack buffer, appends it to the
                       resolved log file, writes a newline, flushes, and closes it. Evidence is
                       callers WAErrorLog_write/FUN_012f5da0/FUN_012f5dc0 plus fopen("a+"),
                       vsnprintf, fputc(10), fflush, and fclose. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016747cb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_c37c;
  ExceptionList = &local_c;
  local_c364 = 0xf;
  local_c368 = 0;
  local_c378[0] = (char **)((uint)local_c378[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_c37c,"",0);
  local_4 = 0;
  pcVar2 = this;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(this,(int)pcVar2 - ((int)this + 1));
  _Filename = (char ***)local_c378[0];
  if (local_c364 < 0x10) {
    _Filename = local_c378;
  }
  _File = _fopen((char *)_Filename,"a+");
  if (_File != (FILE *)0x0) {
    __vsnprintf(local_c360,50000,unaff_EDI,path);
    FUN_0110b7f3(local_c360,_File);
    _fputc(10,_File);
    _fflush(_File);
    _fclose(_File);
  }
  local_4 = 0xffffffff;
  if (0xf < local_c364) {
                    /* WARNING: Subroutine does not return */
    _free(local_c378[0]);
  }
  ExceptionList = local_c;
  return;
}

