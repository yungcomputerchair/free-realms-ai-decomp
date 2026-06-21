// addr: 0x00b49ed0
// name: PlayerTitleManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayerTitleManager_registerDataSource(void * this) */

void __thiscall PlayerTitleManager_registerDataSource(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a PlayerTitleDataSource and stores/registers it through nearby
                       player-title manager helpers. Invoked while ClientPcData is deserialized,
                       consistent with player-title state setup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d90f4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00b49d60(uVar1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = PlayerTitleDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00b49920(pvVar2);
  ExceptionList = local_c;
  return;
}

