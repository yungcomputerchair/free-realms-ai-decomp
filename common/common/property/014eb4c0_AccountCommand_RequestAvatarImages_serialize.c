// addr: 0x014eb4c0
// name: AccountCommand_RequestAvatarImages_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestAvatarImages_serialize(void * this, void *
   serializer) */

void __thiscall AccountCommand_RequestAvatarImages_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes AccountCommand_RequestAvatarImages: calls the base serializer then
                       appends a string/buffer member, a byte flag, and an integer field. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x24));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

