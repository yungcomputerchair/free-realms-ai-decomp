// addr: 0x0140c2d0
// name: NetworkCommand_dump
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_dump(void * this, void * debugStream) */

void __thiscall NetworkCommand_dump(void *this,void *debugStream)

{
                    /* Base NetworkCommand debug dump: enters the debug stream section and writes
                       start/end NetworkCommand markers. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting NetworkCommand\n");
  DebugStream_writeCString(debugStream,"Ending NetworkCommand\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

