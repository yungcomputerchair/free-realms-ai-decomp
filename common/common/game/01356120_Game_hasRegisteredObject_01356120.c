// addr: 0x01356120
// name: Game_hasRegisteredObject_01356120
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_hasRegisteredObject_01356120(void * this, void * object) */

bool __thiscall Game_hasRegisteredObject_01356120(void *this,void *object)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* Converts an object to its registered handle/id and scans the Game vector at
                       offsets 0x220-0x224 for it. */
  if (object == (void *)0x0) {
    FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\game\\Game.cpp",0x6e8);
  }
  iVar2 = PlayElement_getId();
  piVar1 = *(int **)((int)this + 0x224);
  if (piVar1 < *(int **)((int)this + 0x220)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)((int)this + 0x220);
  if (*(int **)((int)this + 0x224) < piVar3) {
    FUN_00d83c2d();
  }
  for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
  }
  piVar1 = *(int **)((int)this + 0x224);
  if (piVar1 < *(int **)((int)this + 0x220)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xfffffde4) {
    FUN_00d83c2d();
  }
  return piVar3 != piVar1;
}

