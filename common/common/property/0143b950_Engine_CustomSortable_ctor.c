// addr: 0x0143b950
// name: Engine_CustomSortable_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_CustomSortable_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Engine::CustomSortable by installing its vftable, zeroing one
                       field, and constructing the embedded PropertySet. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697d23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Sortable_ctor(param_1);
  local_4 = 0;
  *param_1 = Engine::CustomSortable::vftable;
  param_1[1] = 0;
  PropertySet_ctor(param_1 + 2);
  ExceptionList = local_c;
  return param_1;
}

