// addr: 0x014aaf20
// name: TradeCommand_AddPostedTrade_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_AddPostedTrade_serialize(int * param_1, void * param_2) */

void __thiscall TradeCommand_AddPostedTrade_serialize(void *this,int *param_1,void *param_2)

{
  bool bVar1;
  int *piVar2;
  
                    /* Serializes TradeCommand_AddPostedTrade by writing the TradeCommand base and
                       an optional posted trade object through its serialize vtable slot. Evidence
                       is the AddPostedTrade marker strings. */
  piVar2 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting TradeCommand_AddPostedTrade\n");
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
  DebugStream_writeCString(param_1,"Ending TradeCommand_AddPostedTrade\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

