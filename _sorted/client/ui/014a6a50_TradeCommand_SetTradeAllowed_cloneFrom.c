// addr: 0x014a6a50
// name: TradeCommand_SetTradeAllowed_cloneFrom
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_SetTradeAllowed_cloneFrom(void * this, void * src) */

void __thiscall TradeCommand_SetTradeAllowed_cloneFrom(void *this,void *src)

{
  int iVar1;
  int iVar2;
  undefined1 local_8 [8];
  
                    /* Clones a TradeCommand_SetTradeAllowed using RTTI dynamic_cast, base trade
                       command copy, and map/tree copy of the allowed-state data at +0xc. RTTI names
                       provide the class. */
  TradeCommand_cloneBaseFields(this,src);
  iVar1 = FUN_00d8d382(src,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand_SetTradeAllowed::RTTI_Type_Descriptor,0);
  iVar2 = iVar1 + 0xc;
  if (iVar2 != (int)this + 0xc) {
    FUN_0129c540(local_8,iVar2,**(undefined4 **)(iVar1 + 0x10),iVar2,*(undefined4 **)(iVar1 + 0x10))
    ;
    FUN_014a6610((int)this + 0xc);
  }
  return;
}

