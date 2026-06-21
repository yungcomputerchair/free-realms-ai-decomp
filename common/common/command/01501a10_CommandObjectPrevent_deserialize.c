// addr: 0x01501a10
// name: CommandObjectPrevent_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectPrevent.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectPrevent_deserialize(void * this, void * stream) */

void __thiscall CommandObjectPrevent_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  undefined4 unaff_ESI;
  void *local_4;
  
                    /* Deserializes Prevent command state, reading common command data, a member
                       value object, and an integer stored around offset 0x128. Assertions cite
                       CommandObjectPrevent.cpp. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPrevent.cpp",0x4b);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPrevent.cpp",0x4e);
  }
  (**(code **)(*(int *)((int)this + 0x11c) + 0x24))(stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPrevent.cpp",0x51);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&stack0xfffffff8);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectPrevent.cpp",0x54);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(undefined4 *)((int)this + 0x128) = unaff_ESI;
  (*pcVar1)(stream);
  return;
}

