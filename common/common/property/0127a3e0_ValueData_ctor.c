// addr: 0x0127a3e0
// name: ValueData_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ValueData_ctor(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ValueData object by installing
                       PersistentBase/PersistentComponent/ValueData vtables, initializing flags, and
                       copying/converting the source value. Evidence: vtable names include
                       ValueData::vftable and calls the value-copy helper FUN_013010e0. */
  puStack_8 = &LAB_01664830;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 1;
  *param_1 = ValueData::vftable;
  FUN_013010e0(param_2);
  ExceptionList = local_c;
  return param_1;
}

