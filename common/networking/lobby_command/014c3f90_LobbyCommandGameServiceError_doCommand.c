// addr: 0x014c3f90
// name: LobbyCommandGameServiceError_doCommand
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandGameServiceError.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommandGameServiceError_doCommand(void * this) */

int __fastcall LobbyCommandGameServiceError_doCommand(void *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes the game-service-error lobby command by validating the target
                       lobby/game service, building an opcode 0x1a network response, writing the
                       group/service ids and the string payload, then dispatching it. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016aa8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = *(undefined4 *)((int)this + 0xc);
  FUN_012cfde0(uVar3,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  iVar1 = FUN_012cc6b0(uVar3);
  this_00 = (void *)0x0;
  if (iVar1 == 0) {
    FUN_012f5a60("lobby","..\\common\\networking\\lobby_command\\LobbyCommandGameServiceError.cpp",
                 0x37);
  }
  DisplayActionManager_ensureSingleton();
  FUN_012d08e0();
  FUN_013a3480();
  pvVar2 = Mem_Alloc(0x14);
  uStack_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this_00 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x1a);
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 0xc));
  DisplayActionBuilder_addIntArg(this_00,*(int *)((int)this + 8));
  DisplayActionBuilder_addStringArg(this_00,(void *)((int)this + 0x10));
  uVar3 = FUN_012d3550(this_00);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

