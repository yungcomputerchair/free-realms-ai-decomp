// addr: 0x014a7280
// name: TradeCommand_RemoveCardFromTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RemoveCardFromTrade_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_RemoveCardFromTrade_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_RemoveCardFromTrade with remove-card
                       archetype/instance ids, owner account id, and error code. Evidence is the
                       class marker and those field-label strings. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_RemoveCardFromTrade\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"RemoveCardID archetype: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"RemoveCardID instance: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(param_1,"OwnerAccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Error Code: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Ending TradeCommand_RemoveCardFromTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

