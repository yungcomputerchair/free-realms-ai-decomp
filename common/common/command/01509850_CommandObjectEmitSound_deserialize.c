// addr: 0x01509850
// name: CommandObjectEmitSound_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectEmitSound.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectEmitSound_deserialize(void * this, void * stream) */

void __thiscall CommandObjectEmitSound_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  
                    /* Deserializes EmitSound command data, reading common command fields and one
                       integer sound-related field at offset 0x11c. Assertions cite
                       CommandObjectEmitSound.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitSound.cpp",0x3f);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitSound.cpp",0x42);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectEmitSound.cpp",0x45);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

