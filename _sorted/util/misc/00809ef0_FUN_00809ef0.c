// addr: 0x00809ef0
// name: FUN_00809ef0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00809ef0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper/thunk around FUN_00809510 that installs an exception frame, calls
                       cleanup, then unwinds. No exact class evidence, so left unnamed. */
  puStack_8 = &LAB_01567db6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00809510(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0xffffffff;
  FUN_00809510();
  ExceptionList = local_c;
  return;
}

