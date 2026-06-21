// addr: 0x00909270
// name: FUN_00909270
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FUN_00909270(int arg_) */

int __fastcall FUN_00909270(int arg_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Wrapper around FUN_008bf040 under an exception frame that returns its input
                       argument. No class or uploader evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158b788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008bf040(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = local_c;
  return arg_;
}

