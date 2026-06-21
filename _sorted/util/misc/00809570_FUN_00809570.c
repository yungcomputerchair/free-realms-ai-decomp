// addr: 0x00809570
// name: FUN_00809570
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00809570(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper/thunk around FUN_00807490 that installs an exception frame, calls
                       it, then unwinds the frame. No semantic class evidence, so left unnamed. */
  puStack_8 = &LAB_01567b63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00807490(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0xffffffff;
  FUN_00807490();
  ExceptionList = local_c;
  return;
}

