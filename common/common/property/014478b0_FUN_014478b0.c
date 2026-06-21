// addr: 0x014478b0
// name: FUN_014478b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014478b0(void * this, void * stream) */

bool __thiscall FUN_014478b0(void *this,void *stream)

{
  void *value;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a scoped object by opening a read scope, delegating to
                       FUN_014474d0 for the nested/base payload, and closing the scope on success.
                       The owning command/property class is not evident in this body. */
  value = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = StreamAdapter_readThenCommit(this,value);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(value);
      return (bool)uVar3;
    }
  }
  return false;
}

