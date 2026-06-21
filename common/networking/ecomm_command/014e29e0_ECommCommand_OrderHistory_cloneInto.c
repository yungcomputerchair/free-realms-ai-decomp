// addr: 0x014e29e0
// name: ECommCommand_OrderHistory_cloneInto
// subsystem: common/networking/ecomm_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_OrderHistory_cloneInto(void * this, void * target) */

void ECommCommand_OrderHistory_cloneInto(void *this,void *target)

{
  void *in_ECX;
  
                    /* Order-history cloneInto stub: delegates to ECommCommand cloneInto and
                       performs an RTTI check/cast of the target as ECommCommand_OrderHistory; no
                       order-history vector fields are copied in this decompilation. */
  ECommCommand_cloneInto(in_ECX,this);
  FUN_00d8d382(this,0,&NetworkCommand::RTTI_Type_Descriptor,
               &ECommCommand_OrderHistory::RTTI_Type_Descriptor,0);
  return;
}

