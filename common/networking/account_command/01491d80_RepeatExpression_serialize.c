// addr: 0x01491d80
// name: RepeatExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RepeatExpression_serialize(int * this_obj, int serializer) */

void __thiscall RepeatExpression_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps RepeatExpression by delegating to the shared expression
                       serializer between start/end markers. The embedded strings identify
                       RepeatExpression. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting RepeatExpression\n");
  Expression_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending RepeatExpression\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

