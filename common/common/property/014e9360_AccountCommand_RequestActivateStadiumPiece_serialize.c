// addr: 0x014e9360
// name: AccountCommand_RequestActivateStadiumPiece_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestActivateStadiumPiece_serialize(void * this, void *
   serializer) */

void __thiscall AccountCommand_RequestActivateStadiumPiece_serialize(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes AccountCommand_RequestActivateStadiumPiece: calls the base
                       serializer then appends a string/buffer member and two byte-sized flags. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendString(serializer,(void *)((int)this + 8));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x24));
  Serializer_appendInteger(serializer,(uint)*(byte *)((int)this + 0x25));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

