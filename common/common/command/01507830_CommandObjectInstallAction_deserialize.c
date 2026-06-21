// addr: 0x01507830
// name: CommandObjectInstallAction_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectInstallAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectInstallAction_deserialize(void * this, void * stream) */

void __thiscall CommandObjectInstallAction_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  
                    /* Deserializes InstallAction command state, reading common command fields and
                       an integer action identifier at offset 0x11c. Assertions cite
                       CommandObjectInstallAction.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallAction.cpp",0x5f);
  }
  CommandObject_deserialize(this,stream_00);
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectInstallAction.cpp",100);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

