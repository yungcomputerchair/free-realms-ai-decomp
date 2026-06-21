// addr: 0x013628a0
// name: Game_PlayElementRange_copyFromNext
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_PlayElementRange_copyFromNext(undefined4 * dst, undefined4 *
   src) */

undefined4 * __thiscall
Game_PlayElementRange_copyFromNext(void *this,undefined4 *dst,undefined4 *src)

{
  undefined4 *src_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a play-element range from src+1 after copying the leading
                       word. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f13b;
  local_c = ExceptionList;
  src_00 = (undefined4 *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  Game_PlayElementRange_copyConstruct((void *)((int)this + 4),dst + 1,src_00);
  ExceptionList = local_c;
  return this;
}

