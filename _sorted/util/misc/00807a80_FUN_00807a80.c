// addr: 0x00807a80
// name: FUN_00807a80
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00807a80(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH wrapper/thunk around FUN_00807380 that installs an exception frame, calls
                       cleanup, then unwinds. No exact class evidence, so left unnamed. */
  puStack_8 = &LAB_015677a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  SkyDefinition_TintedTexturePair_dtor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0xffffffff;
  SkyDefinition_TintedTexturePair_dtor();
  ExceptionList = local_c;
  return;
}

