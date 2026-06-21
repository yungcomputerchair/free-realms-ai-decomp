// addr: 0x01326e00
// name: Action_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Action_dump(void * this, void * writer) */

void __thiscall Action_dump(void *this,void *writer)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  void *pvStack_4;
  
                    /* Appends a textual/debug dump for an Action, writing IDs, presentation/message
                       objects, inherit/value maps, and action name. */
  pvStack_4 = this;
  (**(code **)(*(int *)this + 8))(writer);
  DebugStream_writeCString(writer,"Starting Action\n");
  DebugStream_writeCString(writer,"Action ID: ");
  Serializer_appendInteger(writer,*(uint *)((int)this + 0x18));
  Serializer_appendInteger(writer,*(uint *)((int)this + 8));
  DebugStream_writeCString(writer,"Presentation Name: ");
  piVar1 = *(int **)((int)this + 0x1c);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(writer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(writer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(writer);
    }
  }
  DebugStream_writeCString(writer,"Message ID: ");
  (**(code **)(*(int *)((int)this + 0x20) + 0x28))(writer);
  DebugStream_writeCString(writer,"Inherits Map:\n");
  pvStack_4 = writer;
  iVar3 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar3);
  iVar3 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar3);
  iVar3 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar3);
  pvStack_4 = writer;
  DebugStream_writeCString(writer,"mValueMap: ");
  STLMap_intToSerializablePointer_serialize(&pvStack_4,(int)this + 100);
  DebugStream_writeCString(writer,"Action Name: ");
  Serializer_appendString(writer,(void *)((int)this + 0x48));
  DebugStream_writeCString(writer,"Ending Action\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

