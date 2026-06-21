// addr: 0x014a71a0
// name: TradeCommand_RemoveCardFromTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RemoveCardFromTrade_cloneFrom(void * this, void * src) */

void __thiscall TradeCommand_RemoveCardFromTrade_cloneFrom(void *this,void *src)

{
  int iVar1;
  
                    /* Clones a TradeCommand_RemoveCardFromTrade from another NetworkCommand using
                       RTTI dynamic_cast, copying base fields, InstanceID data, and scalar fields at
                       +0x1c/+0x20. RTTI names provide the class. */
  TradeCommand_cloneBaseFields(this,src);
  iVar1 = FUN_00d8d382(src,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_RemoveCardFromTrade::RTTI_Type_Descriptor,0);
  InstanceID_assignFrom((void *)(iVar1 + 0xc),(void *)((int)this + 0xc));
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)((int)this + 0x20);
  return;
}

