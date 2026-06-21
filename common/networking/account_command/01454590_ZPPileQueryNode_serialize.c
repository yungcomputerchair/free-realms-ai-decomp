// addr: 0x01454590
// name: ZPPileQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPPileQueryNode_serialize(int * this_obj, int serializer) */

void __thiscall ZPPileQueryNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps ZPPileQueryNode by delegating to its base/node serializer
                       between start/end markers. The string literals identify ZPPileQueryNode. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ZPPileQueryNode\n");
  PileQueryNode_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending ZPPileQueryNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

