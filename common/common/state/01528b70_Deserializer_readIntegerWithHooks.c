// addr: 0x01528b70
// name: Deserializer_readIntegerWithHooks
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readIntegerWithHooks(void * this, void * reader) */

bool __thiscall Deserializer_readIntegerWithHooks(void *this,void *reader)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs virtual pre/post hooks around Deserializer_readInteger and returns false
                       if any step fails. Used by many command deserialize routines. */
  this_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
      return (bool)uVar3;
    }
  }
  return false;
}

