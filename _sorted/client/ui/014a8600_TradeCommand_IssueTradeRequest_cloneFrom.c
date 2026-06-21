// addr: 0x014a8600
// name: TradeCommand_IssueTradeRequest_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_IssueTradeRequest_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_IssueTradeRequest_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_IssueTradeRequest and
                       copies subclass fields +0xc and +0x10 from this command. Class name is from
                       RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_IssueTradeRequest::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

