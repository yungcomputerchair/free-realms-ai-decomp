// addr: 0x009a8e70
// name: InGamePurchaseManager_registerStoreBundlesDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InGamePurchaseManager_registerStoreBundlesDataSource(void * this) */

void __thiscall InGamePurchaseManager_registerStoreBundlesDataSource(void *this)

{
  undefined4 *puVar1;
  char *owner;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  char *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  owner = in_stack_00000004;
                    /* Finds or creates the StoreBundles in-game purchase datasource and wires it
                       into the in-game purchase registry/state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e43b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar3 = GuiDataSourceRegistry_findStoreBundles(DAT_01be1090,in_stack_00000004);
  if (pvVar3 != (void *)0x0) {
    FUN_0099ff70(uVar2);
    ExceptionList = local_c;
    return;
  }
  in_stack_00000004 = Mem_Alloc(0x12dc);
  local_4 = 0;
  if (in_stack_00000004 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = InGamePurchaseDataSource_StoreBundles_ctor(in_stack_00000004,owner);
  }
  local_4 = 0xffffffff;
  iVar4 = *(int *)((int)this + 0x60) + 1;
  in_stack_00000004 = pvVar3;
  if (*(int *)((int)this + 100) < iVar4) {
    FUN_00999da0(iVar4,0);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60) * 4);
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = pvVar3;
  }
  FUN_0099df50(&stack0x00000004);
  ExceptionList = local_c;
  return;
}

