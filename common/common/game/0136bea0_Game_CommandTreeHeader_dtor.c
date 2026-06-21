// addr: 0x0136bea0
// name: Game_CommandTreeHeader_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTreeHeader_dtor(int this_) */

void __fastcall Game_CommandTreeHeader_dtor(int this_)

{
  void *unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Destroys a Game command/setup rb-tree header by erasing nodes with
                       FUN_01369b60 and freeing the header at this+4. */
  Game_CommandTree_eraseRange
            ((void *)this_,local_8,(void *)this_,(void *)**(undefined4 **)(this_ + 4),(void *)this_,
             *(undefined4 **)(this_ + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(this_ + 4));
}

