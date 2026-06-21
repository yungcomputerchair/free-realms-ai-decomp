// addr: 0x012d28c0
// name: ClientApplication_appendWaClientLog
// subsystem: common/common/client
// source (binary assert): common/common/client/ClientApplication.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ClientApplication_appendWaClientLog(int unused_, char * format,
   undefined4) */

void __cdecl ClientApplication_appendWaClientLog(int unused_,char *format,undefined4 param_3)

{
  uint uVar1;
  char ***_Filename;
  FILE *_File;
  undefined1 local_2c [4];
  char **local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Opens wa_client.log in append mode, writes the formatted message and a
                       newline, flushes, and closes the file. Evidence is the ClientApplication.cpp
                       file string and the wa_client.log literal. */
  puStack_8 = &LAB_01670148;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char **)((uint)local_28[0] & 0xffffff00);
  local_4 = 0;
  FUN_01241650("wa_client.log",0xd);
  _Filename = (char ***)local_28[0];
  if (local_14 < 0x10) {
    _Filename = local_28;
  }
  _File = _fopen((char *)_Filename,"a+");
  if (_File == (FILE *)0x0) {
    FUN_012f5a60(&DAT_0183aa04,"..\\common\\common\\client\\ClientApplication.cpp",0x203,uVar1);
  }
  FUN_00d8b416(_File,format,&param_3);
  _fputc(10,_File);
  _fflush(_File);
  _fclose(_File);
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  return;
}

