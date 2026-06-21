// addr: 0x0080cae0
// name: FUN_0080cae0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0080cae0(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH destructor wrapper/thunk around FUN_0080aa50. No exact class evidence, so
                       left unnamed. */
  puStack_8 = &LAB_015685d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  Sky_LinearBlendController_Blend_TintedTexture_ctor(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

