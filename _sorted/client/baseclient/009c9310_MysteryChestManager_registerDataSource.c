// addr: 0x009c9310
// name: MysteryChestManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MysteryChestManager_registerDataSource(void * this) */

void __thiscall MysteryChestManager_registerDataSource(void *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a MysteryChestDataSource and stores/registers it via nearby
                       mystery-chest manager helpers during client asset/display initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a358c;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_009c86a0(uVar2);
  local_4 = 0;
  pvVar3 = Mem_Alloc(0x260);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = MysteryChestDataSource_ctor
                       (pvVar3,"BaseClient.MysteryChest",in_stack_00000004,(void *)((int)this + 4));
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  FUN_009c7070(pvVar3);
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0x40) = DAT_01be5c00;
  *(undefined4 *)((int)this + 0x44) = DAT_01be5c04;
  FUN_009c8720();
  local_4 = CONCAT31(local_4._1_3_,3);
  for (iVar1 = *(int *)(*(int *)(*(int *)this + 500) + 0x1b5c);
      (iVar1 != 0 && (*(int *)(iVar1 + 0x10) != -0x1579d92f)); iVar1 = *(int *)(iVar1 + 0x14)) {
  }
  uVar4 = FUN_00d83c90();
  *(undefined4 *)((int)this + 0x3c) = uVar4;
  ExceptionList = local_c;
  return;
}

