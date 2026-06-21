// addr: 0x01361200
// name: Game_prepass
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_prepass(void * this, int playerId) */

void __thiscall Game_prepass(void *this,int playerId)

{
  int iVar1;
  int iVar2;
  int *extraout_EAX;
  int *piVar3;
  void *this_00;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Logs a prepass command and marks the player's prepass state in an integer
                       map, creating the entry when missing. */
  Game_writeGameLog(this,"prepass\t%d",playerId);
  this_00 = (void *)((int)this + 700);
  StdRbTreeInt_find(this_00,local_8,&playerId,unaff_EDI);
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)this + 0x2c0);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    piVar3 = IntDefaultMap_getOrInsert(this_00,&playerId);
    if (*piVar3 < 1) {
      piVar3 = IntDefaultMap_getOrInsert(this_00,&playerId);
      *piVar3 = *piVar3 + 1;
    }
  }
  piVar3 = IntDefaultMap_getOrInsert(this_00,&playerId);
  *piVar3 = 1;
  return;
}

