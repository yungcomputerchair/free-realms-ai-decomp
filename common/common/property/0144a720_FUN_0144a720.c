// addr: 0x0144a720
// name: FUN_0144a720
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_0144a720(void * this, void * stream) */

bool __thiscall FUN_0144a720(void *this,void *stream)

{
  void *value;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a scoped object through the common FUN_014474d0 one-field
                       helper. It opens the stream scope, delegates the nested payload, then closes
                       on success. */
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

