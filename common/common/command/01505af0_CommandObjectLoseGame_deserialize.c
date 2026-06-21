// addr: 0x01505af0
// name: CommandObjectLoseGame_deserialize
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectLoseGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectLoseGame_deserialize(void * this, void * stream) */

void __thiscall CommandObjectLoseGame_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *local_4;
  
                    /* Deserializes LoseGame command state, reading common command fields and one
                       integer field at offset 0x11c. Assertions cite CommandObjectLoseGame.cpp. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectLoseGame.cpp",0x46);
  }
  CommandObject_deserialize(this,stream);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectLoseGame.cpp",0x49);
  }
  bVar3 = Deserializer_readInteger(stream,(int *)&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectLoseGame.cpp",0x4c);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(void **)((int)this + 0x11c) = local_4;
  (*pcVar1)(stream);
  return;
}

