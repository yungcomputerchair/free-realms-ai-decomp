// addr: 0x0080b680
// name: FUN_0080b680
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0080b680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SkyDefinition segment with two subobjects initialized by
                       FUN_00808fe0 and stores duration/state at offset 0x120. No exact class
                       evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015681a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SkyDefinition_HorizonPair_copyCtor(param_2);
  local_4 = 0;
  SkyDefinition_HorizonPair_copyCtor(param_3);
  *(undefined4 *)(param_1 + 0x120) = param_4;
  ExceptionList = local_c;
  return param_1;
}

