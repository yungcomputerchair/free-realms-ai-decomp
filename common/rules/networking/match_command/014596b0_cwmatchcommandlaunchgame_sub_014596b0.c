// addr: 0x014596b0
// name: cwmatchcommandlaunchgame_sub_014596b0
// subsystem: common/rules/networking/match_command
// source (binary assert): common/rules/networking/match_command/cwmatchcommandlaunchgame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 cwmatchcommandlaunchgame_sub_014596b0(int param_1_) */

undefined4 __fastcall cwmatchcommandlaunchgame_sub_014596b0(int param_1_)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path
                       ..\\common\\rules\\networking\\match_command\\cwmatchcommandlaunchgame.cpp;
                       strings Game::getClientSideInstance() == game. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169c5c6;
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
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)(param_1_ + 8));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  puVar3 = (undefined4 *)FUN_01347ad0();
  if (puVar3 == (undefined4 *)0x0) {
    pvVar2 = Mem_Alloc(0x40c);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      ArchetypeDB_getInstance();
      puVar3 = (undefined4 *)Archetype_getField3c(this);
      puVar4 = CWGame_ctor(pvVar2,puVar3,uVar1);
    }
    local_4 = 0xffffffff;
    puVar3 = (undefined4 *)FUN_01347ad0();
    if (puVar3 != puVar4) {
      puVar3 = (undefined4 *)
               FUN_012f5a60("Game::getClientSideInstance() == game",
                            "..\\common\\rules\\networking\\match_command\\cwmatchcommandlaunchgame.cpp"
                            ,0x1e);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}

