// addr: 0x013b36a0
// name: LobbyCommand_JoinLeague_deserializeBody
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyCommand_JoinLeague_deserializeBody(void * this, void * stream) */

bool __thiscall LobbyCommand_JoinLeague_deserializeBody(void *this,void *stream)

{
  void *deserializer;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *unaff_ESI;
  undefined4 unaff_EDI;
  int iStack_4;
  
                    /* Deserializes the JoinLeague lobby command body with common fields, string
                       fields, integers, and account/component data. */
  deserializer = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if ((((cVar1 == '\0') || (bVar2 = LobbyCommand_deserialize(this,deserializer), !bVar2)) ||
      (bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 8)), !bVar2)) ||
     (bVar2 = Deserializer_readInteger(deserializer,(int *)&stack0xfffffff0), !bVar2)) {
    return false;
  }
  *(undefined4 *)((int)this + 0xc) = unaff_EDI;
  if ((1 < iStack_4) &&
     (bVar2 = Deserializer_readString(deserializer,(void *)((int)this + 0x10)), !bVar2)) {
    return false;
  }
  if ((2 < iStack_4) &&
     (bVar2 = Deserializer_readIntegerVector(&stack0xfffffff4,(void *)((int)this + 0x2c)),
     unaff_ESI = deserializer, !bVar2)) {
    return false;
  }
  if (3 < iStack_4) {
    bVar2 = Deserializer_readString(deserializer,(void *)((int)this + 0x3c));
    if (!bVar2) {
      return false;
    }
    cVar1 = FUN_012faf70(deserializer,(int)this + 0x78);
    if (cVar1 == '\0') {
      return false;
    }
    bVar2 = Deserializer_readInteger(deserializer,(int *)&stack0xfffffff4);
    if (!bVar2) {
      return false;
    }
    *(void **)((int)this + 0x58) = unaff_ESI;
  }
  if ((4 < iStack_4) &&
     (bVar2 = Deserializer_readString(deserializer,(void *)((int)this + 0x5c)), !bVar2)) {
    return false;
  }
  uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
  return (bool)uVar3;
}

