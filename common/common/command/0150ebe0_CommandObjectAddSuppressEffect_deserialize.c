// addr: 0x0150ebe0
// name: CommandObjectAddSuppressEffect_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectAddSuppressEffect.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectAddSuppressEffect_deserialize(void * this, void * stream) */

void __thiscall CommandObjectAddSuppressEffect_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializes AddSuppressEffect command state: common CommandObject fields
                       plus a value-data/member object at this+0x11c. Assertions cite
                       CommandObjectAddSuppressEffect.cpp. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddSuppressEffect.cpp",0x3a);
  }
  CommandObject_deserialize(this,stream_00);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddSuppressEffect.cpp",0x3d);
  }
  cVar1 = (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream_00);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectAddSuppressEffect.cpp",0x40);
  }
  (**(code **)(*(int *)this + 0x14))(stream_00);
  return;
}

