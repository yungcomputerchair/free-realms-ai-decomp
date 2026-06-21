// addr: 0x007c8ac0
// name: RandomPlayListIterator_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall RandomPlayListIterator_ctor(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RandomPlayListIterator, initializes the PlayListEntry list member,
                       clears counters, and rebuilds weighted entries. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01560c73;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_007c8340(param_2);
  *param_1 = RandomPlayListIterator::vftable;
  param_1[4] = SoeUtil::List<PlayListEntry*,-1>::vftable;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 1;
  RandomPlayListIterator_rebuildWeights(uVar1);
  ExceptionList = local_c;
  return param_1;
}

