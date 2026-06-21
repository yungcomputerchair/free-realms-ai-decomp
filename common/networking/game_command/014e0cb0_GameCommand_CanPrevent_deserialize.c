// addr: 0x014e0cb0
// name: GameCommand_CanPrevent_deserialize
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandCanPrevent.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_CanPrevent_deserialize(void * this, void * stream) */

int __thiscall GameCommand_CanPrevent_deserialize(void *this,void *stream)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *local_4;
  
                    /* Deserializes GameCommand_CanPrevent by chaining the base command
                       deserializer, reading additional data around member offset 0x24, and
                       asserting on failure. Evidence is GameCommandCanPrevent.cpp and the
                       serialize/deserialize stream vfunc pattern around base helper FUN_0141b520.
                        */
  local_4 = this;
  uVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if ((char)uVar2 != '\0') {
    uVar2 = GameCommand_deserializeCommon(stream);
    if ((char)uVar2 != '\0') {
      local_4 = stream;
      bVar1 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x24));
      if (!bVar1) {
        FUN_012f5a60("false","..\\common\\networking\\game_command\\GameCommandCanPrevent.cpp",0x5a)
        ;
      }
      iVar3 = (**(code **)(*(int *)this + 0x14))(stream);
      return iVar3;
    }
  }
  return uVar2 & 0xffffff00;
}

