// addr: 0x014b4da0
// name: MatchCommand_LaunchGame_doCommand
// subsystem: common/networking/match_command
// source (binary assert): common/networking/match_command/MatchCommandLaunchGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int MatchCommand_LaunchGame_doCommand(void * this) */

int __fastcall MatchCommand_LaunchGame_doCommand(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes the LaunchGame match command by preparing match/game state, creating
                       a client-side CTP::Game if needed, and asserting the singleton equals the
                       created game. It returns 1 on completion. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7c76;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0();
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x11);
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 8));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  puVar3 = (undefined4 *)FUN_01347ad0();
  if (puVar3 == (undefined4 *)0x0) {
    pvVar2 = Mem_Alloc(0x39c);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      ArchetypeDB_getInstance();
      puVar3 = (undefined4 *)Archetype_getField3c(this_00);
      puVar4 = Game_ctor(pvVar2,puVar3,uVar1);
    }
    local_4 = 0xffffffff;
    puVar3 = (undefined4 *)FUN_01347ad0();
    if (puVar3 != puVar4) {
      puVar3 = (undefined4 *)
               FUN_012f5a60("Game::getClientSideInstance() == game",
                            "..\\common\\networking\\match_command\\MatchCommandLaunchGame.cpp",0x1e
                           );
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}

