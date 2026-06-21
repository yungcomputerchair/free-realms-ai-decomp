// addr: 0x01496c40
// name: MoveActionNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MoveActionNode_serialize(int * param_1, void * param_2) */

void __thiscall MoveActionNode_serialize(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Serializes a MoveActionNode with ExpressionTreeNode base data plus
                       move-to/from playarea, position, node property, and emit-event fields.
                       Evidence is the MoveActionNode start/end strings and field labels. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting MoveActionNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)serializer);
  DebugStream_writeCString(param_1,"MoveTo Playarea: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"MoveFrom Playarea: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(param_1,"MovePosition: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x18));
  DebugStream_writeCString(param_1,"mNodeProperty: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"mEmitEvent: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Ending MoveActionNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

