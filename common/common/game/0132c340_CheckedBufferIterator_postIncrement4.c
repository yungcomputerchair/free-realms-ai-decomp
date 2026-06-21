// addr: 0x0132c340
// name: CheckedBufferIterator_postIncrement4
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CheckedBufferIterator_postIncrement4(void * this, void * old_value_out)
    */

void * __thiscall CheckedBufferIterator_postIncrement4(void *this,void *old_value_out)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* Implements a checked post-increment for an iterator/cursor: copies the
                       current owner/offset pair to the output, validates the owner and bounds, then
                       advances the offset by 4 bytes. Used in Game.cpp iteration code. */
  iVar1 = *(int *)this;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(int *)old_value_out = iVar1;
  *(undefined4 *)((int)old_value_out + 4) = uVar2;
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (*(uint *)(*(int *)this + 8) <= *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return old_value_out;
}

