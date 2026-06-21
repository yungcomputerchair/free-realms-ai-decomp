// addr: 0x0145a230
// name: CWCommandObject_Destroy_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCommandObject_Destroy_serialize(void * this, void * stream) */

void __thiscall CWCommandObject_Destroy_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CWCommandObject_Destroy block using the generic
                       CommandObject dump. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CWCommandObject_Destroy\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"Ending CWCommandObject_Destroy\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

