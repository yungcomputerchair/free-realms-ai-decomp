// addr: 0x0136d8f0
// name: Game_CommandTree_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTree_dtor(int this_) */

void __fastcall Game_CommandTree_dtor(int this_)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded rb-tree destructor for a Game command/setup tree; erases
                       all nodes through FUN_01369b60 and frees the header. */
  puStack_8 = &LAB_01680688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = this_;
  Game_CommandTree_eraseRange
            ((void *)this_,local_14,(void *)this_,(void *)**(undefined4 **)(this_ + 4),(void *)this_
             ,*(undefined4 **)(this_ + 4),(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(this_ + 4));
}

