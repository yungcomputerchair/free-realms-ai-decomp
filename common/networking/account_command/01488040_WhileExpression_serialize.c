// addr: 0x01488040
// name: WhileExpression_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void WhileExpression_serialize(int * this_obj, int serializer) */

void __thiscall WhileExpression_serialize(void *this,int *this_obj,int serializer)

{
  int *piVar1;
  
                    /* Serializes/dumps WhileExpression by delegating to the shared expression
                       serializer between start/end markers. The embedded strings identify
                       WhileExpression. */
  piVar1 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting WhileExpression\n");
  Expression_serialize(this,this_obj,piVar1);
  DebugStream_writeCString(this_obj,"Ending WhileExpression\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

