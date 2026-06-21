// addr: 0x014ab340
// name: TradeCommand_AddCardToTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddCardToTrade_cloneFrom(void * this, void * src) */

void __thiscall TradeCommand_AddCardToTrade_cloneFrom(void *this,void *src)

{
  int iVar1;
  
                    /* Clones a TradeCommand_AddCardToTrade after TradeCommand base-field copy,
                       using RTTI dynamic_cast and copying the card InstanceID plus field at +0x1c.
                        */
  TradeCommand_cloneBaseFields(this,src);
  iVar1 = FUN_00d8d382(src,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_AddCardToTrade::RTTI_Type_Descriptor,0);
  InstanceID_assignFrom((void *)(iVar1 + 0xc),(void *)((int)this + 0xc));
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  return;
}

