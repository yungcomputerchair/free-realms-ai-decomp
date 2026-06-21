// addr: 0x014aae80
// name: TradeCommand_AddPostedTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddPostedTrade_cloneFrom(void * this, void * src) */

void __thiscall TradeCommand_AddPostedTrade_cloneFrom(void *this,void *src)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clones a TradeCommand_AddPostedTrade by copying base TradeCommand fields,
                       RTTI-casting source command, allocating PostedTrade if needed, and copying
                       posted-trade data. RTTI names identify the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5f0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  TradeCommand_cloneBaseFields(this,src);
  iVar2 = FUN_00d8d382(src,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_AddPostedTrade::RTTI_Type_Descriptor,0,uVar1);
  if (*(int *)(iVar2 + 0xc) == 0) {
    pvVar3 = Mem_Alloc(0x108);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = PostedTrade_ctor(pvVar3);
    }
    local_4 = 0xffffffff;
    *(void **)(iVar2 + 0xc) = pvVar3;
  }
  FUN_013d29b0(*(undefined4 *)((int)this + 0xc));
  ExceptionList = local_c;
  return;
}

