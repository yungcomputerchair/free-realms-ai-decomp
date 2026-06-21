// addr: 0x01416bf0
// name: ReturnValueMap_dump
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ReturnValueMap_dump(void * this, void * debugStream) */

void __thiscall ReturnValueMap_dump(void *this,void *debugStream)

{
                    /* Dumps a ReturnValueMap by writing start/storage/finish markers and delegating
                       to the storage dump helper. */
  DebugStream_writeCString(debugStream,"Starting ReturnValueMap");
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Storage:\n");
  FUN_01416850((int)this + 4);
  DebugStream_writeCString(debugStream,"Finishing ReturnValueMap");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

