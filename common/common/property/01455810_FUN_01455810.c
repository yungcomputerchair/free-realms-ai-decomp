// addr: 0x01455810
// name: FUN_01455810
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01455810(void * this, void * stream) */

bool __thiscall FUN_01455810(void *this,void *stream)

{
  void *serializer;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
                    /* Deserializes a scoped object with nested payload reader FUN_0149bc40. It
                       opens the stream scope, delegates, and closes only if all reads succeed. */
  serializer = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    uVar3 = EachExpression_deserialize(this,serializer);
    if ((char)uVar3 != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(serializer);
      return (bool)uVar2;
    }
  }
  return false;
}

