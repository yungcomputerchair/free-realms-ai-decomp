// addr: 0x01456080
// name: ZPActionNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPActionNode_serialize(int * this_obj, int serializer) */

void __thiscall ZPActionNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps ZPActionNode by delegating to its node serializer and
                       emitting start/end markers. The end string says 'Actionnode', but the start
                       string identifies ZPActionNode. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ZPActionNode\n");
  ActionNode_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending Actionnode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

