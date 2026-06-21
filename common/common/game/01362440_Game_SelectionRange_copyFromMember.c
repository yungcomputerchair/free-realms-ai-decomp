// addr: 0x01362440
// name: Game_SelectionRange_copyFromMember
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_SelectionRange_copyFromMember(undefined4 * dst, undefined4 *
   src, undefined4 member) */

undefined4 * __thiscall
Game_SelectionRange_copyFromMember(void *this,undefined4 *dst,undefined4 *src,undefined4 member)

{
  undefined4 *src_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the leading word from src, then copy-constructs the contained
                       selection/range member from an explicit third argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f06b;
  local_c = ExceptionList;
  src_00 = (undefined4 *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  Game_SelectionRange_copyConstruct((void *)((int)this + 4),src,src_00);
  ExceptionList = local_c;
  return this;
}

