// addr: 0x0135da70
// name: FUN_0135da70
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_0135da70(void) */

void FUN_0135da70(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded wrapper that constructs or initializes a stack/local helper
                       through FUN_01357cd0 using the security cookie. No strings, RTTI, or named
                       callers identify the owning class. */
  puStack_8 = &LAB_0167e61b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_01357cd0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

