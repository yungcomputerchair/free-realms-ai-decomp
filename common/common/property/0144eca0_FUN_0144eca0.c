// addr: 0x0144eca0
// name: FUN_0144eca0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_0144eca0(void * this, void * stream) */

bool __thiscall FUN_0144eca0(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a scoped object whose nested payload is handled by FUN_014716b0.
                       It follows the standard read-scope/open, nested deserialize, close-on-success
                       pattern. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = DoublePassState_deserializeLoopState(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

