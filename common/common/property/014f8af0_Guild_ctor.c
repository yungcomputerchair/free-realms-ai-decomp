// addr: 0x014f8af0
// name: Guild_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Guild_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Guild persistent component, initializes Sortable base state, and
                       allocates a PropertySet. */
  puStack_8 = &LAB_016b2f07;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor(param_1 + 1);
  *param_1 = Guild::vftable;
  param_1[1] = Guild::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4._0_1_ = 4;
  FUN_005258fb(uVar1);
  local_4._0_1_ = 5;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  pvVar2 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = PropertySet_ctor(pvVar2);
  }
  param_1[0x13] = pvVar2;
  ExceptionList = local_c;
  return param_1;
}

