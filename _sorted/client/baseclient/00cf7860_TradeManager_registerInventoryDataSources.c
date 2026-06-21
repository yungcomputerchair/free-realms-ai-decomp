// addr: 0x00cf7860
// name: TradeManager_registerInventoryDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeManager_registerInventoryDataSources(void * this) */

void __thiscall TradeManager_registerInventoryDataSources(void *this)

{
  int iVar1;
  void *pvVar2;
  int in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates trade inventory datasources for BaseClient.Trade.MyItems and
                       BaseClient.Trade.PartnerItems and a TradeItemDataSource for individual trade
                       items. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016107b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cf6be0(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  FUN_00821b30(*(undefined4 *)(in_stack_00000004 + 0x4c),0);
  if (*(int *)((int)this + 0x14) == 0) {
    iVar1 = *(int *)(*(int *)this + 0x3e0);
    pvVar2 = Mem_Alloc(0x350);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = TradeItemDataSource_ctor(pvVar2,*(void **)this);
    }
    local_4 = 0xffffffff;
    FUN_00cf5e00(pvVar2);
    pvVar2 = Mem_Alloc(0x350);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = TradeItemDataSource_ctor(pvVar2,*(void **)this);
    }
    local_4 = 0xffffffff;
    FUN_00cf5e00(pvVar2);
    pvVar2 = Mem_Alloc(0x2e8);
    local_4 = 2;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = TradeInventoryDataSource_ctor
                         (pvVar2,*(void **)this,(void *)(iVar1 + 0x35748),
                          *(void **)((int)this + 0x10));
    }
    local_4 = 0xffffffff;
    FUN_00cf5e70(pvVar2);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)(*(int *)((int)this + 0x14) + 0x254) + 0x18))();
  ExceptionList = local_c;
  return;
}

