// addr: 0x013c27e0
// name: Deserializer_readTimeValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readTimeValue(void * this, void * outTimeValue) */

bool __thiscall Deserializer_readTimeValue(void *this,void *outTimeValue)

{
  bool bVar1;
  int local_8;
  int local_4;
  
                    /* Reads a two-dword time value from a deserializer in state 1, logging "Wrong
                       state in readTimeValue" if called in the wrong state. */
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 1;
  }
  if (*(int *)((int)this + 0x10) != 1) {
    FUN_012f5dc0("Wrong state in readTimeValue %d",*(int *)((int)this + 0x10));
  }
  if (*(int *)((int)this + 0xc) + 4 <= *(int *)((int)this + 4)) {
    bVar1 = Deserializer_readInteger(this,&local_8);
    if (bVar1) {
      bVar1 = Deserializer_readInteger(this,&local_4);
      if (bVar1) {
        *(int *)outTimeValue = local_8;
        *(int *)((int)outTimeValue + 4) = local_4;
        return true;
      }
    }
  }
  return false;
}

