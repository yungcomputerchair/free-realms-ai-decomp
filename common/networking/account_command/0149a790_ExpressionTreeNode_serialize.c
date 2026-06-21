// addr: 0x0149a790
// name: ExpressionTreeNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExpressionTreeNode_serialize(int * this_obj, int serializer) */

void __thiscall ExpressionTreeNode_serialize(void *this,int *this_obj,int serializer)

{
  int *map;
  
                    /* Serializes/dumps ExpressionTreeNode, including its NodeKeyValueMap, between
                       start/end markers. The strings directly identify ExpressionTreeNode and the
                       map member. */
  map = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting ExpressionTreeNode\n");
  DebugStream_writeCString(this_obj,"NodeKeyValueMap: \n");
  STLMap_intToSerializablePointer_serialize_0149a680
            (&stack0x00000000,(void *)((int)this + 4),(int)map);
  DebugStream_writeCString(this_obj,"Ending ExpressionTreeNode\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

