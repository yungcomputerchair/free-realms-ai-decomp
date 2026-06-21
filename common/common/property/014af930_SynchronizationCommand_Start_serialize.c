// addr: 0x014af930
// name: SynchronizationCommand_Start_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Start_serialize(void * this, void * serializer) */

void __thiscall SynchronizationCommand_Start_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes a SynchronizationCommand_Start by emitting the base
                       synchronization fields and then four integer fields from this+4 through
                       this+0x10 inside the serializer frame. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  SynchronizationCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

