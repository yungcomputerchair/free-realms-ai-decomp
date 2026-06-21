// addr: 0x014d56c0
// name: GameCommand_deserializePlayerTextFields
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializePlayerTextFields(void * this, void * reader) */

bool __thiscall GameCommand_deserializePlayerTextFields(void *this,void *reader)

{
  bool bVar1;
  undefined1 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_8 [4];
  int iStack_4;
  
                    /* Deserializes a game command with several integer fields, one copied
                       version/flag integer, three strings, and an optional boolean for newer stream
                       versions. */
  (**(code **)(*(int *)this + 0x10))(reader,local_8);
  bVar1 = GuildCommand_deserialize(this,reader);
  if ((((bVar1) && (bVar1 = Deserializer_readInteger(reader,(int *)((int)this + 8)), bVar1)) &&
      (bVar1 = Deserializer_readInteger(reader,(int *)((int)this + 0xc)), bVar1)) &&
     ((bVar1 = Deserializer_readInteger(reader,(int *)((int)this + 0x10)), bVar1 &&
      (bVar1 = Deserializer_readInteger(reader,&iStack_4), bVar1)))) {
    *(int *)((int)this + 0x14) = iStack_4;
    bVar1 = Deserializer_readString(reader,(void *)((int)this + 0x18));
    if ((bVar1) &&
       ((bVar1 = Deserializer_readString(reader,(void *)((int)this + 0x34)), bVar1 &&
        (bVar1 = Deserializer_readString(reader,(void *)((int)this + 0x50)), bVar1)))) {
      if (1 < unaff_EDI) {
        bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff4);
        *(bool *)((int)this + 0x6c) = unaff_ESI != 0;
        if (!bVar1) {
          return false;
        }
      }
      uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar2;
    }
  }
  return false;
}

