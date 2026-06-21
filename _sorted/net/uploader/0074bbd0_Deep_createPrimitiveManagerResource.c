// addr: 0x0074bbd0
// name: Deep_createPrimitiveManagerResource
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
Deep_createPrimitiveManagerResource(void *param_1,undefined4 param_2,char param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates a primitive/resource object and optionally a Deep_PrimitiveManager,
                       then wraps it with a manager helper. Evidence is the named
                       Deep_PrimitiveManager_ctor callee and Deep subsystem callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01554046;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1f0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_3 == '\0') {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = Mem_Alloc(0x3a8);
      local_4._0_1_ = 1;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
        local_4 = (uint)local_4._1_3_ << 8;
      }
      else {
        pvVar1 = Deep_PrimitiveManager_ctor(pvVar1,param_1);
        local_4 = (uint)local_4._1_3_ << 8;
      }
    }
    uVar2 = FUN_0074ba50(*(undefined4 *)((int)param_1 + 0x1d0),param_2,pvVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

