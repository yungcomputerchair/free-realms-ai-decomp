// addr: 0x01454c30
// name: ZPLastActionQueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPLastActionQueryNode_serialize(int * this_obj, int serializer) */

void __thiscall ZPLastActionQueryNode_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps ZPLastActionQueryNode, delegating to its node serializer and
                       emitting start/end text. The start string names ZPLastActionQueryNode; the
                       end string has a capitalization typo. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ZPLastActionQueryNode\n");
  LastActionQueryNode_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending LastActionQuerynode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

