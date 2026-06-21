// addr: 0x01500300
// name: CommandObjectRemoveInstalledAction_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectRemoveInstalledAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectRemoveInstalledAction_deserialize(void * this, void *
   stream) */

void __thiscall CommandObjectRemoveInstalledAction_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  
                    /* Deserializes RemoveInstalledAction command state, reading common command data
                       and an integer action identifier at offset 0x11c. Assertions cite
                       CommandObjectRemoveInstalledAction.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveInstalledAction.cpp",0x5a)
    ;
  }
  CommandObject_deserialize(this,stream_00);
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectRemoveInstalledAction.cpp",0x5f)
    ;
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

