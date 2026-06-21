// addr: 0x01330bc0
// name: CheckedBufferIterator_postIncrement
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CheckedBufferIterator_postIncrement(void * this, void * old_value_out)
    */

void * __thiscall CheckedBufferIterator_postIncrement(void *this,void *old_value_out)

{
  undefined4 uVar1;
  
                    /* Copies the current iterator/cursor pair to the output and then advances the
                       original cursor via 0132d6e0. It appears in Game.cpp loops as a
                       post-increment operation. */
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)old_value_out = *(undefined4 *)this;
  *(undefined4 *)((int)old_value_out + 4) = uVar1;
  FUN_0132d6e0();
  return old_value_out;
}

