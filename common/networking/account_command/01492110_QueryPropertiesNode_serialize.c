// addr: 0x01492110
// name: QueryPropertiesNode_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QueryPropertiesNode_serialize(int * param_1, int param_2) */

void __thiscall QueryPropertiesNode_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps QueryPropertiesNode, including QueryNode base, Property and
                       Comparison fields, and a Value child object. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting QueryPropertiesNode:\n");
  QueryNode_serialize(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Property: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x1c));
  DebugStream_writeCString(param_1,"Comparison: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x20));
  DebugStream_writeCString(param_1,"Value:\n");
  (**(code **)(*(int *)((int)this + 0x24) + 0x28))(param_1);
  DebugStream_writeCString(param_1,"Ending QueryPropertiesNode\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

