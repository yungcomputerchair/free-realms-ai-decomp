// addr: 0x0148ede0
// name: ActionNode_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionNode_dump(void * this, void * debugStream) */

void __thiscall ActionNode_dump(void *this,void *debugStream)

{
  void *serializer;
  
                    /* Dumps an ActionNode after the ExpressionTreeNode base, including target
                       playarea, string value, an integer, and a flag. Evidence is 'Starting
                       ActionNode'/'Ending Actionnode' and field labels. */
  serializer = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting ActionNode\n");
  ExpressionTreeNode_serialize(this,debugStream,(int)serializer);
  DebugStream_writeCString(debugStream,"Target Playarea: ");
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(debugStream,"StringValue");
  Serializer_appendString(debugStream,(void *)((int)this + 0x14));
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x30));
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x34));
  DebugStream_writeCString(debugStream,"Ending Actionnode\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

