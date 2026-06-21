// addr: 0x0144e570
// name: CWMultiActionState_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWMultiActionState_deserialize(void * this, void * stream) */

bool __thiscall CWMultiActionState_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  int iVar2;
  
                    /* Deserializes a CWMultiActionState payload and closes the stream section on
                       success. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    cVar1 = FUN_0146c3e0(stream_00);
    if (cVar1 != '\0') {
      DebugStream_writeCString(stream_00,"Ending CWMultiActionState\n");
      iVar2 = (**(code **)(*(int *)this + 0xc))(stream_00);
      return iVar2 != 0;
    }
  }
  return false;
}

