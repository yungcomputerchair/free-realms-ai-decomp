// addr: 0x007c8df0
// name: SequentialPlayListIterator_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall SequentialPlayListIterator_ctor(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SequentialPlayListIterator, initializes its PlayListEntry list,
                       clears counters, and appends playlist entries in sequence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01560d63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007c8340(param_2);
  *param_1 = SequentialPlayListIterator::vftable;
  param_1[3] = SoeUtil::List<PlayListEntry*,-1>::vftable;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 1;
  if (param_1[2] != 0) {
    for (iVar1 = *(int *)(param_1[2] + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      param_2 = iVar1;
      FUN_007c8140(&param_2);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

