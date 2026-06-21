// addr: 0x014abc70
// name: TradeCommand_AcceptTradeRequest_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptTradeRequest_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_AcceptTradeRequest_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_AcceptTradeRequest and
                       copies subclass fields +0xc and +0x10. Class name is from RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_AcceptTradeRequest::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

