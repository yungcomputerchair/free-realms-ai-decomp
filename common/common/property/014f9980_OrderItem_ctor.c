// addr: 0x014f9980
// name: OrderItem_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall OrderItem_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an OrderItem persistent component, initializes Sortable base
                       state, installs OrderItem vftables, and allocates a PropertySet. */
  puStack_8 = &LAB_016b30f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor(param_1 + 1);
  local_4._0_1_ = 2;
  *param_1 = OrderItem::vftable;
  param_1[1] = OrderItem::vftable;
  param_1[2] = 0;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  param_1[2] = pvVar1;
  ExceptionList = local_c;
  return param_1;
}

