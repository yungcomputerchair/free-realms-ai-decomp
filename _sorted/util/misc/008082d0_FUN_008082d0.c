// addr: 0x008082d0
// name: FUN_008082d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_008082d0(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes a linear blend controller segment from subobjects at
                       offsets 0x10 and 0x40 plus a duration/state at 0xa0, then returns the
                       provided value. No final class evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SkyDefinition_TintedTexturePair_ctor
            (param_1 + 0x10,param_1 + 0x40,*(undefined4 *)(param_1 + 0xa0));
  ExceptionList = local_c;
  return param_2;
}

