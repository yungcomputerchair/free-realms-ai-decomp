// addr: 0x01453690
// name: CWValueNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWValueNode_serialize(int * this_obj, int serializer) */

void __thiscall CWValueNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps CWValueNode, wrapping the ValueNode serializer with
                       CWValueNode start/end markers. The string literals name the wrapper class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting CWValueNode\n");
  ValueNode_serialize(this,this_obj,(int)piVar1);
  DebugStream_writeCString(this_obj,"Ending CWValueNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

