// addr: 0x014f9840
// name: Order_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Order_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Order persistent component, initializes Sortable base state,
                       installs Order vftables, and allocates a PropertySet. */
  puStack_8 = &LAB_016b3081;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor(param_1 + 1);
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  *param_1 = Order::vftable;
  param_1[1] = Order::vftable;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4._0_1_ = 3;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = CONCAT31(local_4._1_3_,4);
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

