// addr: 0x01410a20
// name: CWGameTurn_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGameTurn_dump(void * this, void * debugStream) */

void __thiscall CWGameTurn_dump(void *this,void *debugStream)

{
  void *stream;
  void *unaff_EDI;
  
                    /* Dumps a CWGameTurn, including base turn data, a turn integer at offset 0xa8,
                       and a following vector/list member. Evidence is 'Starting/Ending CWGameTurn'
                       strings. */
  if (debugStream == (void *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(debugStream);
  }
  DebugStream_writeCString(stream,"Starting CWGameTurn\n");
  GameTurn_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xa8));
  debugStream = stream;
  STLMap_dwordPair_serialize(&debugStream,(void *)((int)this + 0xac),unaff_EDI);
  DebugStream_writeCString(stream,"Ending CWGameTurn\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

