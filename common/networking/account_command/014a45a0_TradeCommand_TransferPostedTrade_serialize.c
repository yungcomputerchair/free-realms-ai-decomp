// addr: 0x014a45a0
// name: TradeCommand_TransferPostedTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_TransferPostedTrade_serialize(int * param_1, void * param_2)
    */

void __thiscall TradeCommand_TransferPostedTrade_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes TradeCommand_TransferPostedTrade by writing the TradeCommand base,
                       an optional posted-trade object, and a vector/list of additional entries.
                       There are no marker strings in this function, but adjacent RTTI/vftable
                       functions identify the class. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  TradeCommand_serialize(this,param_1,(int)piVar2);
  piVar2 = *(int **)((int)this + 0xc);
  if (piVar2 == (int *)0x0) {
    Serializer_appendInteger(param_1,1);
  }
  else {
    bVar1 = Serializer_appendInteger(param_1,0);
    if (bVar1) {
      (**(code **)(*piVar2 + 0x28))(param_1);
    }
  }
  TradeCommand_serializableList_serialize_014a4360(&stack0x00000000,(int)this + 0x10);
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

