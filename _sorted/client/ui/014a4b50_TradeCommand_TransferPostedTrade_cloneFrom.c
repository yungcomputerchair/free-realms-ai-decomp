// addr: 0x014a4b50
// name: TradeCommand_TransferPostedTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_TransferPostedTrade_cloneFrom(void * this, void * src) */

void __thiscall TradeCommand_TransferPostedTrade_cloneFrom(void *this,void *src)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_1c;
  undefined4 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clones a TradeCommand_TransferPostedTrade by copying base fields,
                       ensuring/copying the primary PostedTrade, then deep-copying each PostedTrade
                       pointer in a vector. RTTI names identify the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a4a76;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  TradeCommand_cloneBaseFields(this,src);
  iVar3 = FUN_00d8d382(src,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_TransferPostedTrade::RTTI_Type_Descriptor,0,uVar2);
  if (*(int *)(iVar3 + 0xc) == 0) {
    pvVar4 = Mem_Alloc(0x108);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = PostedTrade_ctor(pvVar4);
    }
    local_4 = 0xffffffff;
    *(void **)(iVar3 + 0xc) = pvVar4;
  }
  FUN_013d29b0(*(undefined4 *)((int)this + 0xc));
  puVar6 = *(undefined4 **)((int)this + 0x18);
  local_18 = puVar6;
  if (puVar6 < *(undefined4 **)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  puVar5 = *(undefined4 **)((int)this + 0x14);
  if (*(undefined4 **)((int)this + 0x18) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar6) break;
    local_1c = Mem_Alloc(0x108);
    local_4 = 1;
    if (local_1c == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = PostedTrade_ctor(local_1c);
    }
    local_4 = 0xffffffff;
    local_1c = pvVar4;
    if (this == (void *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x18) <= puVar5) {
      FUN_00d83c2d();
    }
    FUN_013d29b0(*puVar5);
    uVar2 = *(uint *)(iVar3 + 0x14);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)(iVar3 + 0x1c) - uVar2) >> 2) <=
        (uint)((int)(*(int *)(iVar3 + 0x18) - uVar2) >> 2))) {
      uVar1 = *(uint *)(iVar3 + 0x18);
      if (uVar1 < uVar2) {
        FUN_00d83c2d();
      }
      FUN_012bffa0(local_14,iVar3 + 0x10,uVar1,&local_1c);
    }
    else {
      puVar6 = *(undefined4 **)(iVar3 + 0x18);
      *puVar6 = pvVar4;
      *(undefined4 **)(iVar3 + 0x18) = puVar6 + 1;
    }
    if (*(undefined4 **)((int)this + 0x18) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
    puVar6 = local_18;
  }
  ExceptionList = local_c;
  return;
}

