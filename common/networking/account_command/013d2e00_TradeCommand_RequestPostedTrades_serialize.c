// addr: 0x013d2e00
// name: TradeCommand_RequestPostedTrades_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradeCommand_RequestPostedTrades_serialize(int * this_obj, int
   serializer) */

void __thiscall TradeCommand_RequestPostedTrades_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps TradeCommand_RequestPostedTrades, surrounding the
                       TradeCommand base serializer with start/end markers. The string literals
                       directly name the command. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting TradeCommand_RequestPostedTrades\n");
  TradeCommand_serialize(this,this_obj,(int)piVar1);
  DebugStream_writeCString(this_obj,"Ending TradeCommand_RequestPostedTrades\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

