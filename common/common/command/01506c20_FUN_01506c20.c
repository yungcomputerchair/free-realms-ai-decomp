// addr: 0x01506c20
// name: FUN_01506c20
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInstallActionMap_debugDump(void * this, void * printer) */

void __thiscall CommandObjectInstallActionMap_debugDump(void *this,void *printer)

{
  uint uVar1;
  
                    /* Debug-dump for CommandObjectInstallActionMap: brackets output with
                       Starting/Ending markers and streams ValueData, Event, Phase, ActionID,
                       OriginCard fields (offsets 0x47,0x4a-0x4d) to a printer object. */
  (**(code **)(*(int *)this + 8))(printer);
  DebugStream_writeCString(printer,"Starting CommandObject_InstallActionMap\n");
  CommandObject_dump(this,printer);
  DebugStream_writeCString(printer,"ValueData: ");
  (**(code **)(*(int *)((int)this + 0x11c) + 0x28))(printer);
  DebugStream_writeCString(printer,"Event: ");
  Serializer_appendInteger(printer,*(uint *)((int)this + 0x128));
  DebugStream_writeCString(printer,"Phase: ");
  Serializer_appendInteger(printer,*(uint *)((int)this + 300));
  DebugStream_writeCString(printer,"ActionID: ");
  if (*(int *)((int)this + 0x130) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01321f20();
  }
  Serializer_appendInteger(printer,uVar1);
  DebugStream_writeCString(printer,"OriginCard: ");
  if (*(int *)((int)this + 0x134) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(printer,uVar1);
  DebugStream_writeCString(printer,"Ending CommandObject_InstallActionMap\n");
  (**(code **)(*(int *)this + 0xc))(printer);
  return;
}

