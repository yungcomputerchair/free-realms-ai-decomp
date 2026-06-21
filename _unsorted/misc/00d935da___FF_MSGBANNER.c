// addr: 0x00d935da
// name: __FF_MSGBANNER
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_01b83a08 != 1) {
      return;
    }
  }
  FUN_00d9341a(0xfc);
  FUN_00d9341a(0xff);
  return;
}

