// addr: 0x014efd50
// name: NetworkCommand_UpdateLag_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_UpdateLag_serialize(void * this, void * stream) */

void __thiscall NetworkCommand_UpdateLag_serialize(void *this,void *stream)

{
  void *map;
  
                    /* Serializes/debug-writes a NetworkCommand_UpdateLag block, including the
                       account lag map payload. */
  map = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting NetworkCommand_UpdateLag\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Account Lag Map:\n");
  STLMap_dwordPair_serialize(&stack0x00000000,(void *)((int)this + 4),map);
  DebugStream_writeCString(stream,"Ending NetworkCommand_UpdateLag\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

