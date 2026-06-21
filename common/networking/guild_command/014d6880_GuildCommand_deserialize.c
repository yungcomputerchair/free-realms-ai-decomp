// addr: 0x014d6880
// name: GuildCommand_deserialize
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GuildCommand_deserialize(void * this, void * deserializer) */

bool __thiscall GuildCommand_deserialize(void *this,void *deserializer)

{
  void *reader;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Common GuildCommand deserialize routine: invokes a virtual pre-read hook,
                       deserializes NetworkCommand base data, reads the guild command integer field,
                       then invokes a virtual post-read hook. */
  reader = deserializer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(deserializer,&deserializer);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader);
    if (extraout_AL != '\0') {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 4));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

