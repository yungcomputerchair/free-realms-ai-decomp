// addr: 0x01442740
// name: TradeCommand_cloneBaseFields
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_cloneBaseFields(void * this, void * dest) */

void __thiscall TradeCommand_cloneBaseFields(void *this,void *dest)

{
  int iVar1;
  
                    /* Clones base NetworkCommand/TradeCommand state into a destination command by
                       first cloning the NetworkCommand base then copying TradeCommand fields +4 and
                       +8. Class names are from RTTI. */
  NetworkCommand_cloneBaseFields(dest);
  iVar1 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &TradeCommand::RTTI_Type_Descriptor,0);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

