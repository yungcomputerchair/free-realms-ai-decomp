// addr: 0x014474d0
// name: FUN_014474d0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StreamAdapter_readThenCommit(void * this, void * value) */

bool __thiscall StreamAdapter_readThenCommit(void *this,void *value)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Reads/validates a value through virtual method 0x10, checks internal state,
                       then commits via virtual method 0x14. */
  this_00 = value;
  cVar1 = (**(code **)(*(int *)this + 0x10))(value,&value);
  if (cVar1 != '\0') {
    bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 4));
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
      return (bool)uVar3;
    }
  }
  return false;
}

