// addr: 0x014fb640
// name: CommandObjectUIEffect_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectUIEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectUIEffect_deserialize(void * this, void * stream) */

void __thiscall CommandObjectUIEffect_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  
                    /* Deserializes UIEffect command state, including a common CommandObject prefix
                       and one integer field at offset 0x11c. Assertions cite
                       CommandObjectUIEffect.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUIEffect.cpp",0x4e);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUIEffect.cpp",0x51);
  }
  bVar2 = Deserializer_readInteger(stream_00,(int *)((int)this + 0x11c));
  if (!bVar2) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectUIEffect.cpp",0x54);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

