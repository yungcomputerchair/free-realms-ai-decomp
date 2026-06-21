// addr: 0x0080ca30
// name: FUN_0080ca30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0080ca30(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH destructor wrapper/thunk around FUN_0080a790. No exact class evidence, so
                       left unnamed. */
  puStack_8 = &LAB_01568578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  Sky_LinearBlendController_Blend_Horizon_ctor(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

