// addr: 0x014504f0
// name: CWActionPlayedState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWActionPlayedState_deserialize(void * this, void * reader) */

bool __thiscall CWActionPlayedState_deserialize(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  
                    /* Runs deserialize hooks, delegates to ActionPlayedState_deserialize, then
                       reads an integer and optional versioned boolean flag. */
  reader_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (((cVar1 != '\0') && (bVar2 = ActionPlayedState_deserialize(this,reader_00), bVar2)) &&
     (bVar2 = Deserializer_readInteger(reader_00,(int *)((int)this + 0x19c)), bVar2)) {
    if (0xf < (int)this) {
      bVar2 = Deserializer_readInteger(reader_00,(int *)&stack0xfffffff4);
      if (!bVar2) {
        return false;
      }
      *(bool *)((int)this + 0x1a0) = unaff_EDI == 1;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(reader_00);
    return (bool)uVar3;
  }
  return false;
}

