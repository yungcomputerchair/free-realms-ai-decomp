// addr: 0x014ab3f0
// name: TradeCommand_AddCardToTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddCardToTrade_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_AddCardToTrade_serialize(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Serializes TradeCommand_AddCardToTrade with add-card archetype/instance ids
                       and origin account id. Evidence is the class marker and field-label strings.
                        */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_AddCardToTrade\n");
  TradeCommand_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"AddCardID archetype: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"AddCardID instance: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(param_1,"OriginAccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Ending TradeCommand_AddCardToTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

