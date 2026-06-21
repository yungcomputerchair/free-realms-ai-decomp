// addr: 0x014a7bc0
// name: TradeCommand_PostedTradeError_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_PostedTradeError_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_PostedTradeError_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_PostedTradeError and
                       copies subclass field +0xc from this command. Class name is from RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_PostedTradeError::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

