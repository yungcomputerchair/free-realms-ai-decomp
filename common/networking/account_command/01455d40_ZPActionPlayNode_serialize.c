// addr: 0x01455d40
// name: ZPActionPlayNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPActionPlayNode_serialize(int * this_obj, int serializer) */

void __thiscall ZPActionPlayNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps ZPActionPlayNode by calling its node serializer between
                       start/end markers. The strings identify the class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ZPActionPlayNode\n");
  ActionPlayNode_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending ZPActionPlayNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

