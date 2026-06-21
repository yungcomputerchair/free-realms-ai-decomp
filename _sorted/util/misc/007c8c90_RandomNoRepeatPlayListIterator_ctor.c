// addr: 0x007c8c90
// name: RandomNoRepeatPlayListIterator_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall RandomNoRepeatPlayListIterator_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RandomNoRepeatPlayListIterator by first constructing
                       RandomPlayListIterator then replacing the vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01560cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  RandomPlayListIterator_ctor(param_2);
  *param_1 = RandomNoRepeatPlayListIterator::vftable;
  ExceptionList = local_c;
  return param_1;
}

