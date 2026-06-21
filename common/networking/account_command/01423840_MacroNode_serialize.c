// addr: 0x01423840
// name: MacroNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MacroNode_serialize(int * param_1, int param_2) */

void __thiscall MacroNode_serialize(void *this,int *param_1,int param_2)

{
  int *serializer;
  
                    /* Serializes/dumps MacroNode by emitting the ExpressionTreeNode base and the
                       Macro field. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting MacroNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)serializer);
  DebugStream_writeCString(param_1,"Macro: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Ending MacroNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

