// addr: 0x014a9e50
// name: FUN_014a9e50
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014a9e50(void * this, void * stream) */

bool __thiscall FUN_014a9e50(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Scoped deserialization wrapper around FUN_01442780. It begins a stream
                       record, reads the nested payload, and finalizes the record on success. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeTwoCommonFields(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

