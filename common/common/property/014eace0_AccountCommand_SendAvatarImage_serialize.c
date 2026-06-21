// addr: 0x014eace0
// name: AccountCommand_SendAvatarImage_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SendAvatarImage_serialize(void * this, void * serializer)
    */

void __thiscall AccountCommand_SendAvatarImage_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes AccountCommand_SendAvatarImage: calls the base serializer then
                       appends a byte count followed by raw image bytes. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  GrowableBuffer_append
            (serializer,*(void **)((int)this + 0xc),*(void **)((int)this + 8),(int)serializer_00);
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

