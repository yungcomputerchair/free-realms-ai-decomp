// addr: 0x014b5840
// name: FUN_014b5840
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014b5840(void * this, void * stream) */

bool __thiscall FUN_014b5840(void *this,void *stream)

{
  void *stream_00;
  bool bVar1;
  undefined1 uVar2;
  
                    /* Another scoped deserialization wrapper around FUN_013b2530. It begins the
                       stream scope, delegates the nested payload read, and closes on success. */
  stream_00 = stream;
  (**(code **)(*(int *)this + 0x10))(stream,&stream);
  bVar1 = MatchCommand_deserializeWithCommonFields(this,stream_00);
  if (!bVar1) {
    return false;
  }
  uVar2 = (**(code **)(*(int *)this + 0x14))(stream_00);
  return (bool)uVar2;
}

