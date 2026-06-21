// addr: 0x0136cf80
// name: Game_CommandTreeHeader_dtor2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_CommandTreeHeader_dtor2(int this_) */

void __fastcall Game_CommandTreeHeader_dtor2(int this_)

{
  void *unaff_ESI;
  undefined1 local_8 [8];
  
                    /* Second destructor wrapper for the same rb-tree header shape: erase nodes via
                       FUN_01369b60 and free the header. */
  Game_CommandTree_eraseRange
            ((void *)this_,local_8,(void *)this_,(void *)**(undefined4 **)(this_ + 4),(void *)this_,
             *(undefined4 **)(this_ + 4),unaff_ESI);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(this_ + 4));
}

