// addr: 0x013d0780
// name: TradeCommand_CancelPostedTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_CancelPostedTrade_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_CancelPostedTrade_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_CancelPostedTrade and
                       copies the field at +0xc from this object into the destination command. Class
                       name is from RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_CancelPostedTrade::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

