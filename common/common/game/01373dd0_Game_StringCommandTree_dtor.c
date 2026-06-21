// addr: 0x01373dd0
// name: Game_StringCommandTree_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_StringCommandTree_dtor(int this_) */

void __fastcall Game_StringCommandTree_dtor(int this_)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a Game command-related rb-tree through FUN_0136bfa0 and frees its
                       header. The key/value type is not visible in this wrapper. */
  puStack_8 = &LAB_016811e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = this_;
  Game_StringCommandTree_eraseRange
            ((void *)this_,local_14,(void *)this_,(void *)**(undefined4 **)(this_ + 4),(void *)this_
             ,*(undefined4 **)(this_ + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(this_ + 4));
}

