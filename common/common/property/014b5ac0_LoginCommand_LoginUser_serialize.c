// addr: 0x014b5ac0
// name: LoginCommand_LoginUser_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_LoginUser_serialize(void * this, void * stream) */

void __thiscall LoginCommand_LoginUser_serialize(void *this,void *stream)

{
                    /* Writes a login command payload after the base LoginCommand fields: two string
                       members and a trailing boolean/integer flag. */
  (**(code **)(*(int *)this + 8))(stream);
  LoginCommand_writeDebug(this,stream);
  Serializer_appendString(stream,(void *)((int)this + 4));
  Serializer_appendString(stream,(void *)((int)this + 0x20));
  Serializer_appendInteger(stream,(uint)*(byte *)((int)this + 0x3c));
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

