// addr: 0x014fb1c0
// name: CommandObjectUnInstallActionMap_dump
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectUnInstallActionMap_dump(void * this, void * stream) */

void __thiscall CommandObjectUnInstallActionMap_dump(void *this,void *stream)

{
  uint uVar1;
  
                    /* Appends a textual/debug dump for CommandObject_UnInstallActionMap including
                       base CommandObject fields, ActionID, and OriginCard. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting CommandObject_UnInstallActionMap\n");
  CommandObject_dump(this,stream);
  DebugStream_writeCString(stream,"ActionID: ");
  if (*(int *)((int)this + 0x11c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01321f20();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"OriginCard: ");
  if (*(int *)((int)this + 0x120) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar1);
  DebugStream_writeCString(stream,"Ending CommandObject_UnInstallActionMap\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

