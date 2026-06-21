// addr: 0x01488880
// name: ValueNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueNode_serialize(int * param_1, int param_2) */

void __thiscall ValueNode_serialize(void *this,int *param_1,int param_2)

{
  int *serializer;
  
                    /* Serializes/dumps ValueNode by emitting ExpressionTreeNode base,
                       property/node/play-area fields, and the contained Value object. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting ValueNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)serializer);
  DebugStream_writeCString(param_1,"Property: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"NodeProperty: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(param_1,"PlayArea: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Value: \n");
  (**(code **)(*(int *)((int)this + 0x10) + 0x28))(param_1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x24));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(param_1,"Ending ValueNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

