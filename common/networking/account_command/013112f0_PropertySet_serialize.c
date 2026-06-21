// addr: 0x013112f0
// name: PropertySet_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySet_serialize(int * this_obj, int serializer) */

void __thiscall PropertySet_serialize(void *this,int *this_obj,int serializer)

{
  int *map;
  
                    /* Serializes/dumps a PropertySet with start/end markers and its internal map.
                       String literals 'Starting PropertySet', 'PropertySet Map:', and 'Ending
                       PropertySet' identify the class and behavior. */
  map = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting PropertySet\n");
  DebugStream_writeCString(this_obj,"PropertySet Map:\n");
  STLMap_intToSerializablePointer_serialize_01310ea0
            (&stack0x00000000,(void *)((int)this + 4),(int)map);
  DebugStream_writeCString(this_obj,"Ending PropertySet\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

