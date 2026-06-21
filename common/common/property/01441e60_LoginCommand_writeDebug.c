// addr: 0x01441e60
// name: LoginCommand_writeDebug
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_writeDebug(void * this, void * stream) */

void __thiscall LoginCommand_writeDebug(void *this,void *stream)

{
                    /* Writes debug output for a LoginCommand, emitting "Starting LoginCommand" and
                       "Ending LoginCommand" around a base/helper debug dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting LoginCommand\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Ending LoginCommand\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

