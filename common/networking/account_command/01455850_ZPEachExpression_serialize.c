// addr: 0x01455850
// name: ZPEachExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ZPEachExpression_serialize(int * this_obj, int serializer) */

void __thiscall ZPEachExpression_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps ZPEachExpression by delegating to its expression serializer
                       between start/end markers. The string literals identify ZPEachExpression. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ZPEachExpression\n");
  EachExpression_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending ZPEachExpression\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

