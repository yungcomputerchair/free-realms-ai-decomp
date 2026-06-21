// addr: 0x014b4f50
// name: FUN_014b4f50
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014b4f50(void * this, void * stream) */

bool __thiscall FUN_014b4f50(void *this,void *stream)

{
  void *stream_00;
  bool bVar1;
  undefined1 uVar2;
  
                    /* Deserializes a scoped record by delegating to FUN_013b2530, which reads a
                       base object and one scalar field. It closes the scope on successful nested
                       read. */
  stream_00 = stream;
  (**(code **)(*(int *)this + 0x10))(stream,&stream);
  bVar1 = MatchCommand_deserializeWithCommonFields(this,stream_00);
  if (!bVar1) {
    return false;
  }
  uVar2 = (**(code **)(*(int *)this + 0x14))(stream_00);
  return (bool)uVar2;
}

