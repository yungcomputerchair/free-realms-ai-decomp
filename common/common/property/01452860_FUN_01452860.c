// addr: 0x01452860
// name: FUN_01452860
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01452860(void * this, void * stream) */

bool __thiscall FUN_01452860(void *this,void *stream)

{
  void *serializer;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
                    /* Deserializes a scoped object whose nested format-specific payload is handled
                       by FUN_0137f470. It opens the stream scope, delegates, and closes on success.
                        */
  serializer = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    uVar3 = PropertyContainer_deserialize(this,serializer);
    if ((char)uVar3 != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(serializer);
      return (bool)uVar2;
    }
  }
  return false;
}

