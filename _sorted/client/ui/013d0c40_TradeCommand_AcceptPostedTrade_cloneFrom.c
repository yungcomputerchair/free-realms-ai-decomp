// addr: 0x013d0c40
// name: TradeCommand_AcceptPostedTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptPostedTrade_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_AcceptPostedTrade_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_AcceptPostedTrade and
                       copies fields +0xc and +0x10 from this command to the destination. Class name
                       is from RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_AcceptPostedTrade::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

