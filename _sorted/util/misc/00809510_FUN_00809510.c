// addr: 0x00809510
// name: FUN_00809510
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00809510(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper/thunk around FUN_00807420 that installs an exception frame, calls
                       it, then unwinds the frame. No semantic class evidence, so left unnamed. */
  puStack_8 = &LAB_01567b33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00807420(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0xffffffff;
  FUN_00807420();
  ExceptionList = local_c;
  return;
}

