// addr: 0x015070b0
// name: CommandObject_InstallActionFilter_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_InstallActionFilter_serialize(void * this, void *
   serializer) */

void __thiscall CommandObject_InstallActionFilter_serialize(void *this,void *serializer)

{
  int *piVar1;
  bool bVar2;
  uint value;
  
                    /* Serializes/dumps CommandObject_InstallActionFilter, writing a
                       valid-action-filter id and an optional nested serializable filter object.
                       Evidence is the class name and ValidActionFilter label in strings. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_InstallActionFilter\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"ValidActionFilter: ");
  if (*(int *)((int)this + 0x11c) == 0) {
    value = 0;
  }
  else {
    value = PlayElement_getId();
  }
  Serializer_appendInteger(serializer,value);
  piVar1 = *(int **)((int)this + 0x120);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(serializer,1);
  }
  else {
    bVar2 = Serializer_appendInteger(serializer,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(serializer);
    }
  }
  DebugStream_writeCString(serializer,"Ending CommandObject_InstallActionFilter\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

