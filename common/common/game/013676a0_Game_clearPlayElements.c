// addr: 0x013676a0
// name: Game_clearPlayElements
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_clearPlayElements(int list_) */

void __fastcall Game_clearPlayElements(int list_)

{
  undefined4 *puVar1;
  void *_Memory;
  int local_8;
  undefined4 local_4;
  
                    /* Clears the Game play-elements container: resets the list/tree header, frees
                       the old first node when non-sentinel, rebuilds helper state with
                       FUN_01362570, and marks flags at +0x20/+0x24. */
  puVar1 = *(undefined4 **)(list_ + 8);
  _Memory = (void *)*puVar1;
  local_8 = list_ + 4;
  *puVar1 = puVar1;
  *(int *)(*(int *)(list_ + 8) + 4) = *(int *)(list_ + 8);
  *(undefined4 *)(list_ + 0xc) = 0;
  if (_Memory != *(void **)(list_ + 8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = *(undefined4 *)(list_ + 8);
  FUN_01362570(9,&local_8);
  *(undefined4 *)(list_ + 0x20) = 1;
  *(undefined4 *)(list_ + 0x24) = 1;
  return;
}

