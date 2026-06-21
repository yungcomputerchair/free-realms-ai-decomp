// addr: 0x01453920
// name: CWTargetQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWTargetQueryNode_serialize(int * this_obj, int serializer) */

void __thiscall CWTargetQueryNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps CWTargetQueryNode by delegating to the TargetQueryNode
                       serializer between start/end markers. The strings directly identify the
                       class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting CWTargetQueryNode\n");
  TargetQueryNode_serialize(this,this_obj,(int)piVar1);
  DebugStream_writeCString(this_obj,"Ending CWTargetQueryNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

