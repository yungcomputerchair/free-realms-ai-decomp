// addr: 0x0140c760
// name: FUN_0140c760
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool check_game_flag_and_player_condition(void * this) */

bool __thiscall check_game_flag_and_player_condition(void *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
                    /* Checks a game flag and player/zone condition; exact class and method name are
                       not identifiable. */
  bVar1 = Game_getFlag_14d(*(void **)((int)this + 0x30));
  if ((bVar1) && (cVar2 = Game_getFlag_318(), cVar2 == '\0')) {
    return false;
  }
  uVar3 = FUN_0138a8c0(in_stack_00000004,in_stack_00000008,in_stack_0000000c,0);
  return (bool)uVar3;
}

