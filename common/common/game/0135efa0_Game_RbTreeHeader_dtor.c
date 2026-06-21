// addr: 0x0135efa0
// name: Game_RbTreeHeader_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_RbTreeHeader_dtor(int this) */

void __fastcall Game_RbTreeHeader_dtor(int this)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys all nodes in an rb-tree-like container via FUN_01358e90, then frees
                       the tree header stored at this+4. The key/value type is not visible here. */
  puStack_8 = &LAB_0167e968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = this;
  FUN_01358e90(local_14,this,**(undefined4 **)(this + 4),this,*(undefined4 **)(this + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(this + 4));
}

