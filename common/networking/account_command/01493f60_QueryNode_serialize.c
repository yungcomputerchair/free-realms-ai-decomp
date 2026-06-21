// addr: 0x01493f60
// name: QueryNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QueryNode_serialize(int * param_1, void * param_2) */

void __thiscall QueryNode_serialize(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Serializes a QueryNode wrapper, including start/end markers, the
                       ExpressionTreeNode base state, and the PropKeyValueMap. Evidence is the
                       embedded strings 'Starting QueryNode', 'PropKeyValueMap:', and 'Ending
                       QueryNode'. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting QueryNode\n");
  ExpressionTreeNode_serialize(this,param_1,(int)serializer);
  DebugStream_writeCString(param_1,"PropKeyValueMap: \n");
  STLMap_intToSerializablePointer_serialize_01493eb0
            (&stack0x00000000,(void *)((int)this + 0x10),(int)serializer);
  DebugStream_writeCString(param_1,"Ending QueryNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

