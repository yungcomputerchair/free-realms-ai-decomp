// addr: 0x013d56d0
// name: FUN_013d56d0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void appendInstanceIDWrapper(void * vec, uint hi_, uint lo_) */

void appendInstanceIDWrapper(void *vec,uint hi_,uint lo_)

{
  void *pvVar1;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Small wrapper constructs a temporary InstanceID, appends it via 012c3e50,
                       then destroys it. Owning class is not evident from this context, so no
                       specific name proposed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = InstanceID_ctor(local_1c,(int)vec,hi_);
  local_4 = 0;
  FUN_012c3e50(pvVar1);
  local_4 = 0xffffffff;
  InstanceID_dtor(local_1c);
  ExceptionList = local_c;
  return;
}

