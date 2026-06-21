// addr: 0x013d41f0
// name: CollectionItem_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionItem_dump(int * param_1, void * param_2) */

void __thiscall CollectionItem_dump(void *this,int *param_1,void *param_2)

{
  int *vector;
  
                    /* Emits a textual/debug dump for CollectionItem, including archetype id,
                       desired quantity, foil flag, instances, and non-tradable instances. */
  vector = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting CollectionItem\n");
  DebugStream_writeCString(param_1,"ArchetypeID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  DebugStream_writeCString(param_1,"Quantity desired: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Foils:\n");
  Serializer_appendInteger(param_1,(uint)*(byte *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"Instances:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x10),vector);
  DebugStream_writeCString(param_1,"NonTradableInstances:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 0x20),vector);
  DebugStream_writeCString(param_1,"Ending CollectionItem\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

