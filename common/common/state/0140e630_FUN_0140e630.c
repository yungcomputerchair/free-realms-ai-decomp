// addr: 0x0140e630
// name: FUN_0140e630
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool card_should_suppress_game_text(void * card, void * context) */

bool __thiscall card_should_suppress_game_text(void *this,void *card,void *context)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  void *objectPtr;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Evaluates whether card game text should be suppressed using play-element
                       game/zone checks and Card_isGameTextSuppressed. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016922e8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (card == (void *)0x22650) {
    objectPtr = (void *)FUN_013402b0(uVar4);
    piVar5 = (int *)unknown_getField30(objectPtr);
    cVar2 = (**(code **)(*piVar5 + 0x1c0))(0x2264f);
    if (cVar2 != '\0') {
      bVar3 = false;
      puStack_18 = (undefined4 *)0x0;
      puStack_14 = (undefined4 *)0x0;
      uStack_10 = 0;
      uStack_4 = 0;
      FUN_013402b0(uVar4);
      PlayElement_getGame();
      piVar5 = (int *)FUN_0139d7c0();
      (**(code **)(*piVar5 + 0x34))(auStack_1c);
      puVar7 = puStack_18;
      if (puStack_14 < puStack_18) {
        FUN_00d83c2d();
      }
      while( true ) {
        puVar1 = puStack_14;
        if (puStack_14 < puStack_18) {
          FUN_00d83c2d();
        }
        if (puVar7 == puVar1) break;
        if (puStack_14 <= puVar7) {
          FUN_00d83c2d();
        }
        iVar6 = (**(code **)(*(int *)*puVar7 + 0x15c))(0x22974,0);
        if (iVar6 != 0x222e7) {
          bVar3 = true;
        }
        if (puStack_14 <= puVar7) {
          FUN_00d83c2d();
        }
        puVar7 = puVar7 + 1;
      }
      if ((bVar3) && (iVar6 = (**(code **)(*(int *)this + 0x15c))(0x22974,0), iVar6 == 0x222e7)) {
        uStack_4 = 0xffffffff;
        if (puStack_18 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return false;
        }
                    /* WARNING: Subroutine does not return */
        _free(puStack_18);
      }
      uStack_4 = 0xffffffff;
      if (puStack_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_18);
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = Card_isGameTextSuppressed(this,(int)card);
  }
  ExceptionList = local_c;
  return bVar3;
}

