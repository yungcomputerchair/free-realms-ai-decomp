// addr: 0x01454230
// name: CWSumExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWSumExpression_serialize(int * this_obj, int serializer) */

void __thiscall CWSumExpression_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps CWSumExpression, delegating to the SumExpression serializer
                       and surrounding it with start/end markers. The embedded strings name the
                       class. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting CWSumExpression\n");
  SumExpression_serialize(this,this_obj,(int)piVar1);
  DebugStream_writeCString(this_obj,"Ending CWSumExpression\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

