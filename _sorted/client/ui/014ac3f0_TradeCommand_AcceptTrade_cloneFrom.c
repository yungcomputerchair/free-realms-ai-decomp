// addr: 0x014ac3f0
// name: TradeCommand_AcceptTrade_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AcceptTrade_cloneFrom(void * this, void * dest) */

void __thiscall TradeCommand_AcceptTrade_cloneFrom(void *this,void *dest)

{
  int iVar1;
  
                    /* Initializes/clones a NetworkCommand as TradeCommand_AcceptTrade and copies
                       the byte flag at +0xc. Class name is from RTTI. */
  TradeCommand_cloneBaseFields(this,dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_AcceptTrade::RTTI_Type_Descriptor,0);
  *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)((int)this + 0xc);
  return;
}

