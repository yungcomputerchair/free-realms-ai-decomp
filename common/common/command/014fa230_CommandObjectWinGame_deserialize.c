// addr: 0x014fa230
// name: CommandObjectWinGame_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectWinGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectWinGame_deserialize(void * this, void * stream) */

void __thiscall CommandObjectWinGame_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *local_4;
  
                    /* Deserializes WinGame command state, reading the common command fields and one
                       integer stored at this+0x11c. Assertions cite CommandObjectWinGame.cpp. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWinGame.cpp",0x41);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWinGame.cpp",0x44);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectWinGame.cpp",0x47);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(void **)((int)this + 0x11c) = local_4;
  (*pcVar1)(stream);
  return;
}

