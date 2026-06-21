// addr: 0x014f54c0
// name: NetworkCommand_deserializeStringAndOptionalInt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeStringAndOptionalInt(void * this, void *
   reader) */

bool __thiscall NetworkCommand_deserializeStringAndOptionalInt(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  undefined4 unaff_EDI;
  
                    /* Deserializes a network command template, string field, and an optional
                       integer for newer stream versions. */
  reader_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (((cVar1 != '\0') && (NetworkCommand_deserializeTemplate(this,reader_00), extraout_AL != '\0'))
     && (bVar2 = Deserializer_readString(reader_00,(void *)((int)this + 4)), bVar2)) {
    if (1 < (int)this) {
      bVar2 = Deserializer_readInteger(reader_00,(int *)&stack0xfffffff4);
      if (!bVar2) {
        return false;
      }
      *(undefined4 *)((int)this + 0x20) = unaff_EDI;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(reader_00);
    return (bool)uVar3;
  }
  return false;
}

