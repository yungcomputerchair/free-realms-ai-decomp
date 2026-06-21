// addr: 0x014183e0
// name: CWPlayer_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayer_dump(void * this, void * serializer) */

void __thiscall CWPlayer_dump(void *this,void *serializer)

{
  void *stream;
  
                    /* Dumps CWPlayer, calling its base dump and writing the DeploymentLimbo field.
                       Evidence is exact "Starting CWPlayer", "DeploymentLimbo:", and "Ending
                       CWPlayer" strings. */
  if (serializer == (void *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(serializer);
  }
  DebugStream_writeCString(stream,"Starting CWPlayer\n");
  CWPlayer_dump(this,stream);
  DebugStream_writeCString(stream,"DeploymentLimbo: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x4c));
  DebugStream_writeCString(stream,"Ending CWPlayer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

