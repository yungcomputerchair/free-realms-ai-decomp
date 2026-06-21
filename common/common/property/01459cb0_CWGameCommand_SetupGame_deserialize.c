// addr: 0x01459cb0
// name: CWGameCommand_SetupGame_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CWGameCommand_SetupGame_deserialize(int * this, void * reader) */

uint __thiscall CWGameCommand_SetupGame_deserialize(void *this,void *reader)

{
  void *reader_00;
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* Deserializes CWGameCommand_SetupGame by opening the stream record, delegating
                       to the game-command setup base reader, then reading the two setup fields at
                       offsets 0x20 and 0x21 before closing the record. */
  reader_00 = reader;
  uVar2 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if ((char)uVar2 != '\0') {
    uVar2 = CWGameCommand_SetupGame_deserializePayload(this,reader_00);
    if ((char)uVar2 != '\0') {
      bVar1 = Deserializer_readInteger(reader_00,(int *)((int)this + 0x80));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1) {
        bVar1 = Deserializer_readInteger(reader_00,(int *)((int)this + 0x84));
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1) {
          uVar2 = (**(code **)(*(int *)this + 0x14))(reader_00);
          return uVar2;
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}

