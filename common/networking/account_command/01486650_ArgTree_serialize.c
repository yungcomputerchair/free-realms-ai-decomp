// addr: 0x01486650
// name: ArgTree_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArgTree_serialize(int * param_1, int param_2) */

void __thiscall ArgTree_serialize(void *this,int *param_1,int param_2)

{
  int *map;
  
                    /* Serializes/dumps ArgTree, writing several scalar members, a child object, a
                       collection at param_1+7, and a trailing flag. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting ArgTree\n");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  map = param_1;
  (**(code **)(*(int *)((int)this + 0x10) + 0x28))();
  STLMap_intToSerializablePointer_serialize_01486370
            (&stack0xfffffffc,(void *)((int)this + 0x1c),(int)map);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x28));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x2c));
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0x30));
  DebugStream_writeCString(param_1,"Ending ArgTree\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

