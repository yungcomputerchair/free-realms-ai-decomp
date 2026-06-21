// addr: 0x01434750
// name: FormatSpecificData_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FormatSpecificData_serialize(int * this, int serializer) */

void __thiscall FormatSpecificData_serialize(void *this,int serializer)

{
  int iVar1;
  int map;
  void *pvStack_4;
  
                    /* Serializes FormatSpecificData: property set, three inherits-map integer
                       vectors, and AI parameters. */
  pvStack_4 = this;
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString((void *)serializer,"Starting FormatSpecificData\n");
  DebugStream_writeCString((void *)serializer,"Property set:\n");
  map = serializer;
  (**(code **)(**(int **)((int)this + 8) + 0x28))();
  DebugStream_writeCString((void *)serializer,"Inherits Map:\n");
  pvStack_4 = (void *)serializer;
  iVar1 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar1);
  iVar1 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar1);
  iVar1 = IntToIntVectorMap_getOrCreate(&stack0xfffffff4);
  STLVector_int_serialize(&pvStack_4,iVar1);
  DebugStream_writeCString((void *)serializer,"AI Parameters:\n");
  pvStack_4 = (void *)serializer;
  STLMap_intToInt_serialize_014322d0(&pvStack_4,(void *)((int)this + 0x1c),map);
  DebugStream_writeCString((void *)serializer,"Ending FormatSpecificData\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

