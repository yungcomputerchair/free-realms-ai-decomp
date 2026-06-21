// addr: 0x014080c0
// name: AccountCommand_serializeExtended
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_serializeExtended(void * this, void * serializer) */

void __thiscall AccountCommand_serializeExtended(void *this,void *serializer)

{
  void *serializer_00;
  
                    /* Serializes an AccountCommand-derived object by writing five integer fields
                       and one string after the AccountCommand base serialization. Evidence is
                       AccountCommand_serialize plus Serializer_appendInteger and appendString
                       calls; exact derived class is not identified. */
  serializer_00 = serializer;
  (**(code **)(*(int *)this + 8))();
  AccountCommand_serialize(this,serializer,(int)serializer_00);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 8));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x14));
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x18));
  Serializer_appendString(serializer,(void *)((int)this + 0x1c));
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

