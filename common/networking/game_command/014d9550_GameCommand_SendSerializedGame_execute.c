// addr: 0x014d9550
// name: GameCommand_SendSerializedGame_execute
// subsystem: common/networking/game_command
// source (binary assert): common/networking/game_command/GameCommandSendSerializedGame.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameCommand_SendSerializedGame_execute(void * this) */

int __fastcall GameCommand_SendSerializedGame_execute(void *this)

{
  char cVar1;
  uint size;
  void *outBuffer;
  int iVar2;
  void *game;
  char *fmt;
  undefined1 *puVar3;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes SendSerializedGame by inflating the serialized game buffer,
                       constructing/loading a game object, and logging whether reconstruction
                       succeeded. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016adb58;
  local_c = ExceptionList;
  size = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  GameCommand_execute(this);
  outBuffer = Mem_Alloc(*(int *)((int)this + 0x28) + 1);
  local_24 = *(int *)((int)this + 0x28) + 1;
  iVar2 = Zlib_inflateBuffer(outBuffer,&local_24,*(void **)((int)this + 0x24),
                             *(int *)((int)this + 0x2c));
  if (iVar2 != 0) {
    FUN_012f5a60("zres == Z_OK",
                 "..\\common\\networking\\game_command\\GameCommandSendSerializedGame.cpp",0x24);
  }
  PacketBuffer_init(local_20);
  uStack_4 = 0;
  RawBuffer_assign(local_20,outBuffer,*(void **)((int)this + 0x28),size);
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  game = Game_findByID(iVar2);
  if (game == (void *)0x0) {
    FUN_012f5a60(&DAT_018e78cc,
                 "..\\common\\networking\\game_command\\GameCommandSendSerializedGame.cpp",0x2d);
  }
  Game_logGeneral(game,"SerializedGame::execute",size);
  Game_setSerializedGameReconstructing(game,'\x01');
  puVar3 = local_20;
  cVar1 = (**(code **)(*(int *)((int)game + 0x10) + 0x24))();
  if (cVar1 == '\0') {
    fmt = "Wasn\'t able to reconstruct game!";
  }
  else {
    fmt = "Game Reconstructed.";
  }
  Game_logGeneral(game,fmt,puVar3);
                    /* WARNING: Subroutine does not return */
  _free(outBuffer);
}

