// addr: 0x01454970
// name: FUN_01454970
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01454970(void * this, void * stream) */

bool __thiscall FUN_01454970(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a scoped object using FUN_014237e0 for the nested/base state. It
                       stores the stream scope value, delegates, and closes on success. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = QueryNode_deserializeChild(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

