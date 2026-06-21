// addr: 0x0145a8a0
// name: CWCommandObject_AddCostMod_serialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCommandObject_AddCostMod_serialize(void * this, void * stream) */

void __thiscall CWCommandObject_AddCostMod_serialize(void *this,void *stream)

{
                    /* Serializes/debug-writes a CWCommandObject_AddCostMod block using the
                       ModifyProperty debug writer. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CWCommandObject_AddCostMod\n");
  CommandObject_ModifyProperty_writeDebug(this,stream);
  DebugStream_writeCString(stream,"Ending CWCommandObject_AddCostMod\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

